#include "MapPoint.h"

MapPoint* construct(std::string City, double longitude_,double latitude_){
 MapPoint * new_city = new MapPoint;
    new_city -> name = City;
    new_city ->latitude = latitude_;
    new_city -> longitude = longitude_;
    return new_city;
}

void print(const MapPoint*  City){
  std::cout<<"Wspolrzedne dla "<<City->name<<": "<<City->longitude<<"E,  "<<City->latitude<<"N"<<std::endl;
}

void print(const MapPoint & City){
  std::cout<<"Wspolrzedne dla "<<City.name<<": "<<City.longitude<<"E,  "<<City.latitude<<"N"<<std::endl;
}

void movePoint (MapPoint* City, double longitude_,double latitude_){
  City->longitude+=longitude_;
  City->latitude+=latitude_;
}

void clear(MapPoint* City1, MapPoint* City2, MapPoint* City3){
std::cout<<"Usuwanie "<<City1->name<<std::endl;
delete City1;
if(City2 != nullptr){
  std::cout<<"Usuwanie "<<City2->name<<std::endl;
  delete City2;
}
if(City3 != nullptr){
  std::cout<<"Usuwanie "<<City3->name<<std::endl;
  delete City3;
}
}
