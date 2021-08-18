#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sld,char sname[]) {
  studentId=sld;
  strcpy(name,sname);
  
}

// Display StudentId and Name
void Student::display() {
  count<<"Student Id"<<studentId<<endl;
  cout<<"Student name"<<name<<endl;
  
}
