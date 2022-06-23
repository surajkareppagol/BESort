/*
 *   AUTHOR : SHADOWW
 *   LAST MODIFIED : 23 / 06 / 2022
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int a[MAX], n;

void besortFirst()
{
  int i, j, tempElement, repeatElement, indexNumber, countNumber = 0, pointElementI, pointElementJ;
  repeatElement = (1 + n) / 2;
  pointElementI = 0;
  pointElementJ = n - 1;
  i = pointElementI;
  j = pointElementJ;
  while (pointElementI != pointElementJ)
  {
    for (indexNumber = 0; indexNumber < repeatElement; indexNumber++)
    {
      if (i == j)
        a[i] = a[j];
      else if (a[i] > a[j])
      {
        tempElement = a[i];
        a[i] = a[j];
        a[j] = tempElement;
      }
      i++;
      j--;
    }

    pointElementJ -= 1;
    i = pointElementI;
    j = pointElementJ;
    countNumber += 1;
    if (countNumber % 2 != 0 && n % 2 != 0) // n IS ODD
      repeatElement -= 1;
    else if (countNumber % 2 == 0 && n % 2 == 0) // n IS EVEN
      repeatElement -= 1;
  }
}

void besortSecond()
{
  int i, j, tempElement, repeatElement, indexNumber, countNumber = 0, pointElementI, pointElementJ;
  repeatElement = (1 + n) / 2;
  pointElementI = 0;
  pointElementJ = n - 1;
  i = pointElementI;
  j = pointElementJ;
  while (pointElementI != pointElementJ)
  {
    for (indexNumber = 0; indexNumber < repeatElement; indexNumber++)
    {
      if (i == j)
        a[i] = a[j];
      else if (a[i] > a[j])
      {
        tempElement = a[i];
        a[i] = a[j];
        a[j] = tempElement;
      }
      i++;
      j--;
    }
    pointElementI += 1;
    i = pointElementI;
    j = pointElementJ;
    countNumber += 1;
    if (countNumber % 2 != 0 && n % 2 != 0)
      repeatElement -= 1;
    else if (countNumber % 2 == 0 && n % 2 == 0)
      repeatElement -= 1;
  }
}

int main()
{
  int i;
  printf("\n                    -----------\n");
  printf("                    | BE SORT |\n");
  printf("                    -----------\n\n");
  printf("ENTER THE NUMBER OF ELEMENTS : ");
  scanf("%d", &n);
  printf("ENTER THE ELEMENTS : ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  besortFirst();
  besortSecond();
  printf("THE ELEMENTS ARE SORTED SUCCESFULLY : ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}