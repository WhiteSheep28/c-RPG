#pragma once

#include <iostream>

#include "MainSystem.h"
#include "Ui.h"

using namespace std;

class cDungeonUi : public cUi
{
public:
	cDungeonUi();
	virtual ~cDungeonUi();

	virtual void TestDungeonUi(cMainSystem* Character, cMainSystem* Inventory);
	virtual void DungeonUi(cMainSystem* Character, cMainSystem* Inventory, cMainSystem* Monster);

protected:

private:

};