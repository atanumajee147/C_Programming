#include <stdio.h>// use for print
#include <stdlib.h>//use for rendam number generate 
#include <time.h>//use for define time 

int main()
{
    int number, guess, attempts = 1;
    srand(time(0));
    number = rand() % 100 + 1;
   printf("The number is : %d \n", number);//(we are create the game is interesting hide the guess number )
    // we are Enter the loop
    do
    {
        printf("Guess The Number Between 1 to 100 \n "); 
        scanf("%d", &guess);
        if (guess > number) // if your guess is lower than number than 
        {
            printf("LOWER NUMBER PLEASE ! \n");
        }
        else if (guess < number) // if your guess is gigher  than number than 
        {
            printf("HIGHER NUMBER PLEASE ! \n");
        }
     else{
            printf("You guessed it in %d attempts\n", attempts); 
        }
        attempts++;

    } while (guess != number); // whan you are chouse the currect answer than stop the running loop   
if (number==guess){ 
    printf(" \n \t");
    printf("*** ^_^ ==> Congaculation <== ^_^ *** \n \n");
}
    return 0;
}