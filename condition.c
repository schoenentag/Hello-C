# include <stdio.h>
# include <time.h>
int main_condition(void)
{
	/*int age = 25;
	if (age >= 20)
		printf("�Ϲ����Դϴ�.\n");
	else
		printf("�л��Դϴ�.\n");
	*/

	/*int age;
	printf("�� ���Դϱ�?");
	scanf_s("%d", &age);

	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age < 7)
	{
		printf("������ �Ƶ��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("����л��Դϴ�.\n");
	}
	else
	{
		printf("�Ϲ����Դϴ�.\n");
	}*/

	// ���� 0, ����1, ��2
	//srand(time(NULL));
	//int i = rand() % 3; //0~2 ��ȯ
	//if (i == 0)
	//{
	//	printf("����\n");
	//}
	//else if (i == 1)
	//{
	//	printf("����\n");
	//}
	//else if (i == 2)
	//{
	//	printf("��\n");
	//}
	//else
	//{
	//	printf("�߸��� ���Դϴ�.\n");
	//}

	//switch (i)
	//{
	//case 0: printf("����\n");
	//	break;
	//case 1: printf("����\n");
	//	break;
	//case 2: printf("��\n");
	//	break;
	//default: printf("�߸��� ���Դϴ�.");
	//	break;
	//}
	
	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100 ������ ���� ����
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1) // 1 : ��, 0: ����
	{
		printf("���� ��ȸ %d\n", chance--);
		printf("���ڸ� ���纸����(1~100);");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ��\n\n");
		}
		else if(answer < num)
		{
			printf("UP �� \n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ�.\n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߽��ϴ�");
		}
		if (chance == 0)
		{
			printf("��ȸ�� �� ����ϼ̽��ϴ�. �ƽ��� �����ϼ̳׿�.");
			break;
		}
	}
	return 0;
}