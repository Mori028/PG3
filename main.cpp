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
		printf("0:Ú‹ß,1:UŒ‚,2:—£’E,012‚Ì‚Ç‚ê‚©‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		scanf_s("%d", &num);
		enemy->phase = num;
		enemy->Update();
	}
	system("pause");
	return 0;
}