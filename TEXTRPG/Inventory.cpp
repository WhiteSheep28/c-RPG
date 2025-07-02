#include <iostream>
#include <memory.h>

#include "MainSystem.h"
#include "System.h"
#include "Inventory.h"

using namespace std;

cInventory::cInventory()
{
	memset(m_nInventorySlot, 0 , 10 * sizeof(int));

	m_nHealthPotionCode = 1;
	m_nBreadCode = 2;

	m_nHealthPotion = 0;
	m_nBread = 0;
}

cInventory::~cInventory()
{

}

void cInventory::InputInventory(int ItemCode,int ItemNum)
{
	int nCount = 0;
	int nInputCount = 0;

	while (nCount <= 10)
	{
		if (m_nInventorySlot[nCount] == ItemCode)
		{
			if (ItemCode == 1)
			{
				m_nHealthPotion += ItemNum;
			}
			else if (ItemCode == 2)
			{
				m_nBread += ItemNum;
			}

			break;
		}
		else if (nCount == 9)
		{
			nCount = 0;

			while (nCount <= 10)
			{
				if (m_nInventorySlot[nCount] == 0)
				{
					m_nInventorySlot[nCount] = ItemCode;

					if (ItemCode == 1)
					{
						m_nHealthPotion += ItemNum;
					}
					else if (ItemCode == 2)
					{
						m_nBread += ItemNum;
					}

					break;
				}

				nCount++;
			}
		}

		if (m_nInventorySlot[nCount] != 0)
		{
			break;
		}

		nCount++;
	}
}

void cInventory::InventoryUi(cMainSystem* Character)
{
	int nCount = 0;
	int nNumCount = 0;

	cMainSystem* pSystem = new cSystem;

	while (1)
	{
		system("cls");
		cout << "{ 인벤토리 }" << endl;

		while (nCount != 9)
		{
			cout << nNumCount << " : ";

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

			}
			else
			{

			}

			cout << endl;

			nNumCount++;
			nCount++;
		}
		cout << "9 : 나가기" << endl;

		nCount = 0;
		nNumCount = 0;

		pSystem->InventorySelect();
		
		int m_nSelectNum = Getm_nSelect();

		if (m_nInventorySlot[m_nSelectNum] == 1)
		{
			m_nHealthPotion--;
			HealthPotion(Character);
		}
		else if (m_nInventorySlot[m_nSelectNum] == 2)
		{
			m_nBread--;
			Bread(Character);
		}
		else if (m_nSelectNum == 9)
		{
			break;
		}
		else
		{
			continue;
		}
	}
}

void cInventory::HealthPotionUi()
{
	cout << "회복물약 " << m_nHealthPotion << "개";
}

void cInventory::BreadUi()
{
	cout << "빵 " << m_nBread << "개";
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

void cInventory::Bread(cMainSystem* Character)
{
	Character->SetPlusm_nHungry();
}

void cInventory::HealthPotion(cMainSystem* Character)
{
	Character->SetPlusm_nHealth();
}