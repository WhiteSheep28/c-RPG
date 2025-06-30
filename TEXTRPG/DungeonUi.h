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

protected:

private:

};