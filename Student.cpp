#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#include "Student.h"

using namespace std;


void Student::setStudent() { // 데이터 입력 함수
	cout << "이름 : ";
	cin >> name;

	cout << "번호 : ";
	cin >> no;

	cout << "국어 점수 : ";
	cin >> this->kor;

	cout << "영어 점수 : ";
	cin >> this->eng;

	cout << "수학 점수 : ";
	cin >> this->math;

	setAvg();
	setRank();

}

void Student::printStudent() { // 데이터 출력 함수
	cout << " " << endl;
	cout << "이름 : " << GetName() << endl;
	cout << "번호 : " << GetNo() << endl;
	cout << "국어 점수 : " << GetKor() << endl;
	cout << "영어 점수 : " << GetEng() << endl;
	cout << "수학 점수 : " << GetMath() << endl;
	cout << "평균 : " << GetAvg() << endl;
	cout << "석차 : " << GetRank() << endl;
	cout << " " << endl;
}

void Student::setAvg() { // 평균 저장 함수
	int avg;
	avg = (kor + eng + math) / 3;
	this->avg = avg;
}

void Student::setRank() { // 순위 저장 함수

	
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
