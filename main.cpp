#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include"SceneManager.h"

int main() {
	//�C���X�^���X���擾���Ă����g�p
	SceneManager* sceneManager = SceneManager::GetInstance();

	int change = 0;

	while (true) {

		sceneManager->ChangeScene(change);

		if (change >= 4) {

			change = 0;
		}
		else {

			change++;
		}

		Sleep(1 * 1000);

	}

	system("pause");
	return 0;
}