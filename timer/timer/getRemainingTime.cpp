#include <iostream>
#include <string>
using namespace std;

bool isNumber(const string& str)
{
    for (char const& ch : str) { // �������� ���� �������� � str
        if (!isdigit(ch))
            return false;
    }
    return true;
}

int getRemainingTime() {
    string hours, minutes, seconds;
    while (true) {
        cout << "������� ���������� �����: ";
        cin >> hours;
        if (isNumber(hours))
            break;
        else
            cout << "������! ���������� ������� ������ �����. ���������� �����.\n";
    }
    while (true) {
        cout << "������� ���������� �����: ";
        cin >> minutes;
        if (isNumber(minutes))
            break;
        else
            cout << "������! ���������� ������� ������ �����. ���������� �����.\n";
    }
    while (true) {
        cout << "������� ���������� ������: ";
        cin >> seconds;
        if (isNumber(seconds))
            break;
        else
            cout << "������! ���������� ������� ������ �����. ���������� �����.\n";
    }

    return stoi(hours) * 3600 + stoi(minutes) * 60 + stoi(seconds);
}