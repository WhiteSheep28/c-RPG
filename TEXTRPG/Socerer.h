#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cSocerer : public cCharacter
{
public:
	cSocerer();
	virtual ~cSocerer();

	virtual void SocererSkillSelect(cMainSystem* Character, cMainSystem* Enemy, cMainSystem* Inventory);

	virtual void Setm_nHungry(cMainSystem* Hungry);

	virtual void SetPlusm_nHungry();

	virtual void SetPlusm_nHealth();

protected:

private:

};