#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cArcher : public cCharacter
{
public:
	cArcher();
	virtual ~cArcher();

	virtual void ArcherSkillTree(cMainSystem* Character, cMainSystem* Enemy, cMainSystem* Inventory);

	virtual void Setm_nHungry(cMainSystem* Hungry);

	virtual void SetPlusm_nHungry();

	virtual void SetPlusm_nHealth();

protected:

private:

};