#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>

int main(void) { 

int playerNumber = 0;
int number = 0;
int playerInput = 0;    
int guess = 0;
char input;
char str[6] = {0};
int playerA = 1;
int playerB = 2;
int passA = 3;
int passB = 3;
int i = 1;
int playerTurn = 0;
int turn = 0;

 srand(time(NULL));
 playerNumber = rand() % 2; /* Random number is generated */

 srand(time(NULL));
 number = 0 + rand() % 100; /* Random number is generated */

 
  while(number != guess) {

   printf("\nIt's player's %d turn\n", playerNumber);

  printf("Player Number?\n");

  scanf("%d", &playerInput);

 if(playerNumber != playerInput)
   {
	if(playerNumber>playerInput){
		printf("invalid player number. It's player %d turn\n", playerNumber);
	}else{
		printf("You Have to wait your turn. Its player %d turn\n");
	}
   }
   
  if (playerA != playerNumber)
playerB = playerNumber;

if (i%2 == 1) {
    playerNumber = playerA;
    }
else {
    playerNumber = playerB;
    }

i = i+1;

    printf("Enter Your Guess, 0 - 100 or Pass: ");

scanf("%s", str);


if (strcmp(str, "pass") == 0){
    if (playerNumber == playerA){
        passB = passB -1;
        printf("Player 2 has %d more 'Pass' left!\n", passB);
        }   
    else{
        passA = passA -1;
        printf("Player 1 has %d more 'Pass' left!\n", passA);
        }
    }   
else {
    guess = atoi(str);
        if(guess < number) /* if the guess is lower, output: the guess is to low */
            printf("Your guess was to low.\n ");

        else if(guess > number) /* if the guess is higher, output: the guess is to high */
            printf("Your guess was to high.\n ");

        else /* is the guess is equial to the random number: Success!! */
            printf("Yes!! you got it!\n");

         }

 }
  return 0;

}
