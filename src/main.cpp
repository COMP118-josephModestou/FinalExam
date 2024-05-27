/** \file main.cpp
* \brief Main program
* \details Contains the entry point of the matrix program
* \author Joseph Modestou
* \version 0.1
* \date 27/05/2024
*/

#include <iostream>

#include "matrix.hpp"

using std::cout, std::cin, std::endl;

/**
 * Prints the option menu to the user 
*/
void printMenu(void);

/**
 * <code>createMatrix</code> creates and returns a matrix of specified size
 * @param x The x size of the matrx
 * @param y The y size of the matrx
 * @return A pointer to the matrix
*/
double **createMatrix(const int x, const int y);

/**
 * <code>deleteMatrix</code> frees the memory used by the matrix
 * @param maxtrix The pointer to the matrix to free
 * @param x The x component of the matrix
*/
void deleteMatrix(double **matrix, const int x);

/**
* Entry point of the program
* <BR>
* @param argc The number of arguments passed to the progam upon execution
* @param argv A null terminated list of pointers to the arguments
* @return Returns the exit code for the program
*/
int main(int argc, char *argv[])
{
    // Holds result from sumNegative
    double sum;
    // Holds the current user option
    int option;

    // Exit flag
    bool exit = false;

    // Matrix array
    double **matrix = (double **)0;

    // Maximum x component of the matrix
    const int maxX = 5;
    // Maximum y component of the matrix
    const int maxY = 3;

    // Create matrix array
    matrix = createMatrix(maxX, maxY);

    while(!exit)
    {
        cout << endl;
        printMenu();

        // Get option from the user
        cin >> option;

        switch(option)
        {
        case 1:
            enterData(matrix, maxX, maxY);
            break;
        case 2:
            sum = sumNegative(matrix, maxX, maxY);
            cout << "The sum of all negative values is: " << sum << endl;
            break;
        case 3:
            showData(matrix, maxX, maxY);
            break;
        case 4:
            exit = true;
        default:
            cout << "Invalid choice." << endl;
        }
    }

    // Free the matrix
    deleteMatrix(matrix, maxX);

    return 0;
}

// printMenu implementation
void printMenu(void)
{
    cout << "1) Enter data in matrix (range -1.5 to 3.5)" << endl;
    cout << "2) Sum of all negative numbers" << endl;
    cout << "3) Show data in matrix" << endl;
    cout << "4) Exit" << endl;
    cout << "Please enter choice: ";
}

// createMatrix implementation
double **createMatrix(const int x, const int y)
{
    double **matrix = (double **)malloc(sizeof(double*) * x);
    for(int i = 0; i < x; i++)
    {
        matrix[i] = (double *)malloc(sizeof(double) * y);
    }

    return matrix;
}

// deleteMatrix implementation
void deleteMatrix(double **matrix, const int x)
{
    for(int i = 0; i < x; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}