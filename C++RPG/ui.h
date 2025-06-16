#pragma once

class ui
{
public:

	ui();
	~ui();

	void BattleSelect();

protected:

private:
	int m_nSelect;

	friend class player;
	friend class monster;
};