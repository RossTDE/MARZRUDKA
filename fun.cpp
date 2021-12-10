#include "Header.h"
using namespace std;

int Human::global_time = 0;

// - - - - - - - - Описание списка "Остановка" - - - - - -

B_Stop::~B_Stop() {
    while (Head != nullptr) {
        Human* temp = Head->pNext;
        delete Head;
        Head = temp;
    }
}

void B_Stop::append() {
    Human* temp = new Human;
    temp->pNext = Head;
    Head = temp;

	Size++;
}

void B_Stop::pop_front() {
    Human* temp = Head;

    temp = temp->pNext;
	Head = temp;

    delete temp;
	Size--;
}

// - - - - - - - - Описание списка "Остановка" - - - - - -

void Buss::jump() {
	coord += speed;
}

void Buss::rotate() {
	speed = -speed;
}

void Buss::exchange(B_Stop stops) {
	if(full > 0) full -= rand() % full; //высаживается рандомное количество человек
	while (full < places && stops.Size > 0) {
		full++;
		stops.pop_front();
		cout << "Full: " << full << " Places: " << places << " Size: " << stops.Size;
	}
}

// - - - - - - - - Функции программы - - - - - -

City Describe() {
	City My_Gorod;

	cout << "Describe your City: " << '\n'
			 << "Buss stops: ";
	cin >> My_Gorod.stops;
	cout << "Busses: ";
	cin >> My_Gorod.busses;

	return My_Gorod;
}

bool return_check() {
	bool x = true;
	char button;
	cout << "Press any botton to continue or 0 to stop: ";
	cin >> button;
	if (button == '0') x = false;
	return x;
}
// - - - - - - - -  - - - - - -
