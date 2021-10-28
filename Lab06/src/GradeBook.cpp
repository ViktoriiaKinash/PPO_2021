#include "GradeBook.h"

void GradeBook::Insert(const Grade* gradePointer, std::string _Description)
{ 
  Grade* currentList = new Grade [listSize+1];
  for(int i=0; i<listSize; i++){
    currentList[i]=Grade(_listOfGrades[i]);
  }
  if(listSize>0) delete[] _listOfGrades;
  _listOfGrades = new Grade[listSize+1];
  for(int i=0; i<listSize; i++){
    _listOfGrades[i]=currentList[i];
  }
  _listOfGrades[listSize]=*gradePointer;
  delete [] currentList;
  delete gradePointer;
  _listOfGrades[listSize].SetDescription(_Description);
  listSize++; 
}

void GradeBook::Print() const{ 
  std::cout<<"[GradeBook]: Set of grades in the book:"<<std::endl;
  for(int i=0; i<listSize; i++){
    std::cout<<"Grade ID="<<_listOfGrades[i].GetID()<<" value="<<_listOfGrades[i].GetGrade()<<"  ";
    if(_listOfGrades[i].GetDescription() != " ") std::cout<<"\""<<_listOfGrades[i].GetDescription()<<"\"";
    std::cout<<std::endl;
  }
  std::cout<<std::endl; 
} 

double GradeBook::Summary(){ 
  std::cout<<"[GradeBook]: Summary: Number of grades in the book: "<<listSize<<std::endl;
  double Sum=0.0;
  for(int i=0;i<listSize; i++){
    Sum += _listOfGrades[i].GetGrade();
  }
  std::cout<<"[GradeBook]: Summary: Average of grades: "<<Sum/listSize<<std::endl;
  return Sum/listSize; 
}

void GradeBook::AddGrade(double gGrade){
Insert(new Grade(gGrade));
}