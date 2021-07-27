#pragma once

typedef float Size;
typedef float* SeriesPtr;
typedef float SeriesType;
typedef SeriesType (*SeriesFunctionPtr)(SeriesPtr, Size);//pointer at fun

SeriesPtr DefineHarmonicSeriesArray (Size);
void PrintSeries(SeriesPtr, Size);
SeriesType SeriesSum(SeriesPtr, Size);
SeriesType SeriesProduct(SeriesPtr, Size);
SeriesType SeriesMax(SeriesPtr, Size);
SeriesType SeriesMin(SeriesPtr, Size);
void RunAndPrint(SeriesFunctionPtr, SeriesPtr, Size);
void DeleteSeries(SeriesPtr);