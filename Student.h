#pragma once
#include <string>
#include <string.h>
#include <vector>

using namespace std;



class Student {
public:
	// ������� - �̸�, ��ȣ, ����, ����, ���� ����, ���, ���� ����
	string name;
	int no;
	int kor;
	int eng;
	int math;
	int avg;
	int rank;

public:
	// ����Լ�
	void setStudent(); // ������ �Է� �Լ�

	void printStudent(); // ��ü ���� ��� �Լ�

	void setAvg(); // ���� �����ͷ� ��� ���� �Լ�

	void setRank(); // ���� ���� �Լ�

	string GetName(); 

	int GetNo();

	int GetKor();

	int GetEng();

	int GetMath();

	int GetAvg();

	int GetRank();

};
