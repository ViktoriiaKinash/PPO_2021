
#include "MapPoint.h"
#include <cmath>

   MapDistance MapPoint::Distance(const MapPoint& City)
   { 
     double d_latitude = this->latitude-City.latitude;
     double d_longitude = this->longitude - City.longitude;
     string Path=this->Name + "-" + City.Name;
    MapDistance Temp(Path, d_longitude, d_latitude);
    return Temp;
  }

  MapPoint& MapPoint::Farthest(MapPoint& Acity, MapPoint& Bcity){
    if(HowFar(*this, Acity)>HowFar(*this, Bcity)){
      return Acity;
    }
    else return Bcity;
     //r = sqrt(delta_dlugosc*delta_dlugosc + delta_szerokosc*delta_szerokosc)
  }

  double HowFar(const MapPoint& Acity, const MapPoint Bcity){
   double howfar = sqrt(pow(Acity.longitude-Bcity.longitude,2)+pow(Acity.latitude-Bcity.latitude, 2));
   return howfar;
  }
