// water , snake and gun game 😁
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int game(char com , char you)
{
    if(com==you)
    {
        return 0;
    }
    if(you=='s' && com=='w')
    {
        return 1;
    }
    else if(you=='w' && com=='s')
    {
        return -1;
    }
    if(you=='g' && com=='s')
    {
        return 1;
    }
    else if(you=='s' && com=='g')
    {
        return -1;
    }
    if(you=='g' && com=='w')
    {
        return -1;
    }
    else if(you=='g' && com=='w')
    {
        return 1;
    }
}
int main() {
    char comp , you  ;
    int number , result ;
    srand(time(0));
    number = rand()%100+1;
    if(number<=33)
    {
        comp = 's';
    }
    else if(number<=66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("********let's start game *******\n");
    printf("enter the character : ");
    scanf("%c",&you);
    result = game(comp,you);
     if(result==0)
     {
         printf("tie in game !\n ");
          printf("the computer choose %c and you choosed %c ",comp,you);
     }
     else if(result==1)
     {
         printf("you win !\n");
         printf("the computer choose %c and you choosed %c ",comp,you);
     }
     else if(result==-1)
     {
         printf("computer has won ! \n");
         printf("the computer choose %c and you choosed %c ",comp,you);
     }
    return 0;
}
//really intersting game we could make stone paper and seezer by using same idea 😏
