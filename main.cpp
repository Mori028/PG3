#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
#include<functional>
#include"Enemy.h"

int main() {
	Enemy* enemy = new Enemy();
	int num = 0;

	while (true) {
		printf("0:接近,1:攻撃,2:離脱,012のどれかを入力してください\n");
		scanf_s("%d", &num);
		enemy->phase = num;
		enemy->Update();
	}
	system("pause");
	return 0;
}