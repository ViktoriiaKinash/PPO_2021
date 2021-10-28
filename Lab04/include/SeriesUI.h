#ifndef SERIES_H
#define SERIES_H

#include "Container.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>

void PrintSeries(SeriesPtr, Size);
SeriesType SeriesSum(SeriesPtr, Size);
SeriesType SeriesProduct(SeriesPtr, Size);
SeriesType SeriesMax(SeriesPtr, Size);
SeriesType SeriesMin(SeriesPtr, Size);
void RunAndPrint(SeriesFunctionPtr, SeriesPtr, Size);
void DeleteSeries();

#endif