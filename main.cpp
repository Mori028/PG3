#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

typedef void (*PFunc)(int *);
//�R�[���o�b�N�֐�
void DispResult(int* n) {
    //�����_��
    srand(time(nullptr));

    printf("%d�b�҂��Ď��s���ꂽ��\n", *n);

    int getRand = rand();

    getRand = getRand % 2;

    if (getRand % 2 == *n) {
        printf("�A�^��\n");
    }
    else
    {
        printf("�n�Y��\n");
    }
}

void setTimerout(PFunc p, int second ,int number) {
    //�R�[���o�b�N�֐����Ăяo��
    Sleep(second * 1000);

    p(&number);
}

int main() {

    int player = 0;

    int number = 0;
    //�����̓���
    printf("���Ȃ��A���Ȃ��������͂��Ă�������\n");
    scanf_s("%d", &player);

    PFunc p;

    p = DispResult;

    setTimerout(p, 3 , number);
    return 0;
}