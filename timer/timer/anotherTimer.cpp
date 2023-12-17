#include <iostream>
#include <string>
using namespace std;

bool isNum(const string& str)
{
    for (char const& c : str) { // �������� ���� �������� � str
        if (!isdigit(c))
            return false;
    }
    return true;
}

int anotherTimer() {
    string key;
    while (true) {
        cout << "������� ����� (�� 1 �� 2): ";
        cin >> key;
        if (isNum(key)) {
            break;
        }
        else {
            cout << "������! ���������� ������� ������ �����. ���������� �����.\n";
        }
    }
    return stoi(key);
}