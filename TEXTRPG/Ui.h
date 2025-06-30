#pragma once

#include <iostream>

#include "MainSystem.h"
#include "Character.h"

using namespace std;

class cUi : public cMainSystem
{
public:
	cUi();
	virtual ~cUi();

	virtual void StartUi(); //���� ���� ȭ��

	virtual void CharacterUi(); //ĳ���� ����

	//ĳ���� �Ұ�
	virtual void WarriorUi();
	virtual void SocererUi();
	virtual void ArcherUi();

	virtual void MainSystemUi(cMainSystem* Character); //����ȭ��

	//DungeonUi.h
	virtual void FirstDungeonUi(cMainSystem* Character) { ; }

	//FarmUi.h
	virtual void FarmUi() { ; }

protected:
	

private:

};
 