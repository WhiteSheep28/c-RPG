#include <iostream>

#include "MainSystem.h"
#include "System.h"
#include "Character.h"
#include "Socerer.h"

using namespace std;

cSocerer::cSocerer()
{
	m_sName = "Socerer";
	m_nHealth = 60;
	m_nAttack = 3;
	m_nHungry = 100;
	m_nLevel = 1;
	m_nCharacterNum = 2;
}

cSocerer::~cSocerer()
{

}

void cSocerer::SocererSkillSelect(cMainSystem* Character, cMainSystem* Enemy)
{
	cMainSystem* pSystem = new cSystem;

	cout << "{ ½ºÅ³Æ®¸® }" << endl;
	cout << "1. ¸ÅÁ÷ ¼¦" << endl;
	cout << "2. ¾óÀ½ ÆøÇ³" << endl;
	cout << "3. È­¿° ±âµÕ" << endl;
	cout << "4. ¿î¼® ³«ÇÏ" << endl;
	cout << "5. ³ª°¡±â" << endl;

	pSystem->SocererSkillSelect(Character, Enemy);
}

void cSocerer::Setm_nHungry(cMainSystem* Character)
{
	m_nHungry -= 10;
}