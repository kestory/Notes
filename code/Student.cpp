///////////////////////////////////////////////////////////////////////////////
// File Name:      Student.cpp
//
// Author:         Haowei Li
// CS email:       haowei@cs.wisc.edu
//
// Description:    Class of the Student object.
///////////////////////////////////////////////////////////////////////////////

#include "Student.hpp"
#include <iostream>

using namespace std;

//Overload constructor;
Student::Student(string newName, int newYearOfBirth, const std::vector<double> &newAssignmentsScore,
            double newProjectScore){
	name = newName;
	yearOfBirth = newYearOfBirth;
	&assignmentsScore = newAssignmentsScore;
	projectScore = newProjectScore;
	numStudents++;
	id = getNumStudents();
}

//Accessor Functions:

int Student::getId(){
	return id;
}

string Student::getName(){
	return name;
}

int Student::getYearOfBirth(){
	return yearOfBirth;
}

int Student::getAge(){
	return (current_year-yearOfBirth);
}

vector<double> &getAssignmentsScore(){
	return assignmentsScore;
}

double Student::getProjectScore(){
	return projectScore;
}

int Student::getNumStudents(){
	return numStudents;
}

void Student::printDetails(){
	cout << "STUDENT DETAILS: " << endl;
	cout << "Id = " << getId() << endl;
	cout << "Name = " << getName() << endl;
	cout << "Age = " << getAge() << endl;
	cout << "Assignments = ";
	cout << "Project = " << getProjectScore() << endl;
	
}

double Student::getTotal(){
	return 0.0;
}

string Student::getGrade(){
	return "";
}