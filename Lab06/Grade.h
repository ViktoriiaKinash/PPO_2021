#pragma once
#include <iostream>
#include <cstring>
#include <string>

static int id_update = 1;

class Grade{
private:
  int ID;
  double grade;
  std::string Description;

public:
  void Print();
  Grade(double);
  Grade(){};
  Grade(const Grade& copy){
    ID=copy.ID;
    Description=copy.Description;
    grade=copy.grade;
  };

  int GetID(){
    return ID;
  };
  void SetID(int _ID){
    ID=_ID;
  };
    std::string GetDescription(){
    return Description;
  };
  void SetGrade(std::string _Description){
    Description=_Description;
  };
  ~Grade(){};
};
