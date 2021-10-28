 #include "Grade.h"

 void Grade::Print() const{
   std::cout<<"Grade ID="<<ID<<" value: "<<grade;
 }

 Grade::Grade(double _grade){
    grade=_grade;
    ID=id_update++;
 }

 Grade::Grade(const Grade& copy){
    ID=copy.ID;
    Description=copy.Description;
    grade=copy.grade;
  }