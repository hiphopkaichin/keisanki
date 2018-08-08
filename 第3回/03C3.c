#include <stdio.h>

int main()
{
  int A,B;
  int gamecount = 1;
  int scoreA = 0, scoreB = 0;
  
  while( (scoreA<21) && (scoreB<21))
  {
    A = 0;
    B = 0;
    while(A<1 || 3<A || B<1 || 3<B)
    {
    
    printf("Input for game number %2d: ",gamecount);
    
    scanf("%d %d",&A,&B);
      if(A<1 || 3<A || B<1 || 3<B)
      {
        printf("Invalid input (Rock: 1, Scissors: 2, Paper: 3), please try again:\n");
      }
    }
    
    
     printf("A plays ");
     switch(A)
     {
     case 1:printf("Rock, ");
            scoreA = scoreA + 1;
            break;
     case 2:printf("Scissors, ");
            scoreA = scoreA + 2;
            break;
     case 3:printf("Paper, ");
            scoreA = scoreA +5;
            break;
     }
     printf("B plays ");
     switch(B)
     {
     case 1: printf("Rock:");
             scoreB = scoreB + 1;
             break;
     case 2:printf("Scissors:");
            scoreB = scoreB + 2;
            break;
     case 3:printf("Paper:");
            scoreB = scoreB + 5;
            break;
     }
     if(A==B)
     {
       printf(" draw.");
      if(A==3)
      {
       scoreA = scoreA - 5;
       scoreB = scoreB - 5;
      }
      else
      {
       scoreA = scoreA - A;
       scoreB = scoreB - B;
      }
     }
     else if(A==1)
     {
       if(B==3)
       {
         printf(" B wins and gets 5 points\n");
         scoreA = scoreA -1;
       }
       else 
       {
         printf(" A wins and gets 1 points\n");
         scoreB = scoreB - 2;
       }
     }
     else if(A==2)
     {
       if(B==1)
       {
         printf(" B wins and gets 1 points\n");
         scoreA = scoreA - 2;
       }
       else
       {
         printf(" A wins and gets 2 points\n");
         scoreB = scoreB - 5;
       }
     }
     else if (A==3)
     {
       if(B==1)
       {
         printf(" A wins and gets 5 points\n");
         scoreB = scoreB - 1;
       }
       else
       {
         printf(" B wins and gets 2 points\n");
         scoreA = scoreA - 5;
       }
     }
    
    printf("Current number of points: A - %d, B - %d\n",scoreA,scoreB);
    gamecount = + gamecount + 1;
    if(gamecount==11)
    {
      break;
    }
   }
   if(scoreA>scoreB)
   {
    printf("\nWinner: A (points: A %d, B %d)\n",scoreA,scoreB);
   }
   else if(scoreA<scoreB)
   {
    printf("\nWinner: B (points: A %d, B %d)\n",scoreA,scoreB);
   }
   else
   {
    printf("\nDraw (points: A %d, B %d)\n",scoreA,scoreB);
   }
  return 0;
}
