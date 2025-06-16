#pragma once

class monster
{
public:
	monster();
	~monster();

	void CheckHealth();
	void CheckAttack();
	void TakeDamage();
	void ToDamage();

protected:

private:
	int m_nHealth;
	int m_nAttack;

	friend class ui;
};