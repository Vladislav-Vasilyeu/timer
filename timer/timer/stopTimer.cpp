#include "stopTimer.h"
#include <conio.h>
using namespace std;

void stopTimer(bool& isStopped) {
    if (_kbhit()) { // ���������, ���� �� ������ �������
        char key = _getch(); // ���������� ������� ��� ��� ������ � �������
        if (key == 13) {
            isStopped = !isStopped;
        }
    }
}