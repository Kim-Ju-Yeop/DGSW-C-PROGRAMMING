#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#pragma warning(disable:6006)

// �л� ����ü
struct Student {
	int grade;
	int class_;
	int num;
};

// ����UI ����Լ�
void printUI(struct Student s, char** calendar, int sDemerit, int dDemerit, char* dangjik1, char* dangjik2, char* outTime, char* event_) {

	time_t timer;
	struct tm* t;

	timer = time(NULL);
	t = localtime(&timer);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("������������������������ ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("[ �л��������α׷� ]");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("������������������������ \n");
	printf("�� ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	printf("%d�г� %2d�� %2d��		  ", s.grade, s.class_, s.num);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("%4d.%2d.%2d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("�� \n");
	printf("��                                           �� \n");
	if (strcmp(dangjik2, "") == 0) {	// ����2�� ������� ��(����)
		printf("�� ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("������ ���������� ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf(": ");
		printf("%6s                ", dangjik1);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("�� \n");
		printf("��                                           �� \n");
		printf("�� ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("1���� 2���� 3���� 4���� 5���� 6���� 7����");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf(" �� \n");
		printf("�� ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("%5s %5s %5s %5s %5s %5s %5s", calendar[0], calendar[1], calendar[2], calendar[3], calendar[4], calendar[5], calendar[6]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf(" �� \n");
		printf("��                                           �� \n");
		printf("�� ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("8���� 9���� ����1 ����2  ����  ����  �ܹ�");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf(" �� \n");
		printf("�� %5s %5s %5s %5s %4s  %4s  %4s  �� \n", calendar[7], calendar[8], calendar[9], calendar[10], calendar[11], calendar[12], calendar[13]);
	}
	else {								// ����2�� ���� ��(�ָ�)
		printf("�� ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("������ ���������� ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf(": ");
		printf("%6s, %6s        ", dangjik1, dangjik2);
		printf("�� \n");
		printf("��                                           �� \n");
		printf("�� ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf(" ����  ���� ����1 ����2  ����  ����  �ܹ�");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf(" �� \n");
		printf("�� %5s %5s %5s %5s %4s  %4s  %4s  �� \n", calendar[7], calendar[8], calendar[9], calendar[10], calendar[11], calendar[12], calendar[13]);
	}
	printf("��                                           �� \n");
	if (strcmp(calendar[12], "X") != 0) {	// ������ X �� �ƴ� ��
		printf("�� ����� : %2d  �б� : %2d  %10s | ���� �� \n", dDemerit, sDemerit, outTime);
	}
	else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("�� ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("����� :");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf(" %2d  ", dDemerit);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("�б� :");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf(" %2d                    �� \n", sDemerit);
	}
	if (strcmp(event_, "") != 0) {
		printf("�� ������ ��� : %10s             �� \n", event_);
	}
	printf("��                                           �� \n");
	printf("�� 1:���� 2:������� 3:�ܹڿ��κ��� 4:����   �� \n");
	printf("������������������������������������������������������������������������������������������ \n");
}

int main(void) {

	struct Student s;
	struct tm* t;

	time_t timer;

	char* dangjik1 = "";
	char* dangjik2 = "";
	char* dangjik3 = "";

	char* outTime = "";
	char* calendar[15];
	char* event_;

	int cStat = 0;
	int sNum;
	int daLine;
	int sDemerit;
	int dDemerit;

	FILE* daFile = fopen("C://�л��������α׷�//����.txt", "a+");
	FILE* afFile = fopen("C://�л��������α׷�//�����.txt", "rt");
	FILE* caFile = fopen("C://�л��������α׷�//�ð�ǥ.txt", "rt");
	FILE* deFile = fopen("C://�л��������α׷�//�����.txt", "rt");
	FILE* evFile = fopen("C://�л��������α׷�//���.txt", "rt");

	int i, j;
	char* cTemp;
	int iTemp;

	// ���� �ҷ����� �� ���� ���� �� ó��
	timer = time(NULL);
	t = localtime(&timer);


	outTime = malloc(1024 + 5);
	cTemp = malloc(2048 + 5);
	event_ = malloc(1024 + 5);

	for (i = 0; i < 15; i++) {
		calendar[i] = malloc(1024 + 5);
	}

	//system("color f0");

	s.grade = 1;
	s.class_ = 1;
	s.num = 1;

	do {
		if (s.grade < 1 || s.grade > 3)
			printf("�߸��� �Է��Դϴ�. �ùٸ� ");
		printf("�г��� �Է����ּ��� : ");
		scanf("%d", &s.grade);
	} while (s.grade < 1 || s.grade > 3);

	do {
		if (s.class_ < 1 || s.class_ > 3)
			printf("�߸��� �Է��Դϴ�. �ùٸ� ");
		printf("���� �Է����ּ��� : ");
		scanf("%d", &s.class_);
	} while (s.class_ < 1 || s.class_ > 3);

	do {
		if (s.num < 1 || s.num > 20)
			printf("�߸��� �Է��Դϴ�. �ùٸ� ");
		printf("��ȣ�� �Է����ּ��� : ");
		scanf("%d", &s.num);
	} while (s.num < 1 || s.num > 20);

	sNum = s.grade * 1000 + s.class_ * 100 + s.num;




	// ����� ����
	sDemerit = 0;
	dDemerit = 0;
	while (1) {
		fgets(cTemp, 1024, deFile);
		if (cTemp[0] - 48 == s.grade && cTemp[1] - 48 == s.class_ && (cTemp[2] - 48) * 10 + cTemp[3] - 48 == s.num) {
			for (i = 5; cTemp[i] != ' '; i++) {
				if (cTemp[i] == '-') {
					sDemerit = -(cTemp[i + 1] - 48);
					i++;
				}
				else {
					sDemerit = sDemerit * 10 + (cTemp[i] - 48);
				}

			}
			for (i++; cTemp[i] != '\n'; i++) {
				if (cTemp[i] == '-') {
					dDemerit = -(cTemp[i + 1] - 48);
					i++;
				}
				else {
					dDemerit = dDemerit * 10 + (cTemp[i] - 48);
				}
			}
			break;
		}
		if (cTemp[0] == 'L') {
			break;
		}
	}
	fclose(deFile);

	// �ð�ǥ ����
	iTemp = s.grade * 10 + s.class_;
	if (t->tm_wday < 6) {
		while (1) {
			fgets(cTemp, 1024, caFile);
			if (cTemp[0] - 48 == s.grade && cTemp[1] - 48 == s.class_ && cTemp[3] - 48 == t->tm_wday) {
				j = -1;
				for (i = 4; cTemp[i] != '\n'; i++) {
					if (cTemp[i] == ' ') {
						j++;
						daLine = 0;
					}
					else {
						calendar[j][daLine++] = cTemp[i];
					}
					if (cTemp[i + 1] == ' ' || cTemp[i + 1] == '\n') {
						calendar[j][daLine] = '\0';
					}
				}
				break;
			}

		}
	}
	fclose(caFile);

	dangjik1 = "Error";
	dangjik2 = "Error";
	dangjik3 = "Error";

	// ���� ����
	sprintf(event_, "%d", (t->tm_year + 1900) * 10000 + (t->tm_mon + 1) * 100 + t->tm_mday); // ��¥(����� ����)
	while (1) {
		fgets(cTemp, 1024, daFile);
		// ��¥, �йݹ�ȣ, 8����, 9����, ����1, ����2, ����, ����, �ܹ�, ����ð�
		// �������� �ƴ��� ����
		if (cTemp[0] == event_[0] && cTemp[1] == event_[1] && cTemp[2] == event_[2] && cTemp[3] == event_[3] && cTemp[4] == event_[4]
			&& cTemp[5] == event_[5] && cTemp[6] == event_[6] && cTemp[7] == event_[7]) {
			// �ڽ��� ��
			if (cTemp[9] - 48 == s.grade && cTemp[10] - 48 == s.class_ && (cTemp[11] - 48) * 10 + cTemp[12] - 48 == s.num) {
				for (i = 13, j = 6; cTemp[i] != '\n'; i++) {
					if (cTemp[i] == ' ') {
						j++;
						daLine = 0;
					}
					else {
						calendar[j][daLine++] = cTemp[i];
					}
					if (cTemp[i + 1] == ' ' || cTemp[i + 1] == '\n') {
						calendar[j][daLine] = '\0';
					}
				}
			}

			// �����ܵ�
			if (cTemp[9] - 48 == cTemp[10] - 48 == cTemp[11] - 48 == 0) {
				switch (cTemp[12] - 48) {
				case 1:
					dangjik1 = malloc(1024 + 5);
					for (i = 14, cStat = 0; cTemp[i] != '\n'; i++) {
						dangjik1[cStat++] = cTemp[i];
					}
					dangjik1[cStat] = '\0';
					break;
				case 2:
					dangjik2 = malloc(1024 + 5);
					for (i = 14, cStat = 0; cTemp[i] != '\n'; i++) {
						dangjik2[cStat++] = cTemp[i];
					}
					dangjik1[cStat] = '\0';
					break;
				case 3:
					dangjik3 = malloc(1024 + 5);
					for (i = 14, cStat = 0; cTemp[i] != '\n'; i++) {
						dangjik3[cStat++] = cTemp[i];
					}
					dangjik1[cStat] = '\0';
					break;
				}
			}

		}

		if (strcmp(cTemp, "L") == 0) { // ������ ���Ͻ�
			for (i = 7; i < 11; i++) {
				calendar[i][0] = s.grade + 48;
				calendar[i][1] = '-';
				calendar[i][2] = s.class_ + 48;
				calendar[i][3] = '\0';
			}
			calendar[11] = "X";
			calendar[12] = "X";
			calendar[13] = "X";
			calendar[14] = "-";
			break;
		}
	}
	fclose(daFile);




	// ����� ����
	while (1) {
		fgets(cTemp, 2048, afFile);
		// �йݹ�ȣ ���� ���� ����
		// �ڽ�, �����Ͻ�
		if (cTemp[0] - 48 == s.grade && cTemp[1] - 48 == s.class_ && (cTemp[2] - 48) * 10 + cTemp[3] - 48 == s.num && cTemp[5] - 48 == t->tm_wday) {
			j = cTemp[7] - 48;
			daLine = 0;
			for (i = 9; cTemp[i] != ' '; i++) {
				calendar[j][daLine++] = cTemp[i];
			}
			calendar[j][daLine] = '\0';

		}

		if (strcmp(cTemp, "L") == 0) {
			break;
		}

	}
	fclose(afFile);

	// ��� ����
	sprintf(event_, "%d", (t->tm_year + 1900) * 10000 + (t->tm_mon + 1) * 100 + t->tm_mday);
	while (1) {
		fgets(cTemp, 1024, evFile);
		// ������ ��
		if (cTemp[0] == event_[0] && cTemp[1] == event_[1] && cTemp[2] == event_[2] && cTemp[3] == event_[3] && cTemp[4] == event_[4]
			&& cTemp[5] == event_[5] && cTemp[6] == event_[6] && cTemp[7] == event_[7]) {

			for (j = 0, i = 8; cTemp[i] != '\n'; i++, j++) {
				event_[j] = cTemp[i];
			}
			event_[j] = '\0';

			break;
		}

		if (cTemp[0] == 'L')
			break;
	}
	fclose(evFile);

	sprintf(cTemp, "%d", (t->tm_year + 1900) * 10000 + (t->tm_mon + 1) * 100 + t->tm_mday);
	if (strcmp(cTemp, event_) == 0) event_ = "";

	while (cStat != 4) {
		system("cls");
		cTemp = malloc(1024 + 5);
		// ����ȭ�� ���
		if (t->tm_wday == 6 || t->tm_wday == 7) {	// �ָ��� ��
			printUI(s, calendar, sDemerit, dDemerit, dangjik1, dangjik2, outTime, event_);
		}
		else {										// ������ ��
			switch (s.grade) {
			case 1:
				printUI(s, calendar, sDemerit, dDemerit, dangjik1, "", outTime, event_);
				break;
			case 2:
				printUI(s, calendar, sDemerit, dDemerit, dangjik2, "", outTime, event_);
				break;
			case 3:
				printUI(s, calendar, sDemerit, dDemerit, dangjik3, "", outTime, event_);
				break;
			}
		}
		scanf("%d", &cStat);
		switch (cStat) {
		case 1: // ��������
			if (t->tm_wday == 6 || t->tm_wday == 7) { printf("����:1 ����:2 ����1:3 ����2:4 ����:5\n"); }
			else { printf("8����:1 9����:2 ����1:3 ����2:4 ����:5\n"); }
			printf("�ٲ� ���ø� �Է����ּ��� : ");
			scanf("%d", &iTemp);
			if (iTemp == 5) {
				if (strcmp(calendar[11], "X") == 0) {
					calendar[11] = "O";
				}
				else {
					calendar[11] = "X";
				}
			}
			else {
				printf("�ٲ� ������ �Է����ּ���(3�� ����) : ");
				scanf("%s", cTemp);
				strcpy(calendar[iTemp + 6], cTemp);
			}
			printf("������ ����Ǿ����ϴ�.");
			break;
		case 2: // ���⿩�κ���
			printf("������ ���� ���θ� �����Ͻðڽ��ϱ�?(yes/no)");
			scanf("%s", cTemp);
			if (strcmp(cTemp, "yes") == 0) {
				if (strcmp(calendar[12], "O") == 0) {
					printf("������ ��ҵǾ����ϴ�.\n");
					calendar[12] = "X";
				}
				else {
					printf("���� �ð��� �Է����ּ���(n��~n�� ����) : ");
					scanf("%s", cTemp);
					strcpy(outTime, cTemp);
					calendar[12] = "O";
					printf("�����ϴ� ������ ����Ǿ����ϴ�!\n");
				}
			}
			break;
		case 3: // �ܹں���
			if (strcmp(calendar[13], "O") == 0) {
				calendar[13] = "X";
				printf("�ܹ��� �ƴ� ������ ����Ǿ����ϴ�!\n");
			}
			else {
				calendar[13] = "O";
				printf("�ܹ��ϴ� ������ ����Ǿ����ϴ�!\n");
			}
			break;
		case 4:
			printf("���α׷��� �����մϴ�.\n");
			break;
		default:
			printf("�߸��� �Է��Դϴ�. ���α׷��� �����մϴ�.\n");
			cStat = 4;
			break;
		}
		Sleep(700);
	}

	return 0;
}