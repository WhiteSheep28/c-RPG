#pragma once

class damage
{
public:
	damage();
	~damage();

	void GetTakeDamage(int Attack, int Health); //������ ����� ���ݷ�, ����� ü�� 
	int SetTakeDamage();

	void GetToDamage();
	void SetToDamage();

private:

protected:
	int m_nRemainHealth;
};