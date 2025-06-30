#pragma once

#include <iostream>

#include "MainSystem.h"
#include "Ui.h"

using namespace std;

class cFarmUi : public cUi
{
public:
	cFarmUi();
	virtual ~cFarmUi();

	virtual void FarmUi(cMainSystem* Inventory);

protected:

private:

};