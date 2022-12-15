/*
// Written By Shadoww
// Github http://github.com/dev-shadoww
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 50

void beSort(int arr[MAX], int);
void test();

int main(int argc, char *argv[])
{
  int arr[MAX];
  int indexI, indexJ, numberOfElements;
  srand(time(NULL));

  if (strcmp(argv[1], "-t") == 0)
  {
    test();
    return 0;
  }

  printf("How many numbers 🔢 do you wanna sort ? : ");
  scanf("%d", &numberOfElements);

  printf("Ok, got it now please enter the numbers 👇,\n> ");
  for (indexI = 0; indexI < numberOfElements; indexI++)
    scanf("%d", &arr[indexI]);

  beSort(arr, numberOfElements);

  printf("\nHere are the sorted numbers 👇,\n> ");
  for (indexI = 0; indexI < numberOfElements; indexI++)
    printf("%d ", arr[indexI]);
  printf("\n");
  return 0;
}

void beSort(int arr[MAX], int numberOfElements)
{
  int numberOfComparisons, pointToI, pointToJ, movI, movJ, tempElement, stage = 0, remainingElements;

  for (int indexI = 0; indexI < 2; indexI++)
  {
    pointToI = 0;
    pointToJ = numberOfElements - 1;
    remainingElements = numberOfElements;

    for (int i = 0; i < numberOfElements; i++)
    {
      movI = pointToI;
      movJ = pointToJ;
      numberOfComparisons = (remainingElements / 2);
      for (int j = 0; j < numberOfComparisons; j++)
      {
        if (arr[movI] > arr[movJ])
        {
          tempElement = arr[movI];
          arr[movI] = arr[movJ];
          arr[movJ] = tempElement;
        }
        movI++;
        movJ--;
      }
      if (!stage)
        pointToJ -= 1;
      else
        pointToI += 1;
      remainingElements -= 1;
    }
    stage = 1;
  }
}

void test()
{
  int testCases[1000];

  for (int i = 0; i < 1000; i++)
  {
    testCases[i] = rand() % (20000 - 100 + 1) + 100;
  }

  printf("\nHere are the numbers before sorting 👇,\n> ");
  for (int i = 0; i < 1000; i++)
    printf("%d ", testCases[i]);
  printf("\n");

  printf("------------------------------\n");
  beSort(testCases, 1000);
  printf("\nHere are the sorted numbers 👇,\n> ");
  for (int i = 0; i < 1000; i++)
    printf("%d ", testCases[i]);
  printf("\n");
}