#include <iostream>
#include <algorithm>
#include <vector>
#include "ScoreManager.h"

using namespace std;

vector<Student> stu; // student 벡터
vector<Student> ::iterator it; // student 벡터의 반복자

vector<int> ts; // 평균 벡터
vector<int> ::iterator tit; // 평균 벡터 반복자

vector<string> rv; // 랭크 벡터
vector<string> ::iterator rit; // 랭크 벡터 반복자

bool compareStudents(const Student& s1, const Student& s2) {
	return s1.avg > s2.avg;
}

void menu() {
	while (true) {
		char a;
		cout << "1. 데이터 입력 \n";
		cout << "2. 입력한 모든 정보 출력 \n";
		cout << "3. 이름으로 검색 \n";
		cout << "4. 번호로 검색 \n";
		cout << "5. 이름 입력받아 평균과 석차 출력 \n";
		cout << "6. 평균 점수가 높은 순으로 이름 출력 \n";
		cout << "종료 시 q 또는 Q를 누르세요 \n";
		cout << " " << endl;

		cin >> a; // 메뉴 입력 받기

		if (a == '1') { // 데이터 입력
			Student st;
			st.setStudent(); // 이름, 번호, 국어 점수, 영어 점수, 수학 점수 넣기
			stu.push_back(st); // student 클래스 벡터에 저장
			ts.push_back(st.GetAvg()); // 평균 클래스 평균만 저장
			st.setRank(); // 순위 저장

			sort(stu.begin(), stu.end(), compareStudents);

			int i = 0;
			for (it = stu.begin(); it < stu.end(); ++it) {
				(*it).rank = ++i;
			}

			continue;

		}
		if (a == '2') { // 정보 출력
			for (it = stu.begin(); it != stu.end(); ++it) {
				(*it).printStudent();
			}
			continue;
		}
		if (a == '3') { // 이름으로 검색
			string a;
			cout << "이름 검색 : ";
			cin >> a;

			for (it = stu.begin(); it != stu.end(); ++it) {
				if (it->GetName() == a) {
					(*it).printStudent();
					break;
				}
			}
			continue;
		}
		if (a == '4') { // 번호로 검색
			int n;
			cout << "번호 검색 : ";
			cin >> n;
			for (it = stu.begin(); it != stu.end(); it++) {
				if (it->GetNo() == n) {
					(*it).printStudent();
					break;
				}
			}
			continue;
		}
		if (a == '5') { // 이름 입력받아 평균과 석차 출력
			string a;
			cout << "이름 입력 : ";
			cin >> a;

			for (it = stu.begin(); it != stu.end(); it++) {
				if (it->GetName() == a) {
					cout << " " << endl;
					cout << "평균 : " << it->GetAvg() << endl;
					cout << "석차 : " << it->GetRank() << endl;
					break;
				}
			}
			continue;
		}
		if (a == '6') { // 평균 점수가 높은 순으로 이름 출력
			sort(ts.rbegin(), ts.rend());

			for (tit = ts.begin(); tit != ts.end(); tit++) {
				for (it = stu.begin(); it != stu.end(); it++) {
					if ((*it).GetAvg() == (*tit)) {
						rv.push_back((*it).GetName());
					}
				}
			}

			for (rit = rv.begin(); rit != rv.end(); rit++) {
				cout << (*rit) << endl;
			}
			continue;
		}
		if (a == 'Q' || 'q') {
			cout << "종료합니다. \n";
			break;
		}
	}
}

int main() {
	menu();
}
