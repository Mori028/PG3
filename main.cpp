#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
#include<functional>

int main() {

	//�����_��
	srand(time(nullptr));
	int getRand = rand() % 6 + 1;

	//����
	int second = 3;

	int number = 0;
	//�����̓���
	printf("���Ȃ�1�A���Ȃ�2����͂��Ă�������\n");
	scanf_s("%d", &number);

	//�T�C�R���̒��I
	std::function<void(int)>Diceroll = [=](int getRand) {

		//��̏ꍇ
		if (number == 1) {
			if (getRand % 2 == 1) {
				printf("�A�^��\n%d�����I�őI�΂�܂���\n", getRand);
			}
			else {
				printf("�n�Y��\n%d�����I�őI�΂�܂���", getRand);
			}
		}

		//�����̏ꍇ
		else if (number == 2) {
			if (getRand % 2 == 0) {
				printf("�A�^��\n%d�����I�őI�΂�܂���\n", getRand);
			}
			else {
				printf("�n�Y��\n%d�����I�őI�΂�܂���", getRand);
			}
		}
		return 0;
	};

	//3�b�҂�
	std::function<void(int, std::function<void(int)>)>SetTimeout = [=](int second, std::function<void(int)> Diceroll)
	{
		Sleep(second * 1000);

		Diceroll(getRand);
	};

	SetTimeout(second, Diceroll);

	system("pause");
	return 0;
}