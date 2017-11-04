/*
프로젝트명 : IQTestProgram
작성자 : 20135122 김화영
최종수정일 : 2016. 12. 8.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

//함수원형
void gotoXY(int, int);
int mainmenu();
void gamestart();
int _getch();
void Testone(int *);
void Testtwo(int *);
void Testthree(int *);
void Testfour(int *);
void ResultPage(int *);
void helper();
void maker();

int main() {

	char tobecontinue;  // 프로그램을 계속 실행할지 여부를 묻는 변수


	do {

		system("cls"); //화면 클리어

		switch (mainmenu()) {

		case 1:
			system("cls");
			gamestart();	//gamestart 함수 호출
			break;

		case 2:
			system("cls");
			helper();		//helper 함수 호출
			break;

		case 3:
			system("cls");
			maker();		//maker 함수 호출
			break;

		case 0:   //메뉴선택에서 0 번을 누를시 프로그램 종료
			exit(0);
			break;

		default:
			system("cls");
			gotoXY(18, 10);
			printf("선택하신 번호가 메뉴에 없습니다..\n");
			gotoXY(18, 12);
			printf("확인하시고 다시 입력해주세요. [0-3] \n");
			break;

		}

		printf("\n\n\n\n\n");
		printf("계속 실행하시겠습니까? [Y/N] >> ");
		scanf(" %c", &tobecontinue);

	} while (tobecontinue == 'y' || tobecontinue == 'Y');	// y or Y 를 누르면 프로그램 계속 실행

}



void gotoXY(int x, int y) {

	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}


//메인메뉴 출력 함수
int mainmenu() {

	int choice; //메뉴선택 번호를 받을 변수

	gotoXY(6, 4);
	printf("▣▣▣▣▣");
	gotoXY(6, 5);
	printf("▣▣▣▣▣");
	gotoXY(6, 6);
	printf("   ■■");
	gotoXY(6, 7);
	printf("   ■■");
	gotoXY(6, 8);
	printf("   ■■");
	gotoXY(6, 9);
	printf("   ■■");
	gotoXY(6, 10);
	printf("   ■■");
	gotoXY(6, 11);
	printf("▣▣▣▣▣");
	gotoXY(6, 12);
	printf("▣▣▣▣▣");

	gotoXY(20, 4);
	printf("▣▣▣▣");
	gotoXY(19, 5);
	printf("▣▣▣▣▣");
	gotoXY(18, 6);
	printf("■■    ■■");
	gotoXY(18, 7);
	printf("■■    ■■");
	gotoXY(18, 8);
	printf("■■    ■■");
	gotoXY(18, 9);
	printf("■■    ■■");
	gotoXY(18, 10);
	printf("■■    ■■■");
	gotoXY(19, 11);
	printf("▣▣▣▣▣▣▣");
	gotoXY(20, 12);
	printf("▣▣▣▣  ▣▣");

	gotoXY(35, 8);
	printf("▒▒▒▒");
	gotoXY(35, 9);
	printf("   ▒");
	gotoXY(35, 10);
	printf("   ▒");
	gotoXY(35, 11);
	printf("   ▒");
	gotoXY(35, 12);
	printf("   ▒");

	gotoXY(45, 8);
	printf("▒▒▒▒");
	gotoXY(45, 9);
	printf("▒");
	gotoXY(45, 10);
	printf("▒▒▒▒");
	gotoXY(45, 11);
	printf("▒");
	gotoXY(45, 12);
	printf("▒▒▒▒");

	gotoXY(55, 8);
	printf("▒▒▒▒");
	gotoXY(55, 9);
	printf("▒");
	gotoXY(55, 10);
	printf("▒▒▒▒");
	gotoXY(55, 11);
	printf("      ▒");
	gotoXY(55, 12);
	printf("▒▒▒▒");

	gotoXY(65, 8);
	printf("▒▒▒▒");
	gotoXY(65, 9);
	printf("   ▒");
	gotoXY(65, 10);
	printf("   ▒");
	gotoXY(65, 11);
	printf("   ▒");
	gotoXY(65, 12);
	printf("   ▒");


	gotoXY(3, 15);
	printf("************************************************************************\n");
	gotoXY(28, 17);
	printf(" 1 >> IQ TEST 시작\n");
	gotoXY(28, 18);
	printf(" 2 >> TEST 설명 (도움말, 정답풀이) \n");
	gotoXY(28, 19);
	printf(" 3 >> 제작자 \n");
	gotoXY(28, 20);
	printf(" 0 >> 프로그램 종료");
	gotoXY(28, 22);
	printf(" 메뉴 선택 [0-3] >> ");
	scanf(" %d", &choice);

	return choice;

}

void gamestart() {

	int presskey;
	int IQpoint = 100;

	gotoXY(10, 5);
	printf(" IQ TEST 를 시작합니다.");
	gotoXY(10, 7);
	printf(" 이 테스트는 검증된 TEST가 아니고 재미로하는.. TEST입니다.");
	gotoXY(10, 9);
	printf(" 게임은 총 TEST 1 ~ TEST 4 까지 4개의 TEST로 구성되어있습니다.");
	gotoXY(10, 11);
	printf(" 테스트의 시간제한은 없습니다.");
	gotoXY(10, 13);
	printf(" 마지막 문제 종료 후 결과가 나옵니다 .");
	gotoXY(10, 15);
	printf(" 그럼 TEST를 시작해볼까요 ??!");
	gotoXY(10, 19);
	printf(" press any key to start");
	presskey = _getch(); //아무키나 입력

	system("cls"); //화면 클리어
	Testone(&IQpoint); //첫번째 Test 호출

	system("cls");
	Testtwo(&IQpoint); //두번째 Test 호출

	system("cls");
	Testthree(&IQpoint); //세번째 Test 호출

	system("cls");
	Testfour(&IQpoint); //네번째 Test 호출

	system("cls");
	ResultPage(&IQpoint); //결과 호출
}

void helper() {


	char helpchr[100]; //도움말 텍스트파일의 내용을 한줄씩 읽어올 배열
	char keychr[100];  //문제해결 텍스트파일의 내용을 한줄씩 읽어올 배열

	FILE *help;
	FILE *testkey;

	//도움말 머릿글
	gotoXY(23, 0);
	printf("******************************");
	gotoXY(23, 1);
	printf("*    << IQ TEST 도움말 >>    *");
	gotoXY(23, 2);
	printf("******************************");

	gotoXY(2, 4);
	printf("* 이 프로그램은 간단한 퀴즈를 통해");
	gotoXY(2, 5);
	printf("* 이용자의 IQ(intelligence quotient)를");
	gotoXY(2, 6);
	printf("* 간략하게 수치화 시키는 프로그램입니다.\n");

	printf("\n\n");

	//도움말 텍스트파일을 불러와 출력
	help = fopen("도움말.txt", "r"); //도움말 텍스트파일을 읽기 형태로 파일오픈

	while (fgets(helpchr, 100, help) != NULL) {
		printf(helpchr);
	}
	fclose(help);

	printf("\n\n\n\n\n\n\n");

	//문제에 대한 해설을 해줄 텍스트파일을 불러와 출력해줌.
	testkey = fopen("문제해결.txt", "r");	//문제해결 텍스트파일을 읽기 형태로 파일오픈

	while (fgets(keychr, 100, testkey) != NULL) {
		printf(keychr);
	}
	fclose(testkey);


}


void Testone(int *IQ) {

	int answerone;	//첫번째 정답을 입력받을 변수
	int answertwo;	//두번째 정답을 입력받을 변수
	int answerthree;//세번째 정답을 입력받을 변수
	int nextTest;	//press any key 에서 아무키나 입력받을 변수

	printf("==================================== TEST 1 ====================================");
	gotoXY(25, 3);
	printf("Q. 물음표에 들어갈 숫자는?");

	gotoXY(0, 5);
	printf("┌─────────────────────────────────────┐\n");
	printf("│       3      │      2      │      3      │      3      │      ?      │\n");
	printf("├─────────────────────────────────────┤\n");
	printf("│       1      │      8      │      1      │      0      │      ?      │\n");
	printf("├─────────────────────────────────────┤\n");
	printf("│       1      │      2      │      3      │      4      │      ?      │\n");
	printf("└─────────────────────────────────────┘\n");

	gotoXY(0, 13);
	printf(" 첫번째 물음표 >>  ");
	scanf(" %d", &answerone);
	printf(" 두번째 물음표 >>  ");
	scanf(" %d", &answertwo);
	printf(" 세번째 물음표 >>  ");
	scanf(" %d", &answerthree);


	//정답이 차례대로 3 1 5 이면 IQ점수 10점 추가
	if (answerone == 3 && answertwo == 1 && answerthree == 5) {
		*IQ += 10;
	}//아닐경우 IQ점수 5점 감점
	else {
		*IQ -= 5;
	}

	gotoXY(20, 20);
	printf("press any key to next Test >>>");
	nextTest = _getch();

}

void Testtwo(int *IQ) {

	char realanswer[20] = "IVPLUSIXPLUSV";	//입력받은 정답과 비교할 배열
	char inputanswer[20];					//정답을 입력받을 배열
	int nextTest;

	printf("==================================== TEST 2 ====================================");

	gotoXY(10, 3);
	printf("Q. 일곱개의 글자를 지운 후에도 여전히 답이 18 이 되도록 하라");

	gotoXY(0, 5);
	printf("┌─────────────────────────────────────┐\n");
	printf("│               F I V E  P L U S  S I X  P L U S   S E V E N               │\n");
	printf("└─────────────────────────────────────┘\n");

	printf("일곱개의 글자를 지운후 문자열을 띄어쓰기 없이 입력 >>>");
	scanf(" %s", inputanswer);

	//strcmp를 이용해 문자열을 비교해서 같으면 IQ점수 +15
	if (!strcmp(realanswer, inputanswer)) {

		*IQ += 15;
	}//다르면 IQ점수 -5
	else {
		*IQ -= 5;
	}

	gotoXY(20, 20);
	printf("press any key to next Test >>>");
	nextTest = _getch();

}


void Testthree(int *IQ) {

	char realanswer[5] = "I";
	char inputanswer[5];
	int nextTest;

	printf("==================================== TEST 3 ====================================");

	gotoXY(10, 3);
	printf("Q. 다음에 올 알파벳은 무엇인가?");

	gotoXY(0, 5);
	printf("┌─────────────────────────────────────┐\n");
	printf("│               N       W       H       O       I       (  )               │\n");
	printf("└─────────────────────────────────────┘\n");

	printf("괄호안의 알파벳 입력(대문자) >>>");
	scanf(" %s", inputanswer);

	if (!strcmp(realanswer, inputanswer)) {

		*IQ += 10;
	}
	else {
		*IQ -= 5;
	}

	gotoXY(20, 20);
	printf("press any key to next Test >>>");
	nextTest = _getch();

}

void Testfour(int *IQ) {

	int answer;
	int nextTest;

	printf("==================================== TEST 4 ====================================");

	gotoXY(10, 3);
	printf("Q. 물음표에 들어갈 수를 구하라.");

	gotoXY(10, 5);
	printf("┌───┐");
	gotoXY(10, 6);
	printf("│  16  │");
	gotoXY(10, 7);
	printf("└───┘");

	gotoXY(20, 5);
	printf("┌───┐");
	gotoXY(20, 6);
	printf("│  06  │");
	gotoXY(20, 7);
	printf("└───┘");

	gotoXY(30, 5);
	printf("┌───┐");
	gotoXY(30, 6);
	printf("│  68  │");
	gotoXY(30, 7);
	printf("└───┘");

	gotoXY(40, 5);
	printf("┌───┐");
	gotoXY(40, 6);
	printf("│  88  │");
	gotoXY(40, 7);
	printf("└───┘");

	gotoXY(50, 5);
	printf("┌───┐");
	gotoXY(50, 6);
	printf("│  ??  │");
	gotoXY(50, 7);
	printf("└───┘");

	gotoXY(60, 5);
	printf("┌───┐");
	gotoXY(60, 6);
	printf("│  98  │");
	gotoXY(60, 7);
	printf("└───┘");

	gotoXY(0, 10);
	printf(" 물음표에 들어갈 수 입력 >>>");
	scanf(" %d", &answer);

	if (answer == 87) {
		*IQ += 5;
	}
	else {
		*IQ -= 5;
	}

	gotoXY(20, 20);
	printf("press any key to next Test >>>");
	nextTest = _getch();

}


void ResultPage(int *IQ) {

	printf("================================== TEST RESULT =================================");

	gotoXY(23, 5);
	printf("┌─────────────────┐");
	gotoXY(23, 6);
	printf("│      당신의 IQ는 %d 입니다.      │", *IQ);
	gotoXY(23, 7);
	printf("└─────────────────┘");

	gotoXY(15, 10);
	printf("* 재미로 풀어본 IQ TEST 문제입니다. ");
	gotoXY(15, 11);
	printf("* 결과에 신경쓰지마세요....");

}


void maker() {

	gotoXY(17, 3);
	printf("********************************************");
	gotoXY(17, 4);
	printf("*                                          *");
	gotoXY(17, 5);
	printf("*          프로그램명 >> IQTEST            *");
	gotoXY(17, 6);
	printf("*                                          *");
	gotoXY(17, 7);
	printf("*    프로그램에서의 사용 함수 >>  11 개    *");
	gotoXY(17, 8);
	printf("*                                          *");
	gotoXY(17, 9);
	printf("*         총 코딩 LINE 수 >> 509           *");
	gotoXY(17, 10);
	printf("*                                          *");
	gotoXY(17, 11);
	printf("*    프로그램 제작자 >> 김화영(20135122)   *");
	gotoXY(17, 12);
	printf("*                                          *");
	gotoXY(17, 13);
	printf("*       제작 년원일 >> '16. 12. 7~8        *");
	gotoXY(17, 14);
	printf("*                                          *");
	gotoXY(17, 15);
	printf("*               감사합니다.                *");
	gotoXY(17, 16);
	printf("*                                          *");
	gotoXY(17, 17);
	printf("********************************************");
}