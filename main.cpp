/*!
 * @file main.cpp
 * Main file of project
 */

#include <iostream>

/*!
 * \brief Function to add two numbers
 * @param a - int number
 * @param b - int number
 * @return result of sum two numbers
 */
int add(int a, int b) {
  return a + b;
}

/*!
 * \brief Function to sub two numbers
 * @param a - int number
 * @param b - int number
 * @return result of sub two numbers
 */
int sub(int a, int b) {
  return a - b;
}

/*!
 * \brief Main program
 *
 * Execution of the program
 * starts here.
 *
 * \param argc Number of arguments
 * \param argv List of words-arguments
 *
 * \return Program exit status
 */
int main(int argc, char *argv[])
{
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
