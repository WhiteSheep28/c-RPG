#pragma once

class damage
{
public:
	damage();
	~damage();

	void GetTakeDamage(int Attack, int Health); //공격한 사람의 공격력, 상대의 체력 
	int SetTakeDamage();

	void GetToDamage();
	void SetToDamage();

private:

protected:
	int m_nRemainHealth;
};