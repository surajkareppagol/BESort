//
// AUTHOR : SHADOWW
// LAST MODIFIED : 13 / 11 / 2022
//

#include <stdio.h>
#include <stdbool.h>
#define MAX 20

void besort();

int arr[MAX], numberOfElements;
bool stage = false;

int main()
{
  int i;
  printf("===========\n");
  printf("| BE SORT |\n");
  printf("===========\n");
  printf("How many numbers 🔢 do you wanna sort ? : ");
  scanf("%d", &numberOfElements);
  printf("Ok, got it now please enter the numbers 👇,\n> ");
  for (i = 0; i < numberOfElements; i++)
    scanf("%d", &arr[i]);
  besort();
  printf("\nHere are the sorted numbers 👇,\n> ");
  for (i = 0; i < numberOfElements; i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}

// The sorting is done in two stages.
void besort()
{
  int i, j, k, tempElement, runLoopFor, indexNumber, countNumber = 0, pointToI, pointToJ;
  for (k = 0; k < 2; k++)
  {
    countNumber = 0;
    runLoopFor = (1 + numberOfElements) / 2;
    pointToI = 0;
    pointToJ = numberOfElements - 1;
    i = pointToI;
    j = pointToJ;
    while (pointToI != pointToJ)
    {
      for (indexNumber = 0; indexNumber < runLoopFor; indexNumber++)
      {
        if (i == j)
          arr[i] = arr[j];
        else if (arr[i] > arr[j])
        {
          tempElement = arr[i];
          arr[i] = arr[j];
          arr[j] = tempElement;
        }
        i++;
        j--;
      }
      if (!stage)
        pointToJ -= 1;
      else
        pointToI += 1;
      i = pointToI;
      j = pointToJ;
      countNumber += 1;
      if ((countNumber % 2 != 0 && numberOfElements % 2 != 0) || (countNumber % 2 == 0 && numberOfElements % 2 == 0)) // n Is Even or n Is Odd
        runLoopFor -= 1;
    }
    stage = true;
  }
}