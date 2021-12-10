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
			for (int j = 0; j < rand() % 5; j++) { //приходит до 5 человек на каждую остановку на каждом шаге
				stops[i].append();
			}
		}

		for (int i = 0; i < My_Gorod.busses; i++) {
			busses[i].jump(); //маршрутка едет  

			for (int j = 1; j <= My_Gorod.stops; j++) { //пробег по всем остановкам с целью поиска
				if (busses[i].coord == (j * My_Gorod.dist)) { //если попадает на остановку
					busses[i].exchange(stops[j]);
					if (j == My_Gorod.stops) busses[i].rotate(); //если проехала последнюю остановку - разворачивается
				}
			}

		}

		man->global_time++; //прибавляется время
	} while(return_check() == true); //пока что чтоб управлять каждым шагом
}
