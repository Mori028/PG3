#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
#include<functional>
#include"Enemy.h"

int Enemy::enemyCount = 0;

int main() {
	Enemy* enemy1 = new Enemy();
	Enemy* enemy2 = new Enemy();
	Enemy* enemy3 = new Enemy();
	
	int number = 0;

	printf("�G�̐�:%d��\n", Enemy::enemyCount);

	printf("�Ȃɂ��L�[�������Ă�������\n");

	scanf_s("%d", &number);

	if (number == 1) {
		delete enemy1;
		delete enemy2;
		delete enemy3;
	}

	else {
		delete enemy1;
		delete enemy2;
		delete enemy3;
	}

	printf("�G�̐�:%d��", Enemy::enemyCount);

	system("pause");
	return 0;
}