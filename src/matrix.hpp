/**
 * \file matrix.hpp
 * \brief Header file for matrix functions
 * \details Contains function headers for the matrix files
 * \author Joseph Modestou
 * \version 0.1
 * \date 27/05/2024
*/

/**
 * <code>enterData</code> prompts the user to enter data into the matrix
 * <BR>
 * @param matrix The matrix to enter the data into
 * @param x The x component of the matrix
 * @param y The y component of the matrix
*/
void enterData(double **matrix, const int x, const int y);

/**
 * <code>sumNegative</code> Returns the sum of all negative values in the matrix
 * @param matrix The matrix to get the values from
 * @param x The x component of the matrix
 * @param y The y component of the matrix
 * @returns The sum of all negative values
*/
double sumNegative(double **matrix, const int x, const int y);

/**
 * <code>showData</code> prints all the values in the matrix to the user
 * @param matrix The matrix to get the values from
 * @param x The x component of the matrix
 * @param y The y component of the matrix
*/
void showData(double **matrix, const int x, const int y);