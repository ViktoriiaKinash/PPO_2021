#include "Grade.h"

class GradeBook{
private: 
Grade* _listOfGrades;
int listSize;

public:
GradeBook(){
  listSize=0;
};

void Insert(const Grade*, std::string Description=" ");

void Print() const;
double Summary();
void AddGrade(double Grade);
~GradeBook(){delete [] _listOfGrades;};
};