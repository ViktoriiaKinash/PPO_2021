#pragma once

/* declaration of typedef keyword that allows to create new names for existing types to make code more clarifying and easy to change
*/

typedef float Size;
typedef float* SeriesPtr;
typedef float SeriesType;
typedef SeriesType (*SeriesFunctionPtr)(SeriesPtr, Size); /*pointer at functions */

SeriesPtr DefineHarmonicSeriesArray (Size); /* function that takes size of array as an argument and stores the elements into the array using dymanic memory allocation, returns pointer to an array */
void PrintSeries(SeriesPtr, Size); /* function that takes size of array and its' pointer as an arguments and prints the array elements, returns no value  */
SeriesType SeriesSum(SeriesPtr, Size); /* function that takes size of array and its' pointer as an arguments and calculate its' sum, returns a double value (SeriesType) */
SeriesType SeriesProduct(SeriesPtr, Size); /* function that takes size of array and its' pointer as an arguments and calculate its' product, returns a double value (SeriesType) */
SeriesType SeriesMax(SeriesPtr, Size); /* function that takes size of array and its' pointer as an arguments and finds its' highest value, returns a double value (SeriesType) */
SeriesType SeriesMin(SeriesPtr, Size); /* function that takes size of array and its' pointer as an arguments and finds its' minimum value, returns a double value (SeriesType) */
void RunAndPrint(SeriesFunctionPtr, SeriesPtr, Size); /* function that takes size of array, its' pointer and pointer to one of 4 functions of operations as an arguments and prints results, returns no value */
void DeleteSeries(SeriesPtr); /* function that takes pointer to an array and dealocates memory occupied by array, returns no value */