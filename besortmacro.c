/*
// Written By Shadoww
// Github http://github.com/dev-shadoww
*/

#include <stdio.h>

/**********************************************************/

// Create macro for variables
#define VAR_INT(NAME, VALUE) int \
                                 NAME = VALUE;
#define VAR_INT_ARR(NAME, SIZE) int \
    NAME[SIZE];
#define VAR_FLOAT(NAME, VALUE) int \
                                   NAME = VALUE;
#define VAR_ASSIGN(NAME, VALUE) NAME = VALUE;

// Create macro for printf()
#define PRINT(VALUE) printf(VALUE);
#define PRINT_VAR(VALUE, VAR) printf(VALUE, VAR);

// Create macro for scanf()
#define SCAN(TYPE, VAR) scanf(TYPE, &VAR);
#define SCAN_STR(TYPE, VAR) scanf(TYPE, VAR);

// Create macro for main function
#define MAIN_START                 \
  int main(int argc, char *argv[]) \
  {
#define MAIN_END }

// Create macro to declare function
#define FUN_START(TYPE, NAME, ARG1, ARG2) \
  TYPE NAME(ARG1, ARG2)                   \
  {
#define FUN_END }

// Create macro for calling function
#define CALL(NAME, ARG1, ARG2) NAME(ARG1, ARG2);

// Create macro for for loop
#define FOR_START(VAR, INITIAL, CONDITION, VALUE, INCREMENT) \
  for (VAR = INITIAL; VAR CONDITION VALUE; INCREMENT)        \
  {
#define FOR_END }

// Create macro for if / else
#define IF_START(VAR1, VAR2, CONDITION) \
  if (VAR1 CONDITION VAR2)              \
  {
#define IF_END }

#define IF_SINGLE_START(VAR, CONDITION, VALUE) \
  if (VAR CONDITION VALUE)                     \
  {
#define IF_SINGLE_END }

#define ELSE_SINGLE_START \
  else                    \
  {
#define ELSE_SINGLE_END }

// Create macro for swapping
#define SWAP(VAR_ONE, VAR_TWO) \
  int TEMP = VAR_ONE;          \
  VAR_ONE = VAR_TWO;           \
  VAR_TWO = TEMP;

// Create macro for return
#define RETURN(VALUE) return VALUE;

#define MAX 50

/**********************************************************/

FUN_START(void, beSort, int arr[MAX], int numberOfElements)

VAR_INT(numberOfComparisons, 0)
VAR_INT(pointToI, 0)
VAR_INT(pointToJ, 0)
VAR_INT(movI, 0)
VAR_INT(movJ, 0)
VAR_INT(remainingElements, 0)
VAR_INT(stage, 0)
VAR_INT(indexI, 0)
VAR_INT(i, 0)
VAR_INT(j, 0)

FOR_START(indexI, 0, <, 2, indexI++)

VAR_ASSIGN(pointToI, 0)
VAR_ASSIGN(pointToJ, numberOfElements - 1)
VAR_ASSIGN(remainingElements, numberOfElements)

FOR_START(i, 0, <, numberOfElements, i++)

VAR_ASSIGN(movI, pointToI)
VAR_ASSIGN(movJ, pointToJ)
VAR_ASSIGN(numberOfComparisons, remainingElements / 2)

FOR_START(j, 0, <, numberOfComparisons, j++)

IF_START(arr[movI], arr[movJ], >)

SWAP(arr[movI], arr[movJ])

IF_END

VAR_ASSIGN(movI, movI + 1)
VAR_ASSIGN(movJ, movJ - 1)

FOR_END

IF_SINGLE_START(stage, ==, 0)

VAR_ASSIGN(pointToJ, pointToJ - 1)

IF_SINGLE_END
ELSE_SINGLE_START

VAR_ASSIGN(pointToI, pointToI + 1)

ELSE_SINGLE_END
VAR_ASSIGN(remainingElements, remainingElements - 1)

FOR_END

VAR_ASSIGN(stage, 1)

FOR_END

FUN_END

/**********************************************************/

MAIN_START
VAR_INT_ARR(arr, MAX)
VAR_INT(indexI, 0)
VAR_INT(indexJ, 0)
VAR_INT(numberOfElements, 0)

PRINT("How many numbers 🔢 do you wanna sort ? : ")
SCAN("%d", numberOfElements)

PRINT("Ok, got it now please enter the numbers 👇,\n> ")
FOR_START(indexI, 0, <, numberOfElements, indexI++)
SCAN("%d", arr[indexI])
FOR_END

CALL(beSort, arr, numberOfElements);

PRINT("\nHere are the sorted numbers 👇,\n> ")
FOR_START(indexI, 0, <, numberOfElements, indexI++)
PRINT_VAR("%d ", arr[indexI])
FOR_END
PRINT("\n")
RETURN(0)
MAIN_END

/**********************************************************/