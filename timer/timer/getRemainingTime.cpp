#include "getRemainingTime.h";
#include <iostream>;
using namespace std;

int getRemainingTime() {
    int hours, minutes, seconds;
    cout << "������� ���������� �����: ";
    cin >> hours;
    cout << "������� ���������� �����: ";
    cin >> minutes;
    cout << "������� ���������� ������: ";
    cin >> seconds;

    return hours * 3600 + minutes * 60 + seconds;
}