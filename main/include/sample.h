#pragma once

#include "header.h"
#include "game_board.h"

_Board _board = {

		//�������� ������ � ��������� (0-18)
		/*const vector<resource> resources*/
		{
			resource::brick, resource::weat, resource::wood,
			resource::non, resource::stone, resource::brick, resource::sheep,
			resource::stone, resource::weat, resource::sheep, resource::wood, resource::weat,
			resource::wood, resource::wood, resource::weat, resource::sheep,
			resource::brick, resource::sheep, resource::stone
		},

		//�������� �������(2-12) ��� ������� �����(0-18)
		/*const vector<int> dices*/
		{
			6, 3, 8,
			0, 2, 5, 10,
			11, 9, 10, 6, 9,
			5, 11, 12, 4,
			4, 8, 3
		},

		//����� ���������� ����� ��� ���� �� 4-� �������
		//-1 means 'no connection'
		/*const vector<node> nodes*/
		{
			{ 3,4,-1 },{ 4,5,-1 },{ 5,6,-1 },	//0-2
			{ 0,7,-1 },{ 0,1,8 },{ 1,2,9 },{ 2,10,-1 },	//3-6
			{ 3,11,12 },{ 4,12,13 },{ 5,13,14 },{ 6,14,15 },	//7-10
			{ 7,16,-1 },{ 7,8,17 },{ 8,9,18 },{ 9,10,19 },{ 10,20,-1 },	//11-15
			{ 11,21,22 },{ 12,22,23 },{ 13,23,24 },{ 14,24,25 },{ 15,25,26 },	//16-20
			{ 16,27,-1 },{ 16,17,28 },{ 17,18,29 },{ 18,19,30 },{ 19,20,31 },{ 20,32,-1 },	//21-26
			{ 21,33,-1 },{ 22,33,34 },{ 23,34,35 },{ 24,35,36 },{ 25,36,37 },{ 26,37,-1 },	//27-32
			{ 27,28,38 },{ 28,29,39 },{ 29,30,40 },{ 30,31,41 },{ 31,32,42 },	//33-37
			{ 33,43,-1 },{ 34,43,44 },{ 35,44,45 },{ 36,45,46 },{ 37,46,-1 },	//38-42
			{ 38,39,47 },{ 39,40,48 },{ 40,41,49 },{ 41,42,50 },	//43-46
			{ 43,51,-1 },{ 44,51,52 },{ 45,52,53 },{ 46,53,-1 },	//47-50
			{ 47,48,-1 },{ 48,49,-1 },{ 49,50,-1 }	//51-53
		},

		//����������� ����� � ����� (��� �������� ������)
		//-1 means 'nothing'
		//const vector<node> points_to_hex =
		{
			{ 0,-1,-1 },{ 1,-1,-1 },{ 2,-1,-1 },	//0-2
			{ 0,-1,-1 },{ 0,1,-1 },{ 1,2,-1 },{ 2,-1,-1 },	//3-6
			{ 0,3,-1 },{ 0,1,4 },{ 1,2,5 },{ 2,6,-1 },	//7-10
			{ 3,-1,-1 },{ 0,3,4 },{ 1,4,5 },{ 2,5,6 },{ 6,-1,-1 },	//11-15
			{ 7,3,-1 },{ 3,4,8 },{ 4,5,9 },{ 5,6,10 },{ 6,11,-1 },	//16-20
			{ 7,-1,-1 },{ 3,7,8 },{ 4,8,9 },{ 5,9,10 },{ 6,10,11 },{ 11,-1,-1 },	//21-26
			{ 7,-1,-1 },{ 7,8,12 },{ 8,9,13 },{ 9,10,14 },{ 10,11,15 },{ 11,-1,-1 },	//27-32
			{ 7,12,-1 },{ 8,12,13 },{ 9,13,14 },{ 10,14,15 },{ 11,15,-1 },	//33-37
			{ 12,-1,-1 },{ 12,13,16 },{ 13,14,17 },{ 14,15,18 },{ 15,-1,-1 },	//38-42
			{ 12,16,-1 },{ 13,16,17 },{ 14,17,18 },{ 15,18,-1 },	//43-46
			{ 16,-1,-1 },{ 16,17,-1 },{ 17,18,-1 },{ 18,-1,-1 },	//47-50
			{ 16,-1,-1 },{ 17,-1,-1 },{ 18,-1,-1 }	//51-53
		} ,

		//����� ����� ����������� ������� ����� ��� ���� �� 4-� �������
		//const vector<hex_point> hex_to_points =
		{
			{ 0,3,4,7,8,12 },	//0
			{ 1,4,5,8,9,13 },	//1
			{ 2,5,6,9,10,14 },	//2
			{ 7,11,12,16,17,22 },	//3
			{ 8,12,13,17,18,23 },	//4
			{ 9,13,14,18,19,24 },	//5
			{ 10,14,15,19,20,25 },	//6
			{ 16,21,22,27,28,33 },	//7
			{ 17,22,23,28,29,34 },	//8
			{ 18,23,24,29,30,35 },	//9
			{ 19,24,25,30,31,36 },	//10
			{ 20,25,26,31,37,32 },	//11
			{ 28,33,34,38,39,43 },	//12
			{ 29,34,35,39,40,44 },	//13
			{ 30,35,36,40,41,45 },	//14
			{ 31,36,37,41,42,46 },	//15
			{ 39,43,44,47,48,51 },	//16
			{ 40,44,45,48,49,52 },	//17
			{ 41,45,46,49,50,53 }	//18
		},

		//����� ��� �����
		//const vector<resource> harbors =
		{
			{resource::tin1 },{ resource::brick },{ resource::tin1 },	//0-2
			{ resource::tin1 },{ resource::non },{ resource::brick },{ resource::tin1 },	//3-6		
			{ resource::non },{ resource::non },{ resource::non },{ resource::non },	//7-10
			{ resource::tin1 },{ resource::non },{ resource::non },{ resource::non },{ resource::sheep },	//11-15
			{ resource::tin1 },{ resource::non },{ resource::non },{ resource::non },{ resource::sheep },	//16-20
			{ resource::non },{ resource::non },{ resource::non },{ resource::non },{ resource::non },{ resource::non },	//21-26
			{ resource::non },{ resource::non },{ resource::non },{ resource::non },{ resource::non },{ resource::non },	//27-32
			{ resource::non },{ resource::non },{ resource::non },{ resource::non },{ resource::stone },	//33-37
			{ resource::wood },{ resource::non },{ resource::non },{ resource::non },{ resource::stone },	//38-42
			{ resource::wood },{ resource::non },{ resource::non },{ resource::non },	//43-46
			{ resource::non },{ resource::weat },{ resource::non },{ resource::tin1 },	//47-50
			{ resource::non },{ resource::weat },{ resource::tin1 }	//51-53
		}
};
