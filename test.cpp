#include "Header.h"
using namespace std;

int main() {
	srand(time(0));
	City My_Gorod = Describe();
	Human* man = nullptr;
	
	Buss* busses = new Buss[My_Gorod.busses];
	B_Stop* stops = new B_Stop[My_Gorod.stops];

	do {
		for (int i = 0; i < My_Gorod.stops; i++) {
			for (int j = 0; j < rand() % 5; j++) { //�������� �� 5 ������� �� ������ ��������� �� ������ ����
				stops[i].append();
			}
		}

		for (int i = 0; i < My_Gorod.busses; i++) {
			busses[i].jump(); //��������� ����  

			for (int j = 1; j <= My_Gorod.stops; j++) { //������ �� ���� ���������� � ����� ������
				if (busses[i].coord == (j * My_Gorod.dist)) { //���� �������� �� ���������
					busses[i].exchange(stops[j]);
					if (j == My_Gorod.stops) busses[i].rotate(); //���� �������� ��������� ��������� - ���������������
				}
			}

		}

		man->global_time++; //������������ �����
	} while(return_check() == true); //���� ��� ���� ��������� ������ �����
}
