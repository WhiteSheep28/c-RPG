#pragma once

#include <iostream>

#include "MainSystem.h"
#include "Character.h"

using namespace std;

class cTestMonster : public cCharacter
{
public:
	cTestMonster();
	virtual ~cTestMonster();

	virtual void Setm_nHealth(int EnemyHealth);

protected:

private:

};