#include <iostream>
#include <memory.h>

#include "MainSystem.h"
#include "System.h"
#include "Inventory.h"

using namespace std;

cInventory::cInventory()
{
	m_nInventorySlot[10] = 0;
	memset(m_nInventorySlot, 0 , 10 * sizeof(int));

	m_nHeadCode = 0;
	m_nHealthPotionCode = 1;
	m_nBreadCode = 2;

	m_nHead = 0;
	m_nHealthPotion = 0;
	m_nBread = 0;
}

cInventory::~cInventory()
{

}

void cInventory::InventoryUi()
{
	int nCount = 0;

	cMainSystem* pSystem = new cSystem;

	system("cls");
	cout << "{ 인벤토리 }" << endl;

	while (nCount != 10)
	{
		if (m_nInventorySlot[nCount] == 0)
		{
			
		}

		nCount++;
	}

	/*
	만약 인벤토리 10칸 안에 1이라는 숫자가 없으면 
	맨 앞에 1을 추가하고 
	만약 앞의 숫자가 0이 아니면 그 숫자의 다음 배열에 1을 넣는다
	*/

	if (m_nHealthPotion = !0)
	{
		while (m_nInventorySlot[nCount] == 0)
		{
			nCount++;
		}
	}

	while (nCount != 10)
	{
		if (m_nInventorySlot[nCount] == 1)
		{
			HealthPotionUi();
		}
		else if (m_nInventorySlot[nCount] == 2)
		{
			BreadUi();
		}
		else if (m_nInventorySlot[nCount] == 3)
		{
			HeadUi();
		}
		else
		{
			
		}
		nCount++;
	}

	pSystem->SelectSystem();
}

void cInventory::HealthPotionUi()
{
	cout << "회복물약 : " << m_nHealthPotion << "개" << endl;
}

void cInventory::BreadUi()
{
	cout << "빵 : " << m_nBread << "개" << endl;
}

void cInventory::HeadUi()
{
	cout << "강채원 머리 : " << m_nHead << "개" << endl;
}

void cInventory::Setm_nBread()
{
	m_nBread++;
}

void cInventory::Setm_nBreadCost()
{
	m_nBread = m_nBreadCost;
	m_nBreadCost = 0;
}