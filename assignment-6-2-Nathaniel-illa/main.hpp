#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// Function to return a random number between 0 and 99
int getRandom(void)
{
    return rand() % 100; // Generates a number between 0 and 99
}

// Function to return the number closest to the mean of num1, num2, and num3
int getClosestMed(int num1, int num2, int num3)
{
    // Calculate the mean
    double mean = (num1 + num2 + num3) / 3.0;

    // Calculate the absolute differences from the mean
    double diff1 = fabs(num1 - mean);
    double diff2 = fabs(num2 - mean);
    double diff3 = fabs(num3 - mean);

    // Find the smallest difference and return the corresponding number
    if (diff1 <= diff2 && diff1 <= diff3)
        return num1;
    else if (diff2 <= diff1 && diff2 <= diff3)
        return num2;
    else
        return num3;
}