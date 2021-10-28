#pragma once
#include<iostream>

struct MapPoint
{
  std::string name;
  double longitude;
  double latitude;
};

MapPoint* construct(std::string City, double longitude_,double latitude_);
/* funkcja - "konstruntor" dla struntury MapPoint, ptzjmujacy jako argumenty nazwe miasta, jego szerokosc i dlugosc */
void print(const MapPoint*  City); /* funkcja  wypisujaca nazwe miasta, jego szerokosc i dlugosc, przyjmujaca wskaznik na strukture */
void print(const MapPoint & City); /* funkcja  wypisujaca nazwe miasta, jego szerokosc i dlugosc, przyjmujaca referencje na strukture */
void movePoint (MapPoint* City, double longitude_,double latitude_);
/* funkcja  modyfikujaca szerokosc i dlugosc miasta, przyjmujaca wskaznik na strukture  */
void clear(MapPoint* City1, MapPoint* City2=nullptr, MapPoint* City3=nullptr);
//przeciazona /* funkcja  zwalniajaca pamiec za pomoca new i delete, przyjmujaca wskaznik na struktury (miasta)  */