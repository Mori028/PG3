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

	printf("“G‚Ì”:%d‘Ì\n", Enemy::enemyCount);

	printf("‚È‚É‚©ƒL[‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n");

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

	printf("“G‚Ì”:%d‘Ì", Enemy::enemyCount);

	system("pause");
	return 0;
}