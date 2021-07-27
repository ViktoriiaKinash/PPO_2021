#include "HarmonicSeries.h"


SeriesPtr InitializeHarmonicSeries(Size hSize)
{
 SeriesPtr PointerToArray = (SeriesPtr) ::operator new (hSize*sizeof(float));

   int j=0;
  while(SeriesPoinersContainer[j]!=NULL) j++;

  SeriesPoinersContainer[j]= PointerToArray;
  
 for(int i=0; i<hSize; i++){
   PointerToArray[i]=(float)1/(i+1);
 }

 return PointerToArray;
}

