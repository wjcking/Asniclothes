#pragma once
#include "Parameters.h"
/*
 [sai]����׷���븴��
 ˮ�������
 ���� ֲ�� ����  ������Ϣ   ���� ����
 ��ѧԪ�������벻�����й�,���������� �������Լ�������С
 ��λ
 �����е� ������ concreteSin ͬ��Բ ����
 Time fast sting most hurt ������ С����  �����������
 ��������
	ͼ��
		ά����أ�center sphere��
			Round
			triangle
			diamond ����ͼ����Ԫ�� ����ѧ������
���� + ����ˮ = ������ �ڰװ� 2d 3d Odin�ռ� ©�� ����������?.Cansai-Pos Geo
	�ռ� ʱ�� AD BC  Future Past Now Present
 ����ƽ�˽��Ժ���
 [Solid].Retrieve.What
*/
typedef string Year;
typedef string Monsday;
typedef string Minseconds;

struct RetrieveInfo : SphereInfo
{
	long whenAsnic;

	Minseconds startTime = "12.30";
	Minseconds absoluteTime = "8.25";
	Minseconds endTime = "9.30";
	long place;
	string placeName;
	//[ketself]������?.Solid VaozS ���� �� ʵ ��
	//������ ΢���� ����Բ��Objects;
	//index ely elyxs
	int  exsaiz;

};