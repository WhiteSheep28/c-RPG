#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cSocerer : public cCharacter
{
public:
	cSocerer();
	virtual ~cSocerer();

	virtual void SocererSkillSelect(cMainSystem* Character, cMainSystem* Enemy);

	virtual void Setm_nHungry(cMainSystem* Hungry);

protected:

private:

};