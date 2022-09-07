// You can write your own name, University ID number and section number here.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Below function takes three floating point values and return the discriminant
float computeDiscriminator(float a, float b, float c){
    return (b * b) - (4 * a * c);
}

// printRoots function below takes as arguments the coefficients of a quadratic equation
//  and prints the two roots of the equation with exactly 4 decimal places
void printRoots(float a, float b, float c){

    float root1, root2, discriminant = computeDiscriminator(a, b, c);

    // condition for real and different roots i.e. discriminant > 0
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.4f\nroot2 = %.4f\n", root1, root2);
    }

    // condition for real and equal roots i.e. discriminant = 0
    else{
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.4f\n", root1);
    }

    // it is given in the question that the discriminant can't be negative so leaving that part
}

// below fuction takes two arguments c and a and generates and returns a random number between c and a
int generateRandomNumbers(int c, int a){
    // uncomment the following line to get random numbers on each run of the program
    // but it may cause the determinant to become negative and this program not works for
    // discriminant < 0 as question itself says assume that the discriminant is non-negative.
    // srand(time(NULL));
    int num = (rand() % (a - c + 1)) + c;
    return num;
}

int main() {

    // declaring 3 variables representng the coefficients of the quadratic equation ax^2 + bx + c = 0.
    float a, b, c;

    // assigning values to a, b and c by calling the function generateRandomNumbers
    a = generateRandomNumbers(-9, 9);
    b = generateRandomNumbers(-9, 9);
    c = generateRandomNumbers(-9, 9);

    // calling the printRoots function
    printRoots(a, b, c);

    // printing the determinant of the equation
    printf("discriminant = %.4f", computeDiscriminator(a, b, c));

    return 0;
} 
