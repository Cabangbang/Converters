/*
Author: Raphael Bien Cabangbang
Student number: C19464094
Compiler: Mingw64
OS: Windows 10
Date:
*/

#include <stdio.h>
#define SIZE 5

float convert_temp(float[]);

int main()
{
    float temperature[SIZE];
    int i;

    printf("enter 5 different temperatures in Celsius units\n");

    for(i=0;i<SIZE;i++)
    {
        scanf("%f", &*(temperature+i));
    }

    convert_temp(temperature);

    printf("\n");
    
    for(i=0;i<5;i++)
    {
        printf("%f farenheit\n", *(temperature+i));
    }




    return 0;
}

float convert_temp(float *temperature)
{
    int i;
    float farenheit;

    for(i=0;i<SIZE;i++)
    {
    farenheit = (*(temperature+i)*9)/5+32;

    *(temperature+i) = farenheit;

    }


}
