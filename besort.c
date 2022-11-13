/*
>>  AUTHOR : SHADOWW
>>  LAST MODIFIED : 13 / 11 / 2022
*/

#include <stdio.h>
#include <stdbool.h>
#define MAX 20

void besort();

int arr[MAX], number_of_elements;
bool stage = false;

//////////////////////////////
int main()
{
  int i;
  printf("===========\n");
  printf("| BE SORT |\n");
  printf("===========\n");
  printf("How many numbers 🔢 do you wanna sort ? : ");
  scanf("%d", &number_of_elements);
  printf("Ok, got it now please enter the numbers 👇,\n> ");
  for (i = 0; i < number_of_elements; i++)
    scanf("%d", &arr[i]);
  besort();
  printf("\nHere are the sorted numbers 👇,\n> ");
  for (i = 0; i < number_of_elements; i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}

//////////////////////////////
void besort()
{
  int i, j, k, tempElement, repeatElement, indexNumber, countNumber = 0, pointElementI, pointElementJ;
  for (k = 0; k < 2; k++)
  {
    countNumber = 0;
    repeatElement = (1 + number_of_elements) / 2;
    pointElementI = 0;
    pointElementJ = number_of_elements - 1;
    i = pointElementI;
    j = pointElementJ;
    while (pointElementI != pointElementJ)
    {
      for (indexNumber = 0; indexNumber < repeatElement; indexNumber++)
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
        pointElementJ -= 1;
      else
        pointElementI += 1;
      i = pointElementI;
      j = pointElementJ;
      countNumber += 1;
      if (countNumber % 2 != 0 && number_of_elements % 2 != 0) // n IS ODD
        repeatElement -= 1;
      else if (countNumber % 2 == 0 && number_of_elements % 2 == 0) // n IS EVEN
        repeatElement -= 1;
    }
    stage = true;
  }
}