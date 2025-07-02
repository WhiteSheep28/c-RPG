#include <iostream>
#include <Windows.h>

#include "MainSystem.h"
#include "System.h"
#include "Ui.h"
#include "FarmUi.h"
#include "Character.h"
#include "Warrior.h"
#include "Socerer.h"
#include "Archer.h"

using namespace std;

int cSystem::m_nSelect = 0;
int cFarmUi::m_nBreadCount = 0;
int cFarmUi::m_nBreadCost = 0;

void main()
{
	cMainSystem* pUi = new cUi;

	pUi->StartUi();

	delete pUi;
}

