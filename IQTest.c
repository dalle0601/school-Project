/*
������Ʈ�� : IQTestProgram
�ۼ��� : 20135122 ��ȭ��
���������� : 2016. 12. 8.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

//�Լ�����
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

	char tobecontinue;  // ���α׷��� ��� �������� ���θ� ���� ����


	do {

		system("cls"); //ȭ�� Ŭ����

		switch (mainmenu()) {

		case 1:
			system("cls");
			gamestart();	//gamestart �Լ� ȣ��
			break;

		case 2:
			system("cls");
			helper();		//helper �Լ� ȣ��
			break;

		case 3:
			system("cls");
			maker();		//maker �Լ� ȣ��
			break;

		case 0:   //�޴����ÿ��� 0 ���� ������ ���α׷� ����
			exit(0);
			break;

		default:
			system("cls");
			gotoXY(18, 10);
			printf("�����Ͻ� ��ȣ�� �޴��� �����ϴ�..\n");
			gotoXY(18, 12);
			printf("Ȯ���Ͻð� �ٽ� �Է����ּ���. [0-3] \n");
			break;

		}

		printf("\n\n\n\n\n");
		printf("��� �����Ͻðڽ��ϱ�? [Y/N] >> ");
		scanf(" %c", &tobecontinue);

	} while (tobecontinue == 'y' || tobecontinue == 'Y');	// y or Y �� ������ ���α׷� ��� ����

}



void gotoXY(int x, int y) {

	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}


//���θ޴� ��� �Լ�
int mainmenu() {

	int choice; //�޴����� ��ȣ�� ���� ����

	gotoXY(6, 4);
	printf("�ââââ�");
	gotoXY(6, 5);
	printf("�ââââ�");
	gotoXY(6, 6);
	printf("   ���");
	gotoXY(6, 7);
	printf("   ���");
	gotoXY(6, 8);
	printf("   ���");
	gotoXY(6, 9);
	printf("   ���");
	gotoXY(6, 10);
	printf("   ���");
	gotoXY(6, 11);
	printf("�ââââ�");
	gotoXY(6, 12);
	printf("�ââââ�");

	gotoXY(20, 4);
	printf("�âââ�");
	gotoXY(19, 5);
	printf("�ââââ�");
	gotoXY(18, 6);
	printf("���    ���");
	gotoXY(18, 7);
	printf("���    ���");
	gotoXY(18, 8);
	printf("���    ���");
	gotoXY(18, 9);
	printf("���    ���");
	gotoXY(18, 10);
	printf("���    ����");
	gotoXY(19, 11);
	printf("�ââââââ�");
	gotoXY(20, 12);
	printf("�âââ�  �â�");

	gotoXY(35, 8);
	printf("�ƢƢƢ�");
	gotoXY(35, 9);
	printf("   ��");
	gotoXY(35, 10);
	printf("   ��");
	gotoXY(35, 11);
	printf("   ��");
	gotoXY(35, 12);
	printf("   ��");

	gotoXY(45, 8);
	printf("�ƢƢƢ�");
	gotoXY(45, 9);
	printf("��");
	gotoXY(45, 10);
	printf("�ƢƢƢ�");
	gotoXY(45, 11);
	printf("��");
	gotoXY(45, 12);
	printf("�ƢƢƢ�");

	gotoXY(55, 8);
	printf("�ƢƢƢ�");
	gotoXY(55, 9);
	printf("��");
	gotoXY(55, 10);
	printf("�ƢƢƢ�");
	gotoXY(55, 11);
	printf("      ��");
	gotoXY(55, 12);
	printf("�ƢƢƢ�");

	gotoXY(65, 8);
	printf("�ƢƢƢ�");
	gotoXY(65, 9);
	printf("   ��");
	gotoXY(65, 10);
	printf("   ��");
	gotoXY(65, 11);
	printf("   ��");
	gotoXY(65, 12);
	printf("   ��");


	gotoXY(3, 15);
	printf("************************************************************************\n");
	gotoXY(28, 17);
	printf(" 1 >> IQ TEST ����\n");
	gotoXY(28, 18);
	printf(" 2 >> TEST ���� (����, ����Ǯ��) \n");
	gotoXY(28, 19);
	printf(" 3 >> ������ \n");
	gotoXY(28, 20);
	printf(" 0 >> ���α׷� ����");
	gotoXY(28, 22);
	printf(" �޴� ���� [0-3] >> ");
	scanf(" %d", &choice);

	return choice;

}

void gamestart() {

	int presskey;
	int IQpoint = 100;

	gotoXY(10, 5);
	printf(" IQ TEST �� �����մϴ�.");
	gotoXY(10, 7);
	printf(" �� �׽�Ʈ�� ������ TEST�� �ƴϰ� ��̷��ϴ�.. TEST�Դϴ�.");
	gotoXY(10, 9);
	printf(" ������ �� TEST 1 ~ TEST 4 ���� 4���� TEST�� �����Ǿ��ֽ��ϴ�.");
	gotoXY(10, 11);
	printf(" �׽�Ʈ�� �ð������� �����ϴ�.");
	gotoXY(10, 13);
	printf(" ������ ���� ���� �� ����� ���ɴϴ� .");
	gotoXY(10, 15);
	printf(" �׷� TEST�� �����غ���� ??!");
	gotoXY(10, 19);
	printf(" press any key to start");
	presskey = _getch(); //�ƹ�Ű�� �Է�

	system("cls"); //ȭ�� Ŭ����
	Testone(&IQpoint); //ù��° Test ȣ��

	system("cls");
	Testtwo(&IQpoint); //�ι�° Test ȣ��

	system("cls");
	Testthree(&IQpoint); //����° Test ȣ��

	system("cls");
	Testfour(&IQpoint); //�׹�° Test ȣ��

	system("cls");
	ResultPage(&IQpoint); //��� ȣ��
}

void helper() {


	char helpchr[100]; //���� �ؽ�Ʈ������ ������ ���پ� �о�� �迭
	char keychr[100];  //�����ذ� �ؽ�Ʈ������ ������ ���پ� �о�� �迭

	FILE *help;
	FILE *testkey;

	//���� �Ӹ���
	gotoXY(23, 0);
	printf("******************************");
	gotoXY(23, 1);
	printf("*    << IQ TEST ���� >>    *");
	gotoXY(23, 2);
	printf("******************************");

	gotoXY(2, 4);
	printf("* �� ���α׷��� ������ ��� ����");
	gotoXY(2, 5);
	printf("* �̿����� IQ(intelligence quotient)��");
	gotoXY(2, 6);
	printf("* �����ϰ� ��ġȭ ��Ű�� ���α׷��Դϴ�.\n");

	printf("\n\n");

	//���� �ؽ�Ʈ������ �ҷ��� ���
	help = fopen("����.txt", "r"); //���� �ؽ�Ʈ������ �б� ���·� ���Ͽ���

	while (fgets(helpchr, 100, help) != NULL) {
		printf(helpchr);
	}
	fclose(help);

	printf("\n\n\n\n\n\n\n");

	//������ ���� �ؼ��� ���� �ؽ�Ʈ������ �ҷ��� �������.
	testkey = fopen("�����ذ�.txt", "r");	//�����ذ� �ؽ�Ʈ������ �б� ���·� ���Ͽ���

	while (fgets(keychr, 100, testkey) != NULL) {
		printf(keychr);
	}
	fclose(testkey);


}


void Testone(int *IQ) {

	int answerone;	//ù��° ������ �Է¹��� ����
	int answertwo;	//�ι�° ������ �Է¹��� ����
	int answerthree;//����° ������ �Է¹��� ����
	int nextTest;	//press any key ���� �ƹ�Ű�� �Է¹��� ����

	printf("==================================== TEST 1 ====================================");
	gotoXY(25, 3);
	printf("Q. ����ǥ�� �� ���ڴ�?");

	gotoXY(0, 5);
	printf("������������������������������������������������������������������������������\n");
	printf("��       3      ��      2      ��      3      ��      3      ��      ?      ��\n");
	printf("������������������������������������������������������������������������������\n");
	printf("��       1      ��      8      ��      1      ��      0      ��      ?      ��\n");
	printf("������������������������������������������������������������������������������\n");
	printf("��       1      ��      2      ��      3      ��      4      ��      ?      ��\n");
	printf("������������������������������������������������������������������������������\n");

	gotoXY(0, 13);
	printf(" ù��° ����ǥ >>  ");
	scanf(" %d", &answerone);
	printf(" �ι�° ����ǥ >>  ");
	scanf(" %d", &answertwo);
	printf(" ����° ����ǥ >>  ");
	scanf(" %d", &answerthree);


	//������ ���ʴ�� 3 1 5 �̸� IQ���� 10�� �߰�
	if (answerone == 3 && answertwo == 1 && answerthree == 5) {
		*IQ += 10;
	}//�ƴҰ�� IQ���� 5�� ����
	else {
		*IQ -= 5;
	}

	gotoXY(20, 20);
	printf("press any key to next Test >>>");
	nextTest = _getch();

}

void Testtwo(int *IQ) {

	char realanswer[20] = "IVPLUSIXPLUSV";	//�Է¹��� ����� ���� �迭
	char inputanswer[20];					//������ �Է¹��� �迭
	int nextTest;

	printf("==================================== TEST 2 ====================================");

	gotoXY(10, 3);
	printf("Q. �ϰ����� ���ڸ� ���� �Ŀ��� ������ ���� 18 �� �ǵ��� �϶�");

	gotoXY(0, 5);
	printf("������������������������������������������������������������������������������\n");
	printf("��               F I V E  P L U S  S I X  P L U S   S E V E N               ��\n");
	printf("������������������������������������������������������������������������������\n");

	printf("�ϰ����� ���ڸ� ������ ���ڿ��� ���� ���� �Է� >>>");
	scanf(" %s", inputanswer);

	//strcmp�� �̿��� ���ڿ��� ���ؼ� ������ IQ���� +15
	if (!strcmp(realanswer, inputanswer)) {

		*IQ += 15;
	}//�ٸ��� IQ���� -5
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
	printf("Q. ������ �� ���ĺ��� �����ΰ�?");

	gotoXY(0, 5);
	printf("������������������������������������������������������������������������������\n");
	printf("��               N       W       H       O       I       (  )               ��\n");
	printf("������������������������������������������������������������������������������\n");

	printf("��ȣ���� ���ĺ� �Է�(�빮��) >>>");
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
	printf("Q. ����ǥ�� �� ���� ���϶�.");

	gotoXY(10, 5);
	printf("����������");
	gotoXY(10, 6);
	printf("��  16  ��");
	gotoXY(10, 7);
	printf("����������");

	gotoXY(20, 5);
	printf("����������");
	gotoXY(20, 6);
	printf("��  06  ��");
	gotoXY(20, 7);
	printf("����������");

	gotoXY(30, 5);
	printf("����������");
	gotoXY(30, 6);
	printf("��  68  ��");
	gotoXY(30, 7);
	printf("����������");

	gotoXY(40, 5);
	printf("����������");
	gotoXY(40, 6);
	printf("��  88  ��");
	gotoXY(40, 7);
	printf("����������");

	gotoXY(50, 5);
	printf("����������");
	gotoXY(50, 6);
	printf("��  ??  ��");
	gotoXY(50, 7);
	printf("����������");

	gotoXY(60, 5);
	printf("����������");
	gotoXY(60, 6);
	printf("��  98  ��");
	gotoXY(60, 7);
	printf("����������");

	gotoXY(0, 10);
	printf(" ����ǥ�� �� �� �Է� >>>");
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
	printf("��������������������������������������");
	gotoXY(23, 6);
	printf("��      ����� IQ�� %d �Դϴ�.      ��", *IQ);
	gotoXY(23, 7);
	printf("��������������������������������������");

	gotoXY(15, 10);
	printf("* ��̷� Ǯ� IQ TEST �����Դϴ�. ");
	gotoXY(15, 11);
	printf("* ����� �Ű澲��������....");

}


void maker() {

	gotoXY(17, 3);
	printf("********************************************");
	gotoXY(17, 4);
	printf("*                                          *");
	gotoXY(17, 5);
	printf("*          ���α׷��� >> IQTEST            *");
	gotoXY(17, 6);
	printf("*                                          *");
	gotoXY(17, 7);
	printf("*    ���α׷������� ��� �Լ� >>  11 ��    *");
	gotoXY(17, 8);
	printf("*                                          *");
	gotoXY(17, 9);
	printf("*         �� �ڵ� LINE �� >> 509           *");
	gotoXY(17, 10);
	printf("*                                          *");
	gotoXY(17, 11);
	printf("*    ���α׷� ������ >> ��ȭ��(20135122)   *");
	gotoXY(17, 12);
	printf("*                                          *");
	gotoXY(17, 13);
	printf("*       ���� ����� >> '16. 12. 7~8        *");
	gotoXY(17, 14);
	printf("*                                          *");
	gotoXY(17, 15);
	printf("*               �����մϴ�.                *");
	gotoXY(17, 16);
	printf("*                                          *");
	gotoXY(17, 17);
	printf("********************************************");
}