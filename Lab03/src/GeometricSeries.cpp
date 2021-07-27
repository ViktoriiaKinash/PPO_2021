#include "GeometricSeries.h"

SeriesPtr InitializeGeometricSeries(Size size,  float ratio)
{
  SeriesPtr PointerToArray =  (SeriesPtr) ::operator new(size*sizeof(float)); 

    int j=0;
  while(SeriesPoinersContainer[j]!=NULL) j++;

  SeriesPoinersContainer[j]= PointerToArray;

  PointerToArray[0]=1;
   for(int i=1; i<size; i++){
     PointerToArray[i]=(float)(PointerToArray[i-1]*ratio);
   }

  return PointerToArray;
}


