#pragma once

class player
{
public:

	player();
	~player();

	void CheckHp();
	void CheckAttack();

protected:

private:
	int m_nHealth;
	int m_nAttack;
};