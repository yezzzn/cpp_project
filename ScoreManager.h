#pragma once
#include "Student.h"

class ScoreManager : public Student {

public:

	void inputAll(); // 전체 정보 입력

	void printAll(); // 전체 정보 출력

	void findName(); // 이름으로 검색하기

	void findNo(); // 번호로 검색하기

	void AvgOut(); // 이름 입력받아 평균과 석차를 출력

	void AvgSortOut(); // 평균 점수가 높은 순으로 이름을 출력
};

