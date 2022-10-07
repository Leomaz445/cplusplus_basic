//
// Created by PC on 08/10/2022.
//
#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(long studentId, string firstName, string lastName, double studentAvgGrade) {
    studentId=studentId;
    this->firstName=firstName;
    this->lastName=lastName;
    this->studentAvgGrade=studentAvgGrade;
}
Student::Student(Student &copyStudent) {
    this->studentId=copyStudent.studentId;
    this->studentId=copyStudent.studentId;
    this->firstName=copyStudent.firstName;
    this->lastName=copyStudent.lastName;
    this->studentAvgGrade=copyStudent.studentAvgGrade;
}
long Student::getStudentId()  {
    return studentId;
}

void Student::setStudentId(long studentId) {
    this->studentId = studentId;
}

string Student::getFirstName()  {
    return firstName;
}

void Student::setFirstName( string firstName) {
    this->firstName = firstName;
}

string Student::getLastName()  {
    return lastName;
}

void Student::setLastName(string lastName) {
    this->lastName = lastName;
}

double Student::getStudentAvgGrade()  {
    return studentAvgGrade;
}

void Student::setStudentAvgGrade(double studentAvgGrade) {
    this->studentAvgGrade = studentAvgGrade;
}
bool Student::isAvgAbove90(){
    if(studentAvgGrade > avgGrade)
        return true;
    return false;
}
Student::~Student(){
    cout<<"Student Class have been distracted"<<endl;
}

Student::Student() {

}
