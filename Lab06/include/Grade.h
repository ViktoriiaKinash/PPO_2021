#pragma once
#include <iostream>
#include <cstring>
#include <string>

static int id_update=1;

class Grade{
private:
  int ID;
  double grade;
  std::string Description;

public:
  Grade(){};
  Grade(double);
  Grade(const Grade& copy);

  void Print() const;

  double GetGrade(){
    return grade;
  };

  int GetID(){
    return ID;
  };

  void SetID(int _ID){
    ID=_ID;
  };

  std::string GetDescription() const{
    return Description;
  };
  void SetDescription(std::string _Description){
    Description=_Description;
  };
  ~Grade(){};
};
