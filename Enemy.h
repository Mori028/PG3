#pragma once
class Enemy
{
public:
	//�ߐ�
	void Attack();

	//�ˌ�
	void Shot();

	//���E
	void Leave();

	//�X�V
	void Update();

public:
	int phase = 0;

	//�����o�֐��|�C���^
	static void(Enemy::* Phase[])();

};