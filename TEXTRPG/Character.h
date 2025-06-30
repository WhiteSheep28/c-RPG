#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cCharacter : public cMainSystem
{
public:
	cCharacter();
	virtual ~cCharacter();

	virtual void ArcherSkillTree(cMainSystem* Character, cMainSystem* Enemy) { ; }
	virtual void WarriorSkillSelect(cMainSystem* Character, cMainSystem* Enemy) { ; }
	virtual void SocererSkillSelect(cMainSystem* Character, cMainSystem* Enemy) { ; }

protected:

private:

};