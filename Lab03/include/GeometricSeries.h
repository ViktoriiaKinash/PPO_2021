#ifndef GEOMETRIC_SERIES_H
#define GEOMETRIC_SERIES_H
/*
include ifdef directive to make sure that code won't appear twice
*/
#include "Series.h"

SeriesPtr InitializeGeometricSeries(Size size,  float ratio); /* function that takes size of array and its' ratio as an arguments and stores the elements into the array using dymanic memory allocation, returns pointer to an array */

#endif