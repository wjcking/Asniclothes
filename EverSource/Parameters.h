#pragma once
#include <iostream>

using namespace std;

enum class GravitySphere
{
	air = 0,
	centralCore = 1,
	atmosphere =2,
};
/*
*Asniyake ���� �µ��ӱ���
*/
struct Asnical
{
	string result;
	GravitySphere gravitySphere = GravitySphere::air;
};

struct SphereInfo : Asnical
{
	long snic;
	bool isOutSpace = false;
	//int pipeline; 
	//[chronosphere as a boundary]����������
	//chronosnic ����֪�� 
	//��(��|��)��|׼ Ŀǰ�����˱Ƚ϶� SelfGet
	//anti- altair - fusion
};

//����
struct Dynamic
{
	string name;
};
