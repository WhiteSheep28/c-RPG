#pragma once

class player
{
public:

	player();
	~player();

	void CheckHealth();
	void CheckAttack();
	void TakeDamage(); //�������� ����
	void ToDamage(); //�������� ��

protected:

private:
	int m_nHealth;
	int m_nAttack;

	friend class ui;
};