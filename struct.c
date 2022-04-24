#include<stdio.h>

struct Gameinfo {
	char * name ;
	int year ;
	int price ;
	const char* company;

};
int main_struct(void) 
{
	//char* name = "나도게임";
	//int year = 2017;
	//int price = 50;
	//char* company = "나도회사";

	struct Gameinfo gameInfo1;
	gameInfo1.name = "너도게임";
	gameInfo1.year = 2022;
	gameInfo1.price = 60;
	gameInfo1.company = "너도 회사";
	
	//구조체 출력
	printf("-- 게임 출시 정보 --\n");
	printf("게임명 : %s\n", gameInfo1.name);
	printf("출시일 : %d\n", gameInfo1.year);
	printf("가격 : %d\n", gameInfo1.price);
	printf("제작사 : %s\n", gameInfo1.company);

	
	

	return 0;
}