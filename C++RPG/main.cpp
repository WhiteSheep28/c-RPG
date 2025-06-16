#include <iostream>
#include <cstdlib>

#include "ui.h"
#include "monster.h"
#include "player.h"
#include "text.h"
#include "damage.h"

using namespace std;

void main()
{
	int nSelect = 0;
	int nRandom = 0;
	nRandom = rand() % 2;

	monster monster;
	player player;
	ui ui;
	damage damage;

	cout << "���� Health : ";
	monster.CheckHealth();
	cout << endl;
	cout << "���� Attack : ";
	monster.CheckAttack();
	cout << endl;
	cout << "�� Health : ";
	player.CheckHealth();
	cout << endl;
	cout << "�� Attack : ";
	player.CheckAttack();
	cout << endl << endl;
	cout << "1. ���� �����ϱ�" << endl;
	cout << "2. ���� ������" << endl;

	ui.BattleSelect();

	cout << "��ȣ�� �̾��ּ���" << endl;
	cout << "(0�� ���� ��� player�� �� �ƴ� ��� monster�� ��)" << endl;
	cout << nRandom;

	switch (nRandom)
	{
	case 0:
		cout << "player�� ������ �����մϴ�." << endl;
		
	case 1:
		cout << "monster�� ������ �����մϴ�." << endl;

	default:
		cout << "�߸��� ����Դϴ�";
		exit(0);
	}

	

}

//0 �ƴϸ� 1�� �������� ������ 
//0�� ��� ���� ���� 
//1�� ��� ���Ͱ� ����
//������ �켱 �Ϲݰ��ݸ� �ǰ� �����
//1���� ������ ���� ���� 
//2���� ������ ������ 