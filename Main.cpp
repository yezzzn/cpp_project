#include <iostream>
#include <algorithm>
#include <vector>
#include "ScoreManager.h"

using namespace std;

vector<Student> stu; // student ����
vector<Student> ::iterator it; // student ������ �ݺ���

vector<int> ts; // ��� ����
vector<int> ::iterator tit; // ��� ���� �ݺ���

vector<string> rv; // ��ũ ����
vector<string> ::iterator rit; // ��ũ ���� �ݺ���

bool compareStudents(const Student& s1, const Student& s2) {
	return s1.avg > s2.avg;
}

void menu() {
	while (true) {
		char a;
		cout << "1. ������ �Է� \n";
		cout << "2. �Է��� ��� ���� ��� \n";
		cout << "3. �̸����� �˻� \n";
		cout << "4. ��ȣ�� �˻� \n";
		cout << "5. �̸� �Է¹޾� ��հ� ���� ��� \n";
		cout << "6. ��� ������ ���� ������ �̸� ��� \n";
		cout << "���� �� q �Ǵ� Q�� �������� \n";
		cout << " " << endl;

		cin >> a; // �޴� �Է� �ޱ�

		if (a == '1') { // ������ �Է�
			Student st;
			st.setStudent(); // �̸�, ��ȣ, ���� ����, ���� ����, ���� ���� �ֱ�
			stu.push_back(st); // student Ŭ���� ���Ϳ� ����
			ts.push_back(st.GetAvg()); // ��� Ŭ���� ��ո� ����
			st.setRank(); // ���� ����

			sort(stu.begin(), stu.end(), compareStudents);

			int i = 0;
			for (it = stu.begin(); it < stu.end(); ++it) {
				(*it).rank = ++i;
			}

			continue;

		}
		if (a == '2') { // ���� ���
			for (it = stu.begin(); it != stu.end(); ++it) {
				(*it).printStudent();
			}
			continue;
		}
		if (a == '3') { // �̸����� �˻�
			string a;
			cout << "�̸� �˻� : ";
			cin >> a;

			for (it = stu.begin(); it != stu.end(); ++it) {
				if (it->GetName() == a) {
					(*it).printStudent();
					break;
				}
			}
			continue;
		}
		if (a == '4') { // ��ȣ�� �˻�
			int n;
			cout << "��ȣ �˻� : ";
			cin >> n;
			for (it = stu.begin(); it != stu.end(); it++) {
				if (it->GetNo() == n) {
					(*it).printStudent();
					break;
				}
			}
			continue;
		}
		if (a == '5') { // �̸� �Է¹޾� ��հ� ���� ���
			string a;
			cout << "�̸� �Է� : ";
			cin >> a;

			for (it = stu.begin(); it != stu.end(); it++) {
				if (it->GetName() == a) {
					cout << " " << endl;
					cout << "��� : " << it->GetAvg() << endl;
					cout << "���� : " << it->GetRank() << endl;
					break;
				}
			}
			continue;
		}
		if (a == '6') { // ��� ������ ���� ������ �̸� ���
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
			cout << "�����մϴ�. \n";
			break;
		}
	}
}

int main() {
	menu();
}
