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

	cout << "몬스터 Health : ";
	monster.CheckHealth();
	cout << endl;
	cout << "몬스터 Attack : ";
	monster.CheckAttack();
	cout << endl;
	cout << "내 Health : ";
	player.CheckHealth();
	cout << endl;
	cout << "내 Attack : ";
	player.CheckAttack();
	cout << endl << endl;
	cout << "1. 전투 진행하기" << endl;
	cout << "2. 전투 나가기" << endl;

	ui.BattleSelect();

	cout << "번호를 뽑아주세요" << endl;
	cout << "(0이 나올 경우 player의 턴 아닐 경우 monster의 턴)" << endl;
	cout << nRandom;

	switch (nRandom)
	{
	case 0:
		cout << "player의 턴으로 시작합니다." << endl;
		
	case 1:
		cout << "monster의 턴으로 시작합니다." << endl;

	default:
		cout << "잘못된 결과입니다";
		exit(0);
	}

	

}

//0 아니면 1이 랜덤으로 정해짐 
//0일 경우 내가 선공 
//1일 경우 몬스터가 선공
//공격은 우선 일반공격만 되게 만들기
//1번을 누를시 전투 시작 
//2번을 누를시 나가기 