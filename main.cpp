#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
#include<functional>

int main() {

	//ランダム
	srand(time(nullptr));
	int getRand = rand() % 6 + 1;

	//時間
	int second = 3;

	int number = 0;
	//数字の入力
	printf("半なら1、丁なら2を入力してください\n");
	scanf_s("%d", &number);

	//サイコロの抽選
	std::function<void(int)>Diceroll = [=](int getRand) {

		//奇数の場合
		if (number == 1) {
			if (getRand % 2 == 1) {
				printf("アタリ\n%dが抽選で選ばれました\n", getRand);
			}
			else {
				printf("ハズレ\n%dが抽選で選ばれました", getRand);
			}
		}

		//偶数の場合
		else if (number == 2) {
			if (getRand % 2 == 0) {
				printf("アタリ\n%dが抽選で選ばれました\n", getRand);
			}
			else {
				printf("ハズレ\n%dが抽選で選ばれました", getRand);
			}
		}
		return 0;
	};

	//3秒待つ
	std::function<void(int, std::function<void(int)>)>SetTimeout = [=](int second, std::function<void(int)> Diceroll)
	{
		Sleep(second * 1000);

		Diceroll(getRand);
	};

	SetTimeout(second, Diceroll);

	system("pause");
	return 0;
}