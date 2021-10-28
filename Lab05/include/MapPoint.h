
#include "MapDistance.h"


class MapPoint{

  std::string Name;
  double longitude; //dlugosc
  double latitude;  //szerokosc

public:

  friend double HowFar(const MapPoint& Acity, const MapPoint Bcity);
  void Longitude(double _longitude){
   longitude=_longitude;
  }

  void Latitude(double _latitude){
   latitude=_latitude;
  }

  void SetId(string _Name){
    Name = _Name;
  }

  void Print(){
   cout<<"Point: "<<Name<<" ("<<longitude<<", "<<latitude<<")"<<endl;
  }

  void Coordinates(double _longitude, double _latitude){
      longitude=_longitude;
      latitude=_latitude;
  }

  MapDistance Distance(const MapPoint& City);
  
  MapPoint& Farthest(MapPoint& Apoint, MapPoint& Bpoint);

  MapPoint(string _Name="Error", double _longitude=0, double _latitude=0){
    Name=_Name;
    latitude=_latitude;
    longitude=_longitude;
  }

  ~MapPoint(){};
};


