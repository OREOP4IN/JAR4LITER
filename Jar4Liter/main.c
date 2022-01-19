#include <stdio.h>
#include <stdlib.h>

#define true 1

int max(int num1, int num2);
int min(int num1, int num2);

int main()
{
    int options;
    int jarA = 0;
    int jarB = 0;
    int totalVol = 0;

    printf("Jar B needs to have 4L of water");

    while (true)
    {
        printf("Jar B needs to have 4L of water");
        printf("status: \n A: %i", jarA, "\n B: %i", jarB);
        printf("option: \n   1. Fill jar A \n   2. Fill jar B \n   3. Empty jar A \n   4. Empty jar B \n   5. Pour jar A to B \n   6. Pour jar B to A \n   7. Restart");
        printf("\njarA: %i", jarA);
        printf("\njarB: %i", jarB);

        printf("\nWhat will you do? ");
        scanf("%i", &options);

        switch(options)
        {
            case 1:
            {
                jarA = 3;
            }
            case 2:
            {
                jarB = 5;
            }
            case 3:
            {
                jarA = 0;
            }
            case 4:
            {
                jarB = 0;
            }
            case 5:
            {
                totalVol = jarA + jarB;
                jarA = max((totalVol - 5), 0);
                jarB = min(5, totalVol);
            }
            case 6:
            {
                totalVol = jarA + jarB;
                jarB = max((totalVol - 3), 0);
                jarA = min(3, totalVol);
            }
            case 7:
            {
                jarA = 0;
                jarB = 0;
            }
            case 8: //cheat
            {
                jarB = 4;
            }
        }
/*        if (jarB == 4)
        {
            printf("congrats");
            break;
        } */

    }
    return 0;
}


int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}
