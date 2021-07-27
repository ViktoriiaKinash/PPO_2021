#include "Series.h"

SeriesPtr SeriesPoinersContainer[200] = {NULL};

void PrintSeries(SeriesPtr PointerToArray, Size hSize)
{
 for(int i=0; i<hSize; i++){
    printf("%0.2f\t",PointerToArray[i]);
 }
  printf("\n");
}

SeriesType SeriesSum(SeriesPtr PointerToArray, Size hSize)
{
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
  if(PointerToFunction==&SeriesSum) std::cout<<"Sum: ";
  std::cout<<PointerToFunction(PointerToArray, hSize)<< std::endl;
}


void DeleteSeries()
{
  int NumberOfElements=0;
  while(SeriesPoinersContainer[NumberOfElements]!=NULL) NumberOfElements++;

  std::cout<<"Deleting "<<NumberOfElements<<" series..."<<std::endl;;

  for (int i=0; i<NumberOfElements; i++){
    delete SeriesPoinersContainer[i];
    SeriesPoinersContainer[i] = NULL;
  }
   std::cout<<" *** Memory cleanded up ***"<<std::endl;;
} 
