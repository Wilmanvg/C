#include "Student.h"
#pragma once

class StudentList
{
private:
	Student *head;
public:
	StudentList();
	~StudentList();
	void appendStudent(int, string);
	void insertStudent(int, string);
	void deleteStudent(int, string);
	void displayList();
};

