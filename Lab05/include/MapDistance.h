#include <string>
#include<iostream>
using namespace std;
class MapDistance{
  std::string Path;
  double longitude_distance;
  double latitude_distance;
public: 
//konstructor
 MapDistance(string _Path="None", double _longitude_distance=0, double _latitude_distance=0){
  Path=_Path;
  longitude_distance=_longitude_distance;
  latitude_distance=_latitude_distance;
  } 
//destructor
 ~MapDistance(){};
MapDistance& operator=(const MapDistance& CopyDistance);

void Print(){
    cout<<"Distance: "<<Path<<" ("<<longitude_distance<<", "<<latitude_distance<<")"<<endl;
  }
};