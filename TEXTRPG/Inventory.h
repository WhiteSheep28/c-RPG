#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cInventory : public cMainSystem
{
public:
	cInventory();
	~cInventory();

	virtual void InventoryUi(cMainSystem* Character);
	virtual void InputInventory(int ItemCode, int ItemNum);
	virtual void HealthPotionUi();
	virtual void BreadUi();
	virtual void Bread(cMainSystem* Character);
	virtual void HealthPotion(cMainSystem* Character);

	virtual void Setm_nBread();
	virtual int Getm_nBread() { return m_nBread; }
	virtual void Setm_nBreadCost();

protected:
	

private:

};