#include<stdio.h>

struct Gameinfo {
	char * name ;
	int year ;
	int price ;
	const char* company;

};
int main_struct(void) 
{
	//char* name = "��������";
	//int year = 2017;
	//int price = 50;
	//char* company = "����ȸ��";

	struct Gameinfo gameInfo1;
	gameInfo1.name = "�ʵ�����";
	gameInfo1.year = 2022;
	gameInfo1.price = 60;
	gameInfo1.company = "�ʵ� ȸ��";
	
	//����ü ���
	printf("-- ���� ��� ���� --\n");
	printf("���Ӹ� : %s\n", gameInfo1.name);
	printf("����� : %d\n", gameInfo1.year);
	printf("���� : %d\n", gameInfo1.price);
	printf("���ۻ� : %s\n", gameInfo1.company);

	
	

	return 0;
}