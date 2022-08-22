//birsuyilmaz
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 30

char email_suggest1(char name[],char surname[],char year[]);
char email_suggest2(char name[],char surname[],char year[]);
char email_suggest3(char name[],char surname[],char year[]);
char* strconcatenate(char *source, char *destination);
char* substring(char *source, char *destination, int start, int size);
int strlength(char *source);

int main(){
    char *name, *surname,*year;
    name = malloc(SIZE*sizeof(char));
    surname = malloc(SIZE*sizeof(char));
    year = malloc(SIZE*sizeof(char));
    srand(time(NULL));

    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter Your Surname: ");
    scanf("%s", surname);
    printf("Enter Your Birthyear: ");
    scanf("%s", year);
    printf("%s\n", name);
    printf("%s\n", surname);
    name = strconcatenate(surname, name);
    printf("%s\n", name);
    printf("%s\n", surname);
    substring(name, surname, 1, 3);
    printf("%s\n", name);
    printf("%s\n", surname);

    return 0;
}

char email_suggest1(char name[],char surname[],char year[]){
    char *suggest1[SIZE];
    char part[SIZE];
    substring(name, part, 0, 1);
    strconcatenate(part, *suggest1);
    strconcatenate(surname, *suggest1);
    substring(year, part, 2, 2);
    strconcatenate(part, *suggest1);

}

char email_suggest2(char name[],char surname[],char year[]){
    char *suggest2[SIZE];
    substring(name, *suggest2, 0, 2);
    substring(surname, *suggest2, 0, 2);
}
char email_suggest3(char name[],char surname[],char year[]){

}

char* strconcatenate(char *source, char *destination){
    int length_src = strlength(source);
    int length_des = strlength(destination);
    destination = realloc(destination, sizeof(char)*(length_src + length_des));
    printf("%d\n", length_des + length_src);
    printf("%s\n", destination);
    for(int i = 0; i < length_src; i++ ){
        destination[length_des+i] = source[i];
    }
    destination[length_des+length_src] = '\0';
    printf("%s\n", destination);
    return destination;

}

char* substring(char *source, char *destination, int start, int size){
    for(int i = start; i <start+size; i++){
        destination[i-start] = source[i];
    }
    destination[size] = '\0';
    return destination;
}

int strlength(char *source){
    int i;
    for(i  = 0; source[i] != '\0'; i++);

    return i;
}
