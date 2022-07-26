/*Cs50x Iran 1400-2021
    Week 1, Lab No1 : popualtion.c*/


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size_started, size_ended, year;
    int calculate_pp(int x, int y);

    // Input For Size We Started And The Year We Want To Start
    do 
    {
        size_started = get_int("Enter Start Siz: ");
    } 
    while (size_started < 9);

    // Input For Size We Ended And The Year We Want to End
    do 
    {
        size_ended = get_int("Enter End Size: ");
    } 
    while (size_ended < size_started);

    // In This Section, Start's To Calculate Between Start And End Size And When Reach The Threshold Stops The Calculation
    year = calculate_pp(size_started, size_ended);

    // Print number of years
    printf("Years: %i\n", year);

    return 0;
}

// Main Calculation Is Here. And After Calculate, The Program Returns Us The Years Of Papulation.
int calculate_pp(int x, int y)
{
    int year = 0;

    while (x < y)
    {
        x = x + (x / 3) - (x / 4);
        year++;
    }

    return year;
}