#include <stdio.h>

int main()
{
  int A,B;
  int scoreA = 0, scoreB = 0;
 
  while(A<1 | 3<A | B<1 | 3<B)
  {
  
  printf("Game input: ");
  
  scanf("%d %d",&A,&B);
    if(A<1 | 3<A | B<1 | 3<B)
    {
      printf("Invalid input (Rock: 1, Scissors: 2, Paper: 3), please try again:\n");
    }
  }
  if(A==B)
  {
    printf("\nDraw (points: A %d, B %d)\n",scoreA,scoreB);
  }
  else
  {
    printf("A: ");
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
    printf("B: ");
    switch(B)
    {
    case 1: printf("Rock;");
            scoreB = scoreB + 1;
            break;
    case 2:printf("Scissors;");
           scoreB = scoreB + 2;
           break;
    case 3:printf("Paper;");
           scoreB = scoreB + 5;
           break;
    }
    if(A==B)
    {
      printf("\nDraw (points: A %d, B %d)\n",scoreA,scoreB);
    }
    else if(A==1)
    {
      if(B==3)
      {
        printf("B wins and gets 5 points\n");
        scoreA = scoreA -1;
        printf("Winner: B (points: A %d, B %d)\n",scoreA,scoreB);
      }
      else 
      {
        printf("A wins and gets 1 points\n");
        scoreB = scoreB - 2;
        printf("Winner: A (points: A %d, B %d)\n",scoreA,scoreB);
      }
    }
    else if(A==2)
    {
      if(B==1)
      {
        printf("B wins and gets 1 points\n");
        scoreA = scoreA - 2;
        printf("Winner: B (points: A %d, B %d)\n",scoreA,scoreB);
      }
      else
      {
        printf("A wins and gets 2 points\n");
        scoreB = scoreB - 5;
        printf("Winner: A (points: A %d, B %d)\n",scoreA,scoreB);
      }
    }
    else if (A==3)
    {
      if(B==1)
      {
        printf("A wins and gets 5 points\n");
        scoreB = scoreB - 1;
        printf("Winner: A (points: A %d, B %d)\n",scoreA,scoreB);
      }
      else
      {
        printf("B wins and gets 2 points\n");
        scoreA = scoreA - 5;
        printf("Winner: B (points: A %d, B %d)\n",scoreA,scoreB);
      }
    }
  }
  
  return 0;
}

