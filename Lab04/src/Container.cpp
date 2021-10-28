#include "Container.h"


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
