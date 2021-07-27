#include "HarmonicSeries.h"

SeriesPtr DefineHarmonicSeriesArray(Size hSize)
{
 SeriesPtr PointerToArray = new SeriesType(hSize);
 for(int i=0; i<hSize; i++){
   PointerToArray[i]=(float)1/(i+1);
 }
 return PointerToArray;
}

void PrintSeries(SeriesPtr PointerToArray, Size hSize)
{
 for(int i=0; i<hSize; i++){
    printf("%0.2f\t",PointerToArray[i]);
 }
 std::cout<<std::endl;
}

SeriesType SeriesSum(SeriesPtr PointerToArray, Size hSize)
{
  std::cout<<"Suma:";
  SeriesType Sum=0;
   for(int i=0; i<hSize; i++){
    Sum+=PointerToArray[i];
   }
  return Sum;
}

SeriesType SeriesProduct(SeriesPtr PointerToArray, Size hSize)
{
  std::cout<<"Product:";
  SeriesType Product=1;
   for(int i=0; i<hSize; i++){
    Product*=PointerToArray[i];
   }
  return Product;
}

SeriesType SeriesMax(SeriesPtr PointerToArray, Size hSize)
{
  std::cout<<"Maximum:";
  SeriesType Max=PointerToArray[0];
   for(int i=0; i<hSize; i++){
    if(Max<PointerToArray[i]){
      Max=PointerToArray[i];
    }
    else continue;
   }
  return Max;
}

SeriesType SeriesMin(SeriesPtr PointerToArray, Size hSize)
{
  std::cout<<"Minimum:";
  SeriesType Min=PointerToArray[0];
   for(int i=0; i<hSize; i++){
    if(Min>PointerToArray[i]){
      Min=PointerToArray[i];
    }
    else continue;
   }
  return Min;
}

void RunAndPrint(SeriesFunctionPtr PointerToFunction, SeriesPtr PointerToArray, Size hSize)
{
  printf("\t%0.4f\n",PointerToFunction(PointerToArray, hSize)); 
}

void DeleteSeries(SeriesPtr PointerToArray)
{
  delete[] PointerToArray;
}