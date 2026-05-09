#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int size = 5, arr[5] = {10, 20, 60, 40, 50}, isSorted = 1;
    char name[] = "Harsha", friend[10];

    // friend = name;

    strcpy(friend, name);

    printf("%s", friend);

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] < arr[i + 1])
        {
            continue;
        }
        isSorted = 0;
        break;
    }

    if (isSorted)
    {
        printf("The Array is Sorted");
    }
    else
    {
        printf("The Array is not Sorted");
    }
}

//  I need to find if an Array is Sorted in Ascending order or not through C Program.

/*
1. First, I will initialize an Array with 5 Elements {10, 20, 30, 40, 50} and a Flag isSorted as 1.
2. I will Iterate the Array.
3. At each Iteration, I will check the 2 Consecutive Elements with Condition (arr[i] < arr[i+1]).
    The First Element should be smaller than the Second one.
4. If the Condition is True then I will Continue to the next Iteration. If not, means the Array
 is not sorted then I will assign the Flag isSorted as 0.
5. The Number of iterations should be Only 4 means upto Size - 1 because if the no of iterations
are 5 (upto size) then the last element comparision will happens with a Garbage value.
6. Finally, I will check the Flag isSorted. If it is Truthy then the I will Display
that "Array is Sorted" otherwise "Array is not sorted".
*/