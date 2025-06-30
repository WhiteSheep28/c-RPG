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

	virtual void StartUi(); //게임 시작 화면

	virtual void CharacterUi(); //캐릭터 선택

	//캐릭터 소개
	virtual void WarriorUi();
	virtual void SocererUi();
	virtual void ArcherUi();

	virtual void MainSystemUi(cMainSystem* Character); //메인화면

	//DungeonUi.h
	virtual void FirstDungeonUi(cMainSystem* Character) { ; }

	//FarmUi.h
	virtual void FarmUi() { ; }

protected:
	

private:

};
 