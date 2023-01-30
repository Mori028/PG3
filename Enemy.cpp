#include "Enemy.h"
#include "stdio.h"

void Enemy::Attack()
{
	printf("�G���ڋ߂���\n ");
}

void Enemy::Shot()
{
	printf("�G���ˌ�����\n ");
}

void Enemy::Leave()
{
	printf("�G�����E����\n ");
}

void Enemy::Update()
{
	(this->*Enemy::Phase[static_cast<size_t>(phase)])();
}
void(Enemy::* Enemy::Phase[])() = {
	&Enemy::Attack,
	&Enemy::Shot,
	&Enemy::Leave
};