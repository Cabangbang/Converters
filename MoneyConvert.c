/*
Convert Money
Author: Raphael Bien Cabangbang
Student number: C19464094
Compiler: Mingw64
OS: Windows 10
Date:
*/

#include <stdio.h>
#define SIZE 3

float change_to_Euro(float[]); //functions
float change_to_Dollar(float[]);


int main()
{
    float euro_arr[SIZE]; //holds numbers for euro
    float dollar_arr[SIZE]; //holds numbers for dollar
    int i;
    int input;
    char exit;


    do
    {
        printf("\n\nMAIN MENU \n\n");
        printf("Choose a currency\n");
        printf("1. EURO  \n");
        printf("2. US Dollar \n");
        printf("3. Exit Program\n\n");

        scanf("%d", &input);

        switch(input)
        {
            case 1:
            {
                printf("\nyou have selected Euro\n\n");
                printf("Enter three amounts\n");

                for(i=0;i<SIZE;i++)
                {
                    scanf("%f", &*(euro_arr+i));
                }
                change_to_Euro(euro_arr);

                break;
            }
            case 2:
            {
                printf("\nyou have selected US Dollars\n\n");
                printf("Enter three amounts\n");

                for(i=0;i<SIZE;i++)
                {
                    scanf("%f", &*(dollar_arr+i));
                }

                change_to_Dollar(dollar_arr);

                break;
            }
            case 3:
            {
                printf("Do you want to exit the program? y/n");
                scanf("%c", &exit);
                if(exit=='y')
                {
                    return 0;
                }
                if(exit=='n')
                {

                }
            }
        }
    }
    while(input!=3);
    return 0;
}


//euro convert function
float change_to_Euro(float *euro_arr)
{
    int i;
    float convert[SIZE];
    float average;

    for(i=0;i<SIZE;i++)
    {
        *(convert+i) = (*(euro_arr+i)*1.19);
    }


    for(i=0;i<SIZE;i++)
    {
       printf("\n�%.2f converted to $%.2f", *(euro_arr+i),*(convert+i));
    }

    average =(*(euro_arr+0)+*(euro_arr+1)+*(euro_arr+2))/3;

    printf("\nthe average of the three numbers converted = %.2f\n", average);


}

//dolar convert function
float change_to_Dollar(float *dollar_arr)
{
    int i;
    float convert[SIZE];
    float average;

    for(i=0;i<SIZE;i++)
    {
    *(convert+i) =(*(dollar_arr+i)*0.84);
    }


    for(i=0;i<SIZE;i++)
    {
       printf("\n$%.2f converted to �%.2f", *(dollar_arr+i),*(convert+i));
    }

    average =(*(dollar_arr+0)+*(dollar_arr+1)+*(dollar_arr+2))/3;
    printf("\nthe average of the three numbers converted = %.2f\n", average);





}

