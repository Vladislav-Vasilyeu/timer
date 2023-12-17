#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>  // ����������� ���������� ��� _kbhit � _getch
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int durationInSeconds;

    cout << "������� ������������ ������� � ��������: ";
    cin >> durationInSeconds;

    int remainingTime = durationInSeconds;
    bool isPaused = false;

    while (remainingTime > 0) {
        system("cls");

        if (_kbhit()) {  // �������� �� ������� �������
            char key = _getch();
            if (key == ' ') {
                isPaused = !isPaused;
            }
        }

        if (!isPaused) {
            int hours = remainingTime / 3600;
            int minutes = (remainingTime % 3600) / 60;
            int seconds = remainingTime % 60;

            cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << endl;

            Sleep(1000);

            remainingTime--;
        } 
        else {
            // ���� �� �����, ��� ����� ������� ������� �����
            int hours = remainingTime / 3600;
            int minutes = (remainingTime % 3600) / 60;
            int seconds = remainingTime % 60;

            cout << "������ �� �����. ���������� �����: " << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << endl;

            Sleep(1000);
        }
    }

    system("cls");
    cout << "������ ��������!" << endl;

    return 0;
}
