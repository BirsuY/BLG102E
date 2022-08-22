//birsuyilmaz
#include <stdio.h>

#define CONTINUE 0
#define WON 1
#define LOST 2
int roll_dice();

int main(){
    int game_status = CONTINUE;
    srand(6); 
    int sum = roll_dice();
    int points = 0;
    

    switch(sum){
        case 7:
        case 11:
            game_status = WON;
            break;
        case 2:
        case 3:
            game_status = LOST;
            break;
        default:
            points = sum;
            printf("Points: %d\n", sum);
            break;
    }
    while(game_status == CONTINUE){
        sum = roll_dice();
        if(sum == points){
            game_status = WON;
        } else{
            game_status = LOST;
        }

    }
    if (game_status == WON){
        printf("Player wins\n");
    }
    else{
        printf("Player loses\n");
    }


    return 0;
}

int roll_dice(){
    int die1 = rand(); 
    int die2 = rand();
    return die1 - die2;
}
