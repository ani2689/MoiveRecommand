#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>
void Gotoxy(int x, int y)
{

    COORD pos = { x,y };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

} //2...

int SelectSummerMoive() {
	int chiceuser1;
	system("cls");
	Sleep(1000);
	gotoxy(30, 15); //2 (gotoxy는 함수 선 해줘야해)
	printf("여름은 뭐니뭐니해도 공포죠?\n");
	system("cls");

	printf("여름방학 추천 영화\n");
	printf("Real 공포 (1)\n\n");
	printf("입문 공포 (2)\n\n");
	
	scanf("%d",chiceuser1); //1

	return chiceuser1;
}
int SelectWinnterMoive() {
	system("cls");
	int chiceuser;

	printf("겨울방학 추천 영화\n");
}
int SelcetRandom() {
	printf("랜덤으로 영화 추천중");
}
int SummerMoiveHorror() {
	printf("입문 공포 (1) ");
}
int SummerMoiveEnter() {

}

int main() {
	int chiceuser;
	printf("추천 경로를 숫자로 입력하세요");
	printf("\n");
	printf("1. 여름방학 추천 영화!\n\n");
	printf("2. 겨울방학 추천 영화!\n\n");
	printf("3. 선택을 못 하겠다! 랜덤! \n\n");
	printf("\n");
	scanf("%d", &chiceuser);
	switch (chiceuser)
	{
	case 1 :
		SelectSummerMoive();
		break;
	
	case 2 :
		SelectWinnterMoive();
		break;
	case 3:
		SelectRandom();
		break;

	}
}

