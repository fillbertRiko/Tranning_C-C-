#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

struct Student
{
	char name[40];
	char sex[5];
	char idStudent[15];
	char born[15];
	float GPA;
	char className[10];
};

struct Class
{
	char classRoomName[20];
};

struct GPA
{
	float subjectMath;
	float subjectSience;
	float subjectLiterature;
	float subjectDataStructorAndAlgorithms;
	float subjectNetwork;
	float subjectMarketting;
	float subjectHighMath1;
};

struct GiaoVien
{
	char name[40];
	char sex[5];
	char iDTeacher[15];
	char born[15];
};

int main()
{
	cout<<endl;
	return 0;
}