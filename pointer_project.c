#include <stdio.h>
#include <time.h>

int level;
int arrayFish[6];
int * cursor;

void initData();

int main(void)
{
	long startTime = 0; //게임 시작 시간
	long totalElapsedTime = 0; //총 경과시간
	long prevElapsedTime = 0; // 직전 경과시간 (최근에 물을 준 시간 간격)

	int num; // 몇 번 어항에 물을 줄 것인지, 사용자 입력
	initData();
	void printfFishes();

	cursor = arrayFish; // cursor[0]...cursor[1]...

	startTime = clock(); // 현재 시간을 millisecond (1000분의 1초) 단위로 변환

	while (1)
	{
		printfFishes();
		printf("몇 번 어항에 물을 주시겠어요?");
		scanf_s("%d", &num);
		//입력값 체크
		if (num < 1 || num > 6)
		{
			printf("\n입력값이 잘못되었습니다.\n");
			continue;
		}
		// 총 경과시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // 초 단위로 바꿔줌
		printf("총 경과시간은 : %ld 초\n", totalElapsedTime);

		// 직전 물 준 시간(마지막으로 물 준 시간) 이후로 흐른 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과시간 : &ld 초\n", prevElapsedTime);
		
		// 어항의 물을 감소 (증발)
		decreaseWater(prevElapsedTime);

		// 사용자가 입력한 어항에 물을 준다
		// 1. 어항의 물이 0이면..? 뮬울 주지 않는다. 이미 고기가 죽었음...
		if (cursor[num] - 1 <= 0)
		{
			printf("%d번 물고기는 이미 죽었습니다. 물을 주지 않습니다.", num);
		}
		// 2. 어항의 물이 0이 아닌 경우? 물을 준다! 100을 넘지 않는지 체크
		// 현재 어항의 물 +1 <= 100
		else if (cursor[num - 1] + 1 <= 100)
		{
			//물을 준다.
			printf("%d번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1; // cursor[num - 1] = cursor[num - 1] + 1
		}
		// 레벨업을 할 것인지 확인(레벨업은 20초마다 한 번 씩 수행)
		if (totalElapsedTime / 20 > level - 1)
		{
			// 레벨업
			level++; // level : 1 -> level : 2 -> level : 3 ...
			printf("**** 축! 레벨 업! 기존 Lv.%d에서 Lv.%d로 올랐습니다.****\n\n", level - 1, level);

			// 최종 레벨 : 5
			if (level == 5)
			{
				printf("\n\n 축하합니다. 모든 레벨을 달성하셨습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}

		}

		// 모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			// 물고기 모두 다이..ㅠㅠ
			printf("모든 물고기가... 죽었습니다....\n\n");
			exit(0);
		}
		else
		{
			// 최소 한마리 이상 물고기가 살아있음 
			printf("물고기가 아직 살아있어요.\n\n");
		}
		prevElapsedTime = totalElapsedTime;

		// 10초 -> 15초 (5초 : prevElapsedTime -> 15초) -> 25초 (10초..?)


	
	}
	return 0;
}

void initData()
{
	level = 1; // 게임 레벨 (1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; //어항의 물 높이(0~100)
	}
}

void printfFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3 : 난이도 조절을 위한 값
			if (arrayFish[i] < 0)
			{
				arrayFish[i] = 0;
			}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1; // 참 True
	}
	return 0;
}