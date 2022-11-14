#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

typedef void (*PFunc)(int *);
//コールバック関数
void DispResult(int* n) {
    //ランダム
    srand(time(nullptr));

    printf("%d秒待って実行されたよ\n", *n);

    int getRand = rand();

    getRand = getRand % 2;

    if (getRand % 2 == *n) {
        printf("アタリ\n");
    }
    else
    {
        printf("ハズレ\n");
    }
}

void setTimerout(PFunc p, int second ,int number) {
    //コールバック関数を呼び出す
    Sleep(second * 1000);

    p(&number);
}

int main() {

    int player = 0;

    int number = 0;
    //数字の入力
    printf("半なら奇数、丁なら偶数を入力してください\n");
    scanf_s("%d", &player);

    PFunc p;

    p = DispResult;

    setTimerout(p, 3 , number);
    return 0;
}