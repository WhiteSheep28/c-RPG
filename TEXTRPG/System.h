#pragma once

#include <iostream>

#include "Character.h"
#include "Ui.h"

using namespace std;

class cSystem : public cMainSystem
{
public:
	cSystem();
	virtual ~cSystem();

	virtual void SelectSystem();

	virtual void StartSelect(); //���� ����, ������

	virtual void CharacterSelect(); //ĳ���� ����

	virtual void WarriorIntroduceSelect(); //ĳ���� �Ұ�
	virtual void SocererIntroduceSelect();
	virtual void ArcherIntroduceSelect();

	virtual void MainSystemSelect(cMainSystem* Character, cMainSystem* Inventory); //���� ���� ����

	virtual void BreadSelect(cMainSystem* Inventory);

	virtual void InventorySelect() { ; }

	virtual void ArcherSkillSelect(cMainSystem* Character, cMainSystem* Enemy);
	virtual void WarriorSkillSelect(cMainSystem* Character, cMainSystem* Enemy);
	virtual void SocererSkillSelect(cMainSystem* Character, cMainSystem* Enemy);

protected:

private:
};