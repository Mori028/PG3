#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

typedef void (*PFunc)(int *);
//�R�[���o�b�N�֐�
void DispResult(int* s) {
    printf("%d�b�҂��Ď��s���ꂽ��\n", *s);
}

void setTimerout(PFunc p, int second) {
    //�R�[���o�b�N�֐����Ăяo��
    Sleep(second * 1000);

    p(&second);
}

int main() {
    //�����_��
    srand(time(nullptr));
   
    int getRand = rand();

    int player = 0;
    //�����̓���
    scanf_s("%d", &player);

    getRand = getRand % 2;

    PFunc p;

    p = DispResult;

    setTimerout(p, 3);

    if (player == 0) {
        if (getRand == 0) {

            printf("������");
        }
        else {

            printf("�͂���");
        }
    }
    else if (player == 1) {
        if (getRand == 1) {

            printf("������");
        }
        else {

            printf("�͂���");
        }
    }

    return 0;
}