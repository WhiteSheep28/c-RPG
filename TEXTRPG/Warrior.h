#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cWarrior : public cCharacter
{
public:
	cWarrior();
	virtual ~cWarrior();

	virtual void WarriorSkillSelect(cMainSystem* Character, cMainSystem* Enemy);

	virtual void Setm_nHungry(cMainSystem* Character);

protected:

private:

};

