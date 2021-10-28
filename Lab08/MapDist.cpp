#include "MapDist.h"
#include <cmath>

const MapDist distance(MapPoint City1, MapPoint City2){
    MapDist * new_city = new MapDist;
    new_city ->latitude = (City1).latitude - (City2).latitude;;
    return *new_city; 
}

const MapPoint & closestPlace(MapPoint* City1, MapPoint* City2, MapPoint* City3){
 if(angularDistance(distance(*City1,*City2))<angularDistance(distance(*City1,*City3)))
        return *City2;
    return *City3;
}

double angularDistance(const MapDist dist){
  return sqrt(pow(dist.latitude,2)+pow(dist.longitude,2));
}

MapPoint inTheMiddle(MapPoint* City1, MapPoint* City2, std::string Name){
return {Name,(City1->longitude+City2->longitude)/2,(City1->latitude+City2->latitude)/2};
}

std::string getName(const MapPoint & City){
  return City.name;
}
