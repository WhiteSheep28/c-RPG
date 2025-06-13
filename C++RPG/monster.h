#pragma once

class monster
{
public:

	monster();
	~monster();

	void CheckHp();
	void CheckAttack();

protected:

private:
	int m_nHealth;
	int m_nAttack;
};
