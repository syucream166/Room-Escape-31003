/*
������ : ��ٺ�, ����ȣ
������ : 2021.09.09
���Ǹ��� : ghdls1254@gmail.com 
*/


#include<stdio.h>
#include<windows.h>
#include<conio.h>

#define one_second 1000

int _getch(void);
int key_value;

void text();

void top4sel();
int top4(int select);

int top4_1(int sel1);
void top4_1_1();

int top4_2(int sel2);
void top4_2_1();

int top4_3(int sel3);
void top4_3_1();
void top4_3_2();
void top4exit();

int top4_axe = 0;
int top4_key = 0;
int top4_dung = 0;

void top3sel();
int top3(int select);

int top3_1(int sel1);
void top3_1_1();

int top3_2(int sel2);
void top3_2_1();

int top3_3(int sel3);
void top3exit();

int top3_hammer = 0;
int top3_letter = 0;

void top2sel();
int top2(int select);

int top2_1(int sel1);
void top2_1_1();

int top2_2(int sel2);
void top2_2_1();

int top2_3(int sel3);
void top2_3_1();

int top2_4(int sel4);
void top2_4_1();

int top2_key = 0;
int top2_hint = 0;

void end();

int main() {
	int select;
	
	printf("ROOM ESCAPE\n\n\n");
	printf("=====================\n\n");
	printf("1. ����\t ");
	printf("0. ����\n\n");
	printf("=====================\n");
	printf(">> ");
	scanf("%d", &select);

	switch(select) {
		case 1:
			printf("����Ϸ�\n");
			text();		
			break;
		case 0:
			return 0; 
			break;
		default:
			printf("�Է¿���");
			break;
	}		
}

void text() {
	system("cls");
	
	printf(">> ������.. ���� �������?��\n"); 
	Sleep(one_second);
	printf(">> �ῡ�� ��� �������� ���� �ῡ�� ����� ���� õ���� ���� �Ǿ���.\n\n"); 
	Sleep(one_second);	
	printf(">> ���и� �� ģ���� ��� �������� ���̾��µ�..��\n"); 
	Sleep(one_second);	
	printf(">> �׳డ ��� ������ �ѷ����� ��� �濡 �����ִٴ� �Ͱ� �ڽ��� ����ǰ�� ��� ������ ���� ���ݴ´�.\n"); 
	Sleep(one_second);
	printf(">> �׳�� ���� �����ϰ� ���� �� �ڼ��� ������ �� ��� ���� ���� ���ִ� ���� �߰��ߴ�.\n\n"); 
	Sleep(one_second);
	printf(">> ������� �� ž���� Ż���� ���� ���踦 ������ 2���� ž�� Ż���Ͻʽÿ�..?��\n"); 
	Sleep(one_second);
	printf(">> �׳�� �� ���̾��� ��Ȳ�� ���� �ȵǴ� ���� ���� �ѵ��� ���� ���� �־��� �̳� ������ ���� \n"); 
	Sleep(one_second);	
	printf(">> �׳�� �� ���� ū �۾��� 5���̶� �۾��� �� �� �־���.\n\n"); 
	Sleep(one_second);
	printf(">> ��ü �������� �Ͼ�� ���� �Ӹ��� �������� �ʾ����� �׳�� �� �� ���� ���� ���� �ϴ� \n"); 
	Sleep(one_second);
	printf(">> ��� �� �� �ۿ� ������ �� ����� �ִ� ����� �������� �����ߴ�.\n");
	Sleep(one_second);		
	printf("����Ϸ��� �ƹ�Ű�� ��������..."); 
	
	key_value = _getch();
	
	top4sel();
}

void top4sel() {
	system("cls");
	printf("\n>>> 2floor : �� <<<\n\n");
	
	int select;
	printf("=====================================\n\n");
	printf("1. ���� ������\n\n2. ������ ��\n\n3. ���� �ѷ����� ����\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &select);
	
	top4(select);
	
}

int top4(int select) {
	
	int sel1, sel2, sel3;
	
	switch(select) {
		case 1:
			system("cls");
			printf("\n>>> �� - ���� ������ <<<\n\n");
			printf("=====================================\n\n");
			printf("1. ���캻��\t2. �����Ѵ�\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel1);
			top4_1(sel1);
			break;
		
		case 2:
			system("cls");
			printf(">>> �� - ������ �� <<<\n\n");
			printf("=====================================\n\n");
			printf("1. ���캻��\t2. ��������\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel2);
			top4_2(sel2);
		break;
		
		case 3:
			system("cls");
			printf(">>> �� - ���� �ѷ����� ���� <<<\n\n");
			printf("=====================================\n\n");
			printf("1. ���캻��\t2. ��������\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel3);
			top4_3(sel3);
		break;	
		default:
			printf("�Է¿���");
			break;
	}
}

int top4_1(int sel1) {
	
	int sel;
	
	switch(sel1) {
		case 1:
			if(top4_axe == 1) {
				if(top4_key == 1) {
					system("cls");
					printf("�̹� Ű�� ������ϴ�.\n");
				}
				else {
					printf(" ��ƴ �ȿ� �ִ� ������ ���� �� ���� �� ����.��\n ");
					top4_1_1();
				}
			}
			else{
				system("cls");
				printf("������ ���� ƴ���� ��¦�̴°� ���δ�, ƴ�� ���Ƽ� ���� ���� �� ���� �� ����.��\n");
			}
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top4sel();			
			break;
		case 2:
			system("cls");
			printf("������ ������ ���� �����ء� �׳� ��������.�� �ƹ��͵� ���� ���ߴ�.\n");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n"); 
			key_value = _getch();
			top4sel();
			break;
		default:
			printf("�Է¿���");
			break;
	}
}

void top4_1_1() {
	system("cls");

	int sel;
	printf("��ƴ �ȿ� �ִ� ������ ���� �� ���� �� ����.��\n\n");
	printf("=====================================\n\n");
	printf("1. �μ���\t2. ���д�\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &sel);
	
	switch(sel) {
		case 1:
			if(top4_key == 1) {
				printf("�̹� Ű�� ������ϴ�.");
			}
			else {
				system("cls");
				printf("���� ������ �μ��� ���谡 ���Դ�.\n");
				top4_key++;			
			}
			break;
		case 2:
			system("cls");
			printf(" �������� ���°� ���� ������ �Ƴ���.�� �ƹ��͵� ���� ���ߴ�.\n");
			break; 
		default:
			printf("�Է¿���");
			break;
	}
	
}

int top4_2(int sel2) {
	int sel;
	
	switch(sel2) {
		case 1:
			system("cls");
			if(top4_axe == 1 || top4_key == 1) {
				printf("�̹� ������ ������ϴ�.\n");
				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
				key_value = _getch();
				top4sel();
			}
			else {
				printf(" ������ ���� ������� �� ������ ���� ��ư�� ã�Ҵ�!!\n");
					printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
					key_value = _getch();
				top4_2_1();
			}
		break;
		
		case 2:
			system("cls");
			printf("������ �͵� �����ѵ� �׳� �������ڡ�\n");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n"); 
			key_value = _getch();
			top4sel();
		break;
	}  
}

void top4_2_1() {
	
	int sel;
	
	system("cls");
	printf("=====================================\n\n");
	printf("1. ������\t2. �����Ѵ�\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &sel);
	 
	switch(sel) {
		case 1:
			system("cls");
			printf("�ϴÿ��� ������ ��������.\n");
			top4_axe++;
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n"); 
			key_value = _getch();
			top4sel();
			break;
		case 2:
			system("cls");
			printf("���̷� ��ư�� ������ ū�ϳ��žߡ�\n ");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n"); 
			key_value = _getch();
			top4sel();
			break;
		default:
			printf("�Է¿���");
			break; 
	}
	
}

int top4_3(int sel3) {
	int sel;
	
	switch(sel3) {
		case 1:
			if(top4_axe == 1) {
				if(top4_key == 1 && top4_dung == 1) {
					system("cls");
					printf(" ������ �� ����� ���ڸ� �� �� ���� �� ����..�� \n");
					printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
					key_value = _getch();
					top4_3_2();
				}
				else {
					system("cls");
					printf("�������� �ڸ� �� ���� �� ���١�\n");
					printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
					key_value = _getch();
					top4_3_1();
				}
				
			}
			else {
				system("cls");
				printf("�����⿡ �� �̷��� ū ���ڰ� ����..? �װ� �׷��� ������ �ʹ� ���� ������ ġ��� ���� �� ����.��\n");
				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
				key_value = _getch();
				top4sel();
			}
		break;
		
		case 2:
			system("cls");
			printf("�����ڱ� �� ����.. �ұ���...��\n");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top4sel();
		break;
		
		default:
			printf("�Է¿���");
		break;
	}
}

void top4_3_1() {
	int sel;
	
	system("cls");
	printf("=====================================\n\n");
	printf("1. �ڸ���\t2. ���α�\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &sel);
	
	switch(sel) {
		case 1:
			system("cls");
			printf("������ �ڸ��� ���� ������ �ִ� Ŀ�ٶ� ���ڰ� ����� �巯�´�.\n");
			top4_dung ++;
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top4sel();
		break;
		
		case 2:
			system("cls");
			printf("�������� �ʹ� �����ء� ���� �� ���� ���� �� �ƴϾߡ�?��");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top4sel();
		break;
		
		default:
			printf("�Է¿���");
		break;
	} 
	
}

void top4_3_2() {
	int sel;
	
	system("cls");
	printf("=====================================\n\n");
	printf("1. �����\t2. �����ϱ�\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &sel);
	
	switch(sel) {
		case 1:
			system("cls");
			printf(" �����ڸ� ����� Ŀ�ٶ� ũ�⿡ �ɸ´� ������ �������� ����� �߰��ߴ�.��\n");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top4exit();
		break;
		
		case 2:
			system("cls");
			printf("��Ȥ�� �̹��ΰ� �ƴϾ�...? �� �� ��� �;�..�� \n");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top4sel();
		break;
	
		default:
			printf("�Է¿���");
		break; 
	}	
}

void top4exit() {
	system("cls");
	printf("������ ��â�� ������ �ִ� ���� �񱳵Ǵ� ��ħ�� ������ �ִ� ����� ��������.\n");
	Sleep(one_second);
	printf("��ġ ��O���� �ܿ��� ������ �ϴ� ����� �������� ���ȣ�� ������ ����Ǵ� ���� �߰��ߴ�\n");
	Sleep(one_second);
	printf("\n����ü ���� ���ϴ� ���̾�...��\n");
	Sleep(one_second);
	printf("�̳� �������� ����� ���� ���� ���� �� ���濡 �׳�� ���� ���� ���ߴ�\n");
	Sleep(one_second);
	printf("�װ��� ��ġ �ϱؿ� �����ٸ� �̷��� ������ �ϴ� ������ ��� ������ ���� ���̾���\n");
	Sleep(one_second);
	printf("\n������.. ž�̶�� ���� �ʾҳ�..? ���� �׷��� ���� ��ü ��� �Ǹ����ž�..��\n");
	Sleep(one_second);
	printf("�׳�� �ǹ��� ������ ������ ���ƴٴϱ� �����ߴ�\n");
	Sleep(one_second);
	printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
	key_value = _getch();	
	top3sel();
}

void top3sel() {
	system("cls");
	printf(">>> 1floor : �� ���λ�  <<<\n\n");
	
	int select;
	printf("=====================================\n\n");
	printf("1. ��ݿ� ���\n\n2. ��갡�� ��ü\n\n3. ������ ȣ��\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &select);
	
	top3(select);
	
}

int top3(int select) {
	int sel1, sel2, sel3;
	 
	switch(select) {
		case 1:
			system("cls");
			printf(">>> �� ���� �� - ��ݿ� ��� <<<\n\n");
			printf("=====================================\n\n");
			printf("1. ���캻��\t2. ��������\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel1);
			top3_1(sel1);
		break;
		case 2:
			system("cls");
			printf(">>> �� ���� �� - ��갡�� ��ü <<<\n\n");
			printf("=====================================\n\n");
			printf("1. ���캻��\t2. ��������\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel2);
			top3_2(sel2);
		break;
		case 3:
			system("cls");
			printf(">>> �� ���� �� - ������ ȣ�� <<<\n\n");
			printf("=====================================\n\n");
			printf("1. ���캻��\t2. ��������\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel3);
			top3_3(sel3);	
		break;
		default:
			printf("�Է� ����");
			break;
			
	}
}

int top3_1(int sel1) {
	
	int sel;
	
	switch(sel1) {
		case 1:
			
			system("cls");
			printf("=====================================\n\n");
			printf("1. ���캻��\t2. ��������\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel);
			
			if( top3_hammer == 1 ) {
				system("cls");
				printf("�̹� ��ġ�� ������ϴ�.\n ");
				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
				key_value = _getch();
				top3sel();	 
			}
			else {
				system("cls");
				printf("��ſ��� ������ �߰��ߴ�.\n");
				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
				key_value = _getch();	
				top3_1_1();
			}
			
		break;
		
		case 2:
			system("cls");
			printf("�����͵� �ƴѵ� ���� �ǵ��� ����..�� �ƹ��͵� ���� ���ߴ�\n");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top3sel();		
		break;
		
		default:
			printf("�Է¿���");				
		break;	
	}
}

void top3_1_1() {
	int sel;
	system("cls");
	printf("����\n");
	printf("=====================================\n\n");
	printf("1. ���캻��\t2. ��������\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &sel);
	
	switch(sel) {
		case 1:
			system("cls");
			top3_hammer++;
			printf("����ȿ� ���� ��ġ�� �ִ�.. ��� ����..?\n");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top3sel();			
		break;
		
		case 2:
			system("cls");
			printf("���ƹ��͵� ���� ���δ�..��\n");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top3sel();
		break;
		default:
			printf("�Է� ����");
		break;
	}
}

int top3_2(int sel2) {
	
	system("cls");
	
	switch(sel2) {
		case 1:
			if(top3_letter == 1) {
				system("cls");
				printf("�̹� ������ ������ϴ�.\n");
				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
				key_value = _getch();
				top3sel();
			}
			else if(top3_letter == -1) {
				system("cls");
				printf("������ ���Ƚ��ϴ�.\n");
				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
				key_value = _getch();				
				top3sel();
			}
			else {
				system("cls");
				printf("�����.. ���� ������..�� ��ü �������� ������ �ָӴϿ��� �������� �߰��ߴ�.\n");
				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
				key_value = _getch();
				top3_2_1();
			}
			break;
		case 2:
			system("cls");
			printf("�����.. ���� ������ �����ھ�..�� �ƹ��͵� ���� ���ߴ�.\n");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top3sel();
		break;
		default:
			printf("�Է� ����");
		break;
	}
}

void top3_2_1() {
	int sel;
	system("cls");
	printf("=====================================\n\n");
	printf("1. ������ ���� 2. ������ ������\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &sel);
	
	switch(sel) {
		case 1:
			system("cls");
			top3_letter++;
			printf("��� ��ġ�� ���� ��Ʈ�� �����!! ������ ���������� �� �� �ְھ�!!��\n");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top3sel();
		break;
		case 2:
			system("cls");
			top3_letter--;
			printf("���� ��� �� �������� �ʴµ� �׳� ������.\n");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top3sel();	
		break;
		default:
			printf("�Է� ����");
		break;
	}
}

int top3_3(int sel3) {

	switch(sel3) {
		case 1:
			if(top3_letter == 1 && top3_hammer == 1) {
				system("cls");
				printf("����! ���⸦ ���� �ű���!!�� Ż�ⱸ�� Ż���Ͽ���\n");
				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
				key_value = _getch();
				end();
			}
			else if(top3_hammer == 1) {
				system("cls");
				printf("�����ٰ� ���� ��ġ��..? ������ ���߸��� �� �´°� ������..��\n");
				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
				key_value = _getch();
				top3sel();
			}
			else if(top3_letter == 1) {
				system("cls");
				printf("�����Ⱑ Ż�ⱸ �ΰ�����!!�� Ż�ⱸ�� ��ġ�� ã�Ҵ�\n");
				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
				key_value = _getch();
				top3sel();
			}
			else {
				system("cls");
				printf("Ŀ�ٶ� ȣ���� �ѷ������� Ư���Ѱ� ã�� �� ������\n");
				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
				key_value = _getch();
				top3sel();
			}
		break;
		
		case 2:
			system("cls");
			printf("���� �ʹ� �д�.. �׳� ���ư���.�� �ƹ��͵� �˾Ƴ��� ���ߴ�");
			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
			key_value = _getch();
			top3sel();
			
		break;
		default:
			printf("�Է� ����");
		break;
	}
}

void end() {
	system("cls");
	Sleep(one_second);
	printf("2���� ž�� ��� Ŭ���� �ϼ̽��ϴ�.\n");
	Sleep(one_second);
	printf("�������� ^^..(�ƹ�Ű�� ��������)\n");
	key_value = _getch();
}

//void top3exit() {
//	system("cls");
//	printf("ȣ�� ��ó���� ����� �߰��� ������ �ٴ��� ���� ������(�ٶ��� ����) ���� �߰��ϰ� ��\n");
//	Sleep(one_second);
//	printf("������ �������� �����ߴ�\n");
//	Sleep(one_second);
//	printf("\n���Ʊ� ������ ����̶��� �ٸ���...��\n");
//	Sleep(one_second);
//	printf("�̹� ����� ��ũ��Ʈ�� ���� �� ���� ȸ������ ����̾���\n");
//	Sleep(one_second);
//	printf("\n���̹��� � ���ϱ�...��");
//	Sleep(one_second);
//	printf("�׳�� ����ü �� ���⿡ ���۽����� ���� �� ������ ���� �ǹ��� ������ ������ ��������\n\n");
//	Sleep(one_second);
//	printf("�Ʊ��� ���� ���������� ������� ������ ���� ���� ���� ������ ���б��� ����ó�� ���̴� �濡 �����ߴ�.\n");
//	Sleep(one_second);
//	printf("������ �չ����� ��й�ȣ�� �Է��ϴ� ����Ϳ� Ű���尡 �־���.\n");
//	Sleep(one_second);
//	printf("������... �����̳�...�� \n\n");
//	Sleep(one_second);
//	printf("�׳�� ������ �չ����� ��й�ȣ�� �Է��ϴ� ����Ϳ� Ű���带 �߰��Ͽ���, ������ ��EXIT�� ��� ������ ���� �־���\n");
//	Sleep(one_second);
//	printf("���̹����� ���Ⱑ ������� �̾����� ���� �� ����..��\n\n");
//	Sleep(one_second);
//	printf("������ �л� ���� ���ƿ� �����̾�..��\n");
//	Sleep(one_second);
//	printf("�̳� �׳�� ������� ��ġ�� ���� �ѷ����� �����ߴ�.\n\n");
//	Sleep(one_second);
//	printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
//	key_value = _getch();	
//		
//	top2sel();
//}

//void top2sel() {
//
//	system("cls");
//	printf(">>> 2floor : ����  <<<\n\n");
//	
//	int select;
//	printf("=====================================\n\n");
//	printf("1. ����\n\n2. ����\n\n3. å��/����\n\n4. �ð�\n\n");
//	printf("=====================================\n");
//	printf(">> ");
//	scanf("%d", &select);
//	
//	top2(select);
//}
//
//int top2(int select) {
//	int sel1, sel2, sel3, sel4;
//	 
//	switch(select) {
//		case 1:
//			system("cls");
//			printf(">>> ���� - �ð� <<<\n\n");
//			printf("=====================================\n\n");
//			printf("1. ���캻�� 2. ��������\n\n");
//			printf("=====================================\n");
//			printf(">> ");
//			scanf("%d", &sel1);
//			top2_1(sel1);
//		break;
//		case 2:
//			system("cls");
//			printf(">>> ���� - ���� <<<\n\n");
//			printf("=====================================\n\n");
//			printf("1. ���캻�� 2. ��������\n\n");
//			printf("=====================================\n");
//			printf(">> ");
//			scanf("%d", &sel2);
//			top2_2(sel2);
//		break;
//		case 3:
//			system("cls");
//			printf(">>> ���� - å��/���� <<<\n\n");
//			printf("=====================================\n\n");
//			printf("1. ���캻�� 2. ��������\n\n");
//			printf("=====================================\n");
//			printf(">> ");
//			scanf("%d", &sel3);
//			top2_3(sel3);	
//		break;
//		case 4:
//			system("cls");
//			printf(">>> ���� - ���� <<<\n\n");
//			printf("=====================================\n\n");
//			printf("1. ���캻�� 2. ��������\n\n");
//			printf("=====================================\n");
//			printf(">> ");
//			scanf("%d", &sel4);
//			top2_4(sel4);	
//		break;
//		default:
//			printf("�Է� ����");
//			break;
//			
//	}
//}
//
//int top2_1(int sel1){
//	
//	system("cls");
//	
//	switch(sel1) {
//		case 1:
//			printf("������..? �и� ���� ������ �ð��� ������ ����Ű�� �ֳ�?�� �ð踦 �������� ���� ��й�ȣ �Է��ϴ� �ݰ� �߰��ߴ�");
//			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
//			key_value = _getch();
//			void top2_1_1();
//		break;
//		
//		case 2:
//			system("cls");
//			printf("���׳� �ð鰡 ���١� �ƹ��͵� ���� ���ߴ�\n");
//			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
//			key_value = _getch();
//			top2sel();	
//		break;
//		
//		default:
//			printf("�Է¿���");
//		break;	
//	}
//	
//}
//void top2_1_1(){
//	
//}
//
//int top2_2(int sel2){
//	system("cls");
//	
//	switch(sel2) {
//		case 1:
//			if (top2_key == 1) {
//				printf("���� ����� ���� �Ǵ°ǰ�..?�� ");
//				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
//				top2_hint++;
//				key_value = _getch();
//				void top2_2_1();				
//			}
//			
//			else {
//				printf("������� ���� �῭��� ��� �繰���̴�.. ��򰡿� ���谡 �ְ���..?��");
//				printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
//				key_value = _getch();
//				top2sel();	
//			}
//
//		break;
//		
//		case 2:
//			system("cls");
//			printf("���῭�谡 �ʹ� ���ҳ�.. ���� �����ٰ� ��ĥ �� ����..�� �ƹ��͵� �������ߴ�\n");
//			printf("����Ϸ��� �ƹ�Ű�� ��������...\n");
//			key_value = _getch();
//			top2sel();	
//		break;
//		
//		default:
//			printf("�Է¿���");
//		break;	
//	}
//}
//void top2_2_1(){
//	printf("��й�ȣ�� ���� ��Ʈ�� �����\n");
//}
//
//int top2_3(int sel3){
//	
//}
//void top2_3_1(){
//	
//}
//
//int top2_4(int sel4){
//	
//}
//void top2_4_1(){
//	
//}
//

