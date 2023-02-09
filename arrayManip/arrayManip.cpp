#include <iostream>

void arrayReverse(int *pArray, int arraySize);
void arrayFill(int *pArray, int arraySize, int value);

int main()
{
    long int arraySize = 999999; // has to be a large number in order to avoid a segmentation fault
                                 // when we assign it a new value.
    int number[arraySize];       // number array
    int *pArray = &number[0];    // the pointer points to the array
    int value;

    // get user input for the size of the array
    std::cout << "Please enter the size of the array: ";
    std::cin >> arraySize;

    // get user input for the values in the array
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "Please enter the data into the array: ";
        std::cin >> number[i];
    }

    // arrayReverse() function uses loops and pointers to reverse the array and output it to the user
    arrayReverse(pArray, arraySize);

    // User enters a value that they would like to fill into the array.
    // This replaces the values that they originally entered into the array.
    std::cout << "Enter the value that you would like to fill: ";
    std::cin >> value;

    // arrayFill() function uses loops and pointers to fill the array.
    arrayFill(pArray, arraySize, value);

    return 0;
}

// Take the arguments that we created in int main() as an int pointer and an int variable
void arrayReverse(int *pArray, int arraySize)
{
    // Count backward through the entire array
    for (int i = arraySize; i > 0; i--)
    {
        // This if statement is strictly just for formatting the output of the program
        if (i == 1)
        {
            std::cout << *(pArray + (i - 1)) << std::endl;
            break;
        }
        // Output the individual values of the array starting from the last value and going down to the beginning
        std::cout << *(pArray + (i - 1)) << ", ";
    }
}

// Takes the arguments that we created in int main() as an int pointer and two int variables
void arrayFill(int *pArray, int arraySize, int value)
{
    // Read through the array from the beginning value to the last value
    for (int i = 0; i < arraySize; i++)
    {
        // Again, strictly for formatting the output
        if (i == (arraySize - 1))
        {
            std::cout << *pArray << std::endl;
            break;
        }
        // Output the value that the user entered for each cell inside of the array
        *pArray = value;
        std::cout << *pArray << ", ";
    }
}