#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include "displayTime.h"
#include "displayPausedTime.h"
#include "getRemainingTime.h"
#include "pauseTimer.h"
#include "stopTimer.h"
#include "anotherTimer.h"
using namespace std;

int main() {
    system("title ���������� ������");
    system("mode con cols=44 lines=10");

    setlocale(LC_ALL, "Russian");
setTimer:
    int remainingTime = getRemainingTime();
    bool isPaused = false;
    bool isStopped = false;

    while (remainingTime > 0) {
        pauseTimer(isPaused);

        if (!isPaused) {
            system("cls");
            displayTime(remainingTime);
            Sleep(1000);
            remainingTime--;
        }
        else {
            system("cls");
            displayPausedTime(remainingTime);
            Sleep(1000);
        }

        stopTimer(isStopped);

        if (isStopped) {
            remainingTime = 0;
        }
    }

    system("cls");

    cout << setw(206) << setfill(' ') << "������ ��������!" << endl;

    for (int i = 0; i < 2; i++) {
        Beep(800, 300);
        Beep(800, 300);
        Beep(800, 300);
        Beep(800, 300);
        Beep(800, 300);
        Sleep(1500);
    }

    system("cls");
    cout << "������ ���������� ��� ���� ������?\n1 - ��.\n2 - ���.\n";
setAnotherTimer:    
    int key = anotherTimer();
    switch (key) {
        case 1: {
            system("cls");
            goto setTimer;
        }
        case 2: {
            system("cls");
            cout << setw(28) << setfill(' ') << "�� ��������!";
            return 0;
        }
        default: {
            cout << "������! ���������� ������ ����� �� 1 �� 2.\n";
            goto setAnotherTimer;
        }
    }
}