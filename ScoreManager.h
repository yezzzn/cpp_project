#pragma once
#include "Student.h"

class ScoreManager : public Student {

public:

	void inputAll(); // ��ü ���� �Է�

	void printAll(); // ��ü ���� ���

	void findName(); // �̸����� �˻��ϱ�

	void findNo(); // ��ȣ�� �˻��ϱ�

	void AvgOut(); // �̸� �Է¹޾� ��հ� ������ ���

	void AvgSortOut(); // ��� ������ ���� ������ �̸��� ���
};

