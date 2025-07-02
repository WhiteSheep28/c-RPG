#include <iostream>

#include "FarmUi.h"
#include "Inventory.h"
#include "System.h"

using namespace std;

cFarmUi::cFarmUi()
{

}

cFarmUi::~cFarmUi()
{

}

void cFarmUi::FarmUi(cMainSystem* Inventory)
{
	cMainSystem* pSystem = new cSystem;

	while (1)
	{
		system("cls");
		cout << "{ ���� ������ }" << endl;
		cout << "�ֱ������� ���� ������ٲ�" << endl;
		cout << "������ ���ͼ� �� �޾ư�" << endl << endl;

		cout << "{ ���� ������ �� �ִ� ���� �� }" << endl;

		while (m_nBreadCount >= 5)
		{
			m_nBreadCount -= 5;
			m_nBreadCost++;
		}

		cout << m_nBreadCost << "��" << endl << endl;
		cout << "{ ������ }" << endl;
		cout << "1. �� �ޱ�" << endl;

		cout << "2. ������" << endl;

		pSystem->BreadSelect(Inventory);

		if (Getm_nSelect() == 1)
		{
			Inventory->InputInventory(2, m_nBreadCost);

			m_nBreadCost = 0;
		}
		else if (Getm_nSelect() == 2)
		{
			break;
		}
	}
}