#pragma once
#include "MapPoint.h"

struct MapDist
{
  double longitude;
  double latitude;
};

const MapDist distance(MapPoint City1, MapPoint City2);
const MapPoint & closestPlace(MapPoint* City1, MapPoint* City2, MapPoint* City3);
double angularDistance(const MapDist dist);
MapPoint inTheMiddle(MapPoint* City1, MapPoint* City2, std::string Name);
std::string getName(const MapPoint & City);
