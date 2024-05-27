/**
 * \file matrix.cpp
 * \brief Cpp file for matrix functions
 * \details Contains the function implementations for the matrix functions
 * \author Joseph Modestou
 * \version 0.1
 * \date 27/05/2024
*/

#include <iostream>

#include "matrix.hpp"

using std::cout, std::cin, std::endl;

// enterData implementation
void enterData(double **matrix, const int x, const int y)
{
    for(int i = 0; i < x; i++)
    {
        cout << "<==== Entering in group " << i << " ====>" << endl;
        for(int j = 0; j < y; j++)
        {
            cout << "Enter value " << j << ": ";
            cin >> matrix[i][j];
        }
    }
}

// sumNegative implementation
double sumNegative(double **matrix, const int x, const int y)
{
    double value;
    double sum = 0;

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            value = matrix[i][j];
            if(value < 0)
            {
                sum += value;
            }
        }
    }

    return sum;
}

// showData implementation
void showData(double **matrix, int x, int y)
{ }
