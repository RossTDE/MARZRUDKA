#pragma once
#include <iostream>

class Human {
    int time0;
public:
    static int global_time;
    Human* pNext = nullptr;

    Human() {
        time0 = global_time;
    }
};

class B_Stop { //������ �� ����� �� ���������(�������)
    Human* Head;
public:
    int Size = 0;
    B_Stop() {
        Head = nullptr;
    }
    ~B_Stop();

    void append();
    void pop_front();
};

class Buss {
    int speed;
public:
    int places,
        full = 0,
        coord = 0;

    Buss(int p = rand() % 10 + 10) : places(p) { //�� ��������� 10+�� 10 ���������� ����
        speed = rand() % 4 + 1; //��������� �������� �� 1 �� 4
    }

    void jump();
    void rotate();
    void exchange(B_Stop stops);
};

struct City {
  unsigned int stops, busses, dist=12; //���������� ���������, ��������� � �������� ����� ����
};

City Describe();

bool return_check();