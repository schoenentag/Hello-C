# include <stdio.h>
# include <time.h>
int main_condition(void)
{
	/*int age = 25;
	if (age >= 20)
		printf("일반인입니다.\n");
	else
		printf("학생입니다.\n");
	*/

	/*int age;
	printf("몇 살입니까?");
	scanf_s("%d", &age);

	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.\n");
	}
	else if (age < 7)
	{
		printf("미취학 아동입니다.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다.\n");
	}
	else
	{
		printf("일반인입니다.\n");
	}*/

	// 가위 0, 바위1, 보2
	//srand(time(NULL));
	//int i = rand() % 3; //0~2 반환
	//if (i == 0)
	//{
	//	printf("가위\n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");
	//}
	//else if (i == 2)
	//{
	//	printf("보\n");
	//}
	//else
	//{
	//	printf("잘못된 값입니다.\n");
	//}

	//switch (i)
	//{
	//case 0: printf("가위\n");
	//	break;
	//case 1: printf("바위\n");
	//	break;
	//case 2: printf("보\n");
	//	break;
	//default: printf("잘못된 값입니다.");
	//	break;
	//}
	
	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100 사이의 숫자 랜덤
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1) // 1 : 참, 0: 거짓
	{
		printf("남은 기회 %d\n", chance--);
		printf("숫자를 맞춰보세요(1~100);");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ↓\n\n");
		}
		else if(answer < num)
		{
			printf("UP ↑ \n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다.\n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했습니다");
		}
		if (chance == 0)
		{
			printf("기회를 다 사용하셨습니다. 아쉽게 실패하셨네요.");
			break;
		}
	}
	return 0;
}