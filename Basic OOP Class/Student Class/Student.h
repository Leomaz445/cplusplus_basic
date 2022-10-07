//
// Created by PC on 08/10/2022.
//

#ifndef UNTITLED7_STUDENT_H
#define UNTITLED7_STUDENT_H

#include <iostream>

using namespace std;
static const int avgGrade = 90;
class Student {
private:
    long studentId{};
    string firstName;
    string lastName;
    double studentAvgGrade{};
public:
    Student();
    Student(long studentId, string firstName, string lastName, double studentAvgGrade);
    Student(Student &copyStudent);
    long getStudentId();
    void setStudentId(long studentId);
    string getFirstName();
    void setFirstName( string firstName);
    string getLastName();
    void setLastName(string lastName);
    double getStudentAvgGrade();
    void setStudentAvgGrade(double studentAvgGrade);
    bool isAvgAbove90();
    ~Student();
};


#endif //UNTITLED7_STUDENT_H
