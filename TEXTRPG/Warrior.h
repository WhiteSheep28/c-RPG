#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cWarrior : public cCharacter
{
public:
	cWarrior();
	virtual ~cWarrior();

	virtual void WarriorSkillSelect(cMainSystem* Character, cMainSystem* Enemy, cMainSystem* Inventory);

	virtual void Setm_nHungry(cMainSystem* Character);

	virtual void SetPlusm_nHungry();

	virtual void SetPlusm_nHealth();

protected:

private:

};

