// game for guessing number using c 
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int number ,guess,r=0 ;
    srand(time(0));
    number = rand()%100+1;
    
    do {
       printf("enter the guess number : ");
    scanf("%d",&guess);
   
    if(guess > number)
    {
        printf("small number please!\n ");
    }
    else if(guess < number){
        printf(" bigger number please!\n  ");
    }
     else
    {
        printf("you guessed right %d attemp ",r);
    }
    r++;
    }
    while(guess!=number);
    
    return 0;
}