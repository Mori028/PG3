#pragma once
class Enemy
{
public:
	//近接
	void Attack();

	//射撃
	void Shot();

	//離脱
	void Leave();

	//更新
	void Update();

public:
	int phase = 0;

	//メンバ関数ポインタ
	static void(Enemy::* Phase[])();

};