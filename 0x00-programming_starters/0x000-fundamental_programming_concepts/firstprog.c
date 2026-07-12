# include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)                // Loop 10 times
    {
        printf("Bonjour, tout le monde!\n");    // Put the string to the output
    }
    return 0;                                   // Tell OS the program exited without errors
}

/*
    |-------------------------------------------------------------|
    | Un petit défi to loop the program based on our number input | 
    |-------------------------------------------------------------|

    int phrase(int x)
    {
        int i;
        for (i = 1; i <= x; i++)
        {
            printf("Bonjour, tout le monde!\n");
        }
    }

    int main()
    {
        int value;
        printf("Enter a number: ");
        scanf("%d", &value);
        phrase(value);
        return 0;
    }
*/

