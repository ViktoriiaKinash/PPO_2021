#ifndef CONTAINER
#define CONTAINER
#include <stdio.h>
#include <iostream>
#include <cstdlib>
typedef float Size;
typedef float* SeriesPtr;
typedef float SeriesType;
typedef SeriesType (*SeriesFunctionPtr)(SeriesPtr, Size);
extern SeriesPtr SeriesPoinersContainer[200];
SeriesPtr InitializeGeometricSeries(Size size,  float ratio=2);
SeriesPtr InitializeHarmonicSeries(Size hSize);

#endif