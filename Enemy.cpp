#include "Enemy.h"
#include "stdio.h"

void Enemy::Attack()
{
	printf("“G‚ªÚ‹ß‚·‚é\n ");
}

void Enemy::Shot()
{
	printf("“G‚ªŽËŒ‚‚·‚é\n ");
}

void Enemy::Leave()
{
	printf("“G‚ª—£’E‚·‚é\n ");
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