#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#include "Student.h"

using namespace std;


void Student::setStudent() { // ������ �Է� �Լ�
	cout << "�̸� : ";
	cin >> name;

	cout << "��ȣ : ";
	cin >> no;

	cout << "���� ���� : ";
	cin >> this->kor;

	cout << "���� ���� : ";
	cin >> this->eng;

	cout << "���� ���� : ";
	cin >> this->math;

	setAvg();
	setRank();

}

void Student::printStudent() { // ������ ��� �Լ�
	cout << " " << endl;
	cout << "�̸� : " << GetName() << endl;
	cout << "��ȣ : " << GetNo() << endl;
	cout << "���� ���� : " << GetKor() << endl;
	cout << "���� ���� : " << GetEng() << endl;
	cout << "���� ���� : " << GetMath() << endl;
	cout << "��� : " << GetAvg() << endl;
	cout << "���� : " << GetRank() << endl;
	cout << " " << endl;
}

void Student::setAvg() { // ��� ���� �Լ�
	int avg;
	avg = (kor + eng + math) / 3;
	this->avg = avg;
}

void Student::setRank() { // ���� ���� �Լ�

	
}

string Student::GetName() {
	return name;
}

int Student::GetNo() {
	return no;
}

int Student::GetKor() {
	return kor;
}

int Student::GetEng() {
	return eng;
}

int Student::GetMath() {
	return math;
}

int Student::GetAvg() {
	return avg;
}

int Student::GetRank() {
	return rank;
}
