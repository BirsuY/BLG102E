//birsuyilmaz
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[20];
    int id;
    int exams[3];
    int homeworks[3];
    char grade;
} Student;

void read_from_text_file(FILE *fp, Student *student);
void write_into_binary_file(FILE *fp, Student *student);
void read_from_binary_file(FILE *fp, Student *student);
void write_into_text_file(FILE *fp, Student *student);

int main(int argc, char* argv[]){
    FILE *fp1, *fp2, *fp3, *fp4;
    Student *student;
    fp1 = fopen(argv[1], "r");
    int num_std = 0;

    if(!fp1){
        printf("There is an error openning the file\nThe program will terminate");
        fclose(fp1);
        return EXIT_FAILURE;
    }    

    fp2 = fopen(argv[2], "wb");
    
    if(!fp2){
        printf("There is an error openning the file\nThe program will terminate");
        fclose(fp2);
        return EXIT_FAILURE;
    }
    read_from_text_file(fp1, student);
    write_into_binary_file(fp2, student);
    while(!feof(fp1)){
        read_from_text_file(fp1, student);
        write_into_binary_file(fp2, student);
        num_std ++;
    }
    fclose(fp1);
    
    fclose(fp2);

    printf("%d\n", num_std);
    fp3 = fopen(argv[2], "rb");
    if(!fp3){
        printf("There is an error openning the file\nThe program will terminate");
        fclose(fp2);
        return EXIT_FAILURE;
    }
    
    fp4 = fopen(argv[3], "w");
    if(!fp4){
        printf("There is an error openning the file\nThe program will terminate");
        fclose(fp3);
        return EXIT_FAILURE;
    }
    for(int i = 0; i < num_std; i++){
        read_from_binary_file(fp3, student);
        write_into_text_file(fp4, student);
    }

    fclose(fp2);
    fclose(fp3);

    return EXIT_SUCCESS;
}

void read_from_text_file(FILE *fp, Student *student){

    fscanf(fp, "%s %d %d %d %d %d %d %d %c", student->name, &student->id, &student->exams[0], &student->exams[1], &student->exams[2], &student->homeworks[0], &student->homeworks[1], &student->homeworks[2], &student->grade);   

}
void write_into_binary_file(FILE *fp, Student *student){
    fprintf(fp, "%s %d %d %d %d %d %d %d %c", student->name, student->id, student->exams[0], student->exams[1], student->exams[2], student->homeworks[0], student->homeworks[1], student->homeworks[2], student->grade);
}
void read_from_binary_file(FILE *fp, Student *student){
    fscanf(fp, "%s %d %d %d %d %d %d %d %c", student->name, &student->id, &student->exams[0], &student->exams[1], &student->exams[2], &student->homeworks[0], &student->homeworks[1], &student->homeworks[2], &student->grade);
    
}
void write_into_text_file(FILE *fp, Student *student){
    fprintf(fp, "%s %d %d %d %d %d %d %d %c\n", student->name, student->id, student->exams[0], student->exams[1], student->exams[2], student->homeworks[0], student->homeworks[1], student->homeworks[2], student->grade);

}
