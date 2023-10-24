#pragma once
#include <string>
#include <string.h>
#include <vector>

using namespace std;



class Student {
public:
	// 멤버변수 - 이름, 번호, 국어, 영어, 수학 점수, 평균, 석차 저장
	string name;
	int no;
	int kor;
	int eng;
	int math;
	int avg;
	int rank;

public:
	// 멤버함수
	void setStudent(); // 데이터 입력 함수

	void printStudent(); // 전체 정보 출력 함수

	void setAvg(); // 점수 데이터로 평균 저장 함수

	void setRank(); // 석차 저장 함수

	string GetName(); 

	int GetNo();

	int GetKor();

	int GetEng();

	int GetMath();

	int GetAvg();

	int GetRank();

};
