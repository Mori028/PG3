#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
#include<functional>
#include"Enemy.h"

int main() {
	Enemy* enemy = new Enemy();
	int number = 0;

	while (true) {
		printf("0~2の数字を入力してください");
		scanf_s("%d", &number);
		enemy->phase = number;
		enemy->Update();
	}


	system("pause");
	return 0;
}