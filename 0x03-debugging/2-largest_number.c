#include "main.h"
<<<<<<< HEAD
/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/
int largest_number(int a, int b, int c)
{
int largest;
if (a > b && a > c)
{
largest = a;
}
else if (a > b && c > a)
{
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
=======

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
 int largest;

 if (a > b && a > c)
 {
 largest = a;
 }
 else if (a > b && c > a)
 {
 largest = c;
 }
 else if (b > c)
 {
 largest = b;
 }
 else
 {
 largest = c;
 }

>>>>>>> b945223c8841c37d9ccc47bcdd1a99bd0bb29ad8
return (largest);
}

