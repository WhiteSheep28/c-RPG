#include <iostream>
#include <memory.h>

#include "MainSystem.h"
#include "System.h"
#include "Inventory.h"

using namespace std;

cInventory::cInventory()
{
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
			else if (ItemCode == 3)
			{
				m_nHead += ItemNum;
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
					else if (ItemCode == 3)
					{
						m_nHead += ItemNum;
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

void cInventory::InventoryUi()
{
	int nCount = 0;
	int nNumCount = 1;

	cMainSystem* pSystem = new cSystem;

	while (1)
	{
		system("cls");
		cout << "{ �κ��丮 }" << endl;

		while (nCount != 10)
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
				HeadUi();
			}
			else
			{

			}

			cout << endl;

			nNumCount++;
			nCount++;
		}

		pSystem->InventorySelect();
		
		m_nInventorySlot[Getm_nSelect()]


		Getm_nSelect();
	}
}

void cInventory::HealthPotionUi()
{
	cout << "ȸ������ : " << m_nHealthPotion << "��" << endl;
}

void cInventory::BreadUi()
{
	cout << "�� : " << m_nBread << "��" << endl;
}

void cInventory::HeadUi()
{
	cout << "��ä�� �Ӹ� : " << m_nHead << "��" << endl;
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