#include<stdio.h>

int main()
{
    int arr[3][3] = {
        {10,20,3},
        {40,50,60},
        {7,80,90}
    };

    int found = 0;
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j] == num)
            {
                found = 1;
            }
        }
    }

    if(found == 1)
    {
        printf("Search number found\n");
    }
    else
    {
        printf("Search number not found\n");
    }

    return 0;
}
