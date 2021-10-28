  #include "MapDistance.h"
  

MapDistance& MapDistance::operator=(const MapDistance& CopyDistance){
  
    this->Path=CopyDistance.Path;
    this->longitude_distance=CopyDistance.longitude_distance;
    this->latitude_distance=CopyDistance.latitude_distance;
    return *this;

  }