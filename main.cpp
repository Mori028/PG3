#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

typedef void (*PFunc)(int *);
//コールバック関数
void DispResult(int* s) {
    printf("%d秒待って実行されたよ\n", *s);
}

void setTimerout(PFunc p, int second) {
    //コールバック関数を呼び出す
    Sleep(second * 1000);

    p(&second);
}

int main() {
    //ランダム
    srand(time(nullptr));
   
    int getRand = rand();

    int player = 0;
    //数字の入力
    scanf_s("%d", &player);

    getRand = getRand % 2;

    PFunc p;

    p = DispResult;

    setTimerout(p, 3);

    if (player == 0) {
        if (getRand == 0) {

            printf("あたり");
        }
        else {

            printf("はずれ");
        }
    }
    else if (player == 1) {
        if (getRand == 1) {

            printf("あたり");
        }
        else {

            printf("はずれ");
        }
    }

    return 0;
}