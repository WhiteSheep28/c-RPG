#include <iostream>

#include "ui.h"
#include "monster.h"
#include "player.h"

using namespace std;

ui::ui()
{

}

ui::~ui()
{

}


void ui::BattleSelect()
{
	while (1)
	{
		cin >> ui::m_nSelect;

		switch (ui::m_nSelect)
		{
		case 1:
			break;

		case 2:
			exit(0);

		default:
			continue;
		}
		break;
	}
}