#pragma once

class player
{
public:

	player();
	~player();

	void CheckHealth();
	void CheckAttack();
	void TakeDamage(); //데미지를 받음
	void ToDamage(); //데미지를 줌

protected:

private:
	int m_nHealth;
	int m_nAttack;

	friend class ui;
};