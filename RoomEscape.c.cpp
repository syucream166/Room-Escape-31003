/*
개발자 : 김다빈, 박종호
개발일 : 2021.09.09
문의메일 : ghdls1254@gmail.com 
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
	printf("1. 입장\t ");
	printf("0. 종료\n\n");
	printf("=====================\n");
	printf(">> ");
	scanf("%d", &select);

	switch(select) {
		case 1:
			printf("입장완료\n");
			text();		
			break;
		case 0:
			return 0; 
			break;
		default:
			printf("입력오류");
			break;
	}		
}

void text() {
	system("cls");
	
	printf(">> “으윽.. 여긴 어디지…?”\n"); 
	Sleep(one_second);
	printf(">> 잠에서 깨어난 정혜민은 문득 잠에서 깨어났고 낯선 천장을 보게 되었다.\n\n"); 
	Sleep(one_second);	
	printf(">> “분명 난 친구랑 놀고 집에가는 길이었는데..”\n"); 
	Sleep(one_second);	
	printf(">> 그녀가 깨어나 주위를 둘러보니 어떠한 방에 누워있다는 것과 자신의 소지품이 모두 없어진 것을 깨닫는다.\n"); 
	Sleep(one_second);
	printf(">> 그녀는 뇌를 각성하고 방을 더 자세히 보았을 때 어느 벽에 글이 써있는 것을 발견했다.\n\n"); 
	Sleep(one_second);
	printf(">> “당신은 이 탑에서 탈출을 위한 열쇠를 모으고 2층의 탑을 탈출하십시오..?”\n"); 
	Sleep(one_second);
	printf(">> 그녀는 이 어이없는 상황에 말도 안되는 글을 보고 한동안 얼이 빠져 있었고 이내 정신을 차린 \n"); 
	Sleep(one_second);	
	printf(">> 그녀는 글 위에 큰 글씨로 5층이란 글씨를 볼 수 있었다.\n\n"); 
	Sleep(one_second);
	printf(">> 대체 무슨일이 일어나는 건지 머리가 따라가주지 않았지만 그녀는 할 수 없이 벽의 글이 하는 \n"); 
	Sleep(one_second);
	printf(">> 대로 할 수 밖에 없었고 방 가운데에 있는 계단을 내려가기 시작했다.\n");
	Sleep(one_second);		
	printf("계속하려면 아무키나 누르세요..."); 
	
	key_value = _getch();
	
	top4sel();
}

void top4sel() {
	system("cls");
	printf("\n>>> 2floor : 숲 <<<\n\n");
	
	int select;
	printf("=====================================\n\n");
	printf("1. 썩은 참나무\n\n2. 빛나는 돌\n\n3. 넝쿨에 둘러싸인 상자\n\n");
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
			printf("\n>>> 숲 - 썩은 참나무 <<<\n\n");
			printf("=====================================\n\n");
			printf("1. 살펴본다\t2. 무시한다\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel1);
			top4_1(sel1);
			break;
		
		case 2:
			system("cls");
			printf(">>> 숲 - 빛나는 돌 <<<\n\n");
			printf("=====================================\n\n");
			printf("1. 살펴본다\t2. 지나간다\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel2);
			top4_2(sel2);
		break;
		
		case 3:
			system("cls");
			printf(">>> 숲 - 넝쿨에 둘러싸인 상자 <<<\n\n");
			printf("=====================================\n\n");
			printf("1. 살펴본다\t2. 지나간다\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel3);
			top4_3(sel3);
		break;	
		default:
			printf("입력오류");
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
					printf("이미 키를 얻었습니다.\n");
				}
				else {
					printf(" “틈 안에 있는 물건을 꺼낼 수 있을 것 같다.”\n ");
					top4_1_1();
				}
			}
			else{
				system("cls");
				printf("“썩은 나무 틈에서 반짝이는게 보인다, 틈은 좁아서 손을 넣을 순 없을 것 같다.”\n");
			}
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top4sel();			
			break;
		case 2:
			system("cls");
			printf("“괜히 냄새만 나고 찝찝해… 그냥 지나가자.” 아무것도 얻지 못했다.\n");
			printf("계속하려면 아무키나 누르세요...\n"); 
			key_value = _getch();
			top4sel();
			break;
		default:
			printf("입력오류");
			break;
	}
}

void top4_1_1() {
	system("cls");

	int sel;
	printf("“틈 안에 있는 물건을 꺼낼 수 있을 것 같다.”\n\n");
	printf("=====================================\n\n");
	printf("1. 부순다\t2. 놔둔다\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &sel);
	
	switch(sel) {
		case 1:
			if(top4_key == 1) {
				printf("이미 키를 얻었습니다.");
			}
			else {
				system("cls");
				printf("썩은 나무를 부수니 열쇠가 나왔다.\n");
				top4_key++;			
			}
			break;
		case 2:
			system("cls");
			printf(" “도끼의 상태가 좋지 않으니 아끼자.” 아무것도 얻지 못했다.\n");
			break; 
		default:
			printf("입력오류");
			break;
	}
	
}

int top4_2(int sel2) {
	int sel;
	
	switch(sel2) {
		case 1:
			system("cls");
			if(top4_axe == 1 || top4_key == 1) {
				printf("이미 도끼를 얻었습니다.\n");
				printf("계속하려면 아무키나 누르세요...\n");
				key_value = _getch();
				top4sel();
			}
			else {
				printf(" 빛나는 돌을 살펴봤을 때 빛나는 돌에 버튼을 찾았다!!\n");
					printf("계속하려면 아무키나 누르세요...\n");
					key_value = _getch();
				top4_2_1();
			}
		break;
		
		case 2:
			system("cls");
			printf("“생긴 것도 수상한데 그냥 지나가자”\n");
			printf("계속하려면 아무키나 누르세요...\n"); 
			key_value = _getch();
			top4sel();
		break;
	}  
}

void top4_2_1() {
	
	int sel;
	
	system("cls");
	printf("=====================================\n\n");
	printf("1. 누른다\t2. 무시한다\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &sel);
	 
	switch(sel) {
		case 1:
			system("cls");
			printf("하늘에서 도끼가 떨어졌다.\n");
			top4_axe++;
			printf("계속하려면 아무키나 누르세요...\n"); 
			key_value = _getch();
			top4sel();
			break;
		case 2:
			system("cls");
			printf("“이런 버튼은 누르면 큰일날거야”\n ");
			printf("계속하려면 아무키나 누르세요...\n"); 
			key_value = _getch();
			top4sel();
			break;
		default:
			printf("입력오류");
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
					printf(" “왠지 이 열쇠로 상자를 열 수 있을 것 같다..” \n");
					printf("계속하려면 아무키나 누르세요...\n");
					key_value = _getch();
					top4_3_2();
				}
				else {
					system("cls");
					printf("“덩쿨을 자를 수 있을 것 같다”\n");
					printf("계속하려면 아무키나 누르세요...\n");
					key_value = _getch();
					top4_3_1();
				}
				
			}
			else {
				system("cls");
				printf("“여기에 왜 이렇게 큰 상자가 있지..? 그건 그렇고 덩쿨이 너무 많아 손으론 치우기 힘들 것 같다.”\n");
				printf("계속하려면 아무키나 누르세요...\n");
				key_value = _getch();
				top4sel();
			}
		break;
		
		case 2:
			system("cls");
			printf("“갑자기 왠 상자.. 불길해...”\n");
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top4sel();
		break;
		
		default:
			printf("입력오류");
		break;
	}
}

void top4_3_1() {
	int sel;
	
	system("cls");
	printf("=====================================\n\n");
	printf("1. 자르기\t2. 냅두기\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &sel);
	
	switch(sel) {
		case 1:
			system("cls");
			printf("덩쿨을 자르니 열쇠 구멍이 있는 커다란 상자가 모습을 드러냈다.\n");
			top4_dung ++;
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top4sel();
		break;
		
		case 2:
			system("cls");
			printf("“덩쿨이 너무 무성해… 괜히 내 힘만 빼는 거 아니야…?”");
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top4sel();
		break;
		
		default:
			printf("입력오류");
		break;
	} 
	
}

void top4_3_2() {
	int sel;
	
	system("cls");
	printf("=====================================\n\n");
	printf("1. 열어보기\t2. 무시하기\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &sel);
	
	switch(sel) {
		case 1:
			system("cls");
			printf(" “상자를 열어보니 커다란 크기에 걸맞는 밑으로 내려가는 계단을 발견했다.”\n");
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top4exit();
		break;
		
		case 2:
			system("cls");
			printf("“혹시 미믹인거 아니야...? 난 더 살고 싶어..” \n");
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top4sel();
		break;
	
		default:
			printf("입력오류");
		break; 
	}	
}

void top4exit() {
	system("cls");
	printf("혜민은 울창한 느낌을 주는 숲과 비교되는 음침한 느낌을 주는 계단을 내려갔다.\n");
	Sleep(one_second);
	printf("마치 디O니의 겨울을 연상케 하는 계단을 내려가자 방공호의 것으로 연상되는 문을 발견했다\n");
	Sleep(one_second);
	printf("\n“대체 여긴 뭐하는 곳이야...”\n");
	Sleep(one_second);
	printf("이내 망설임을 지우고 문을 열고 나가 본 광경에 그녀는 말을 잇지 못했다\n");
	Sleep(one_second);
	printf("그것은 마치 북극에 가본다면 이렇지 않을까 하는 생각이 드는 눈으로 덮인 곳이었다\n");
	Sleep(one_second);
	printf("\n“여기.. 탑이라고 하지 않았나..? 숲도 그렇고 여긴 대체 어떻게 되먹은거야..”\n");
	Sleep(one_second);
	printf("그녀는 의문을 가지고 주위를 돌아다니기 시작했다\n");
	Sleep(one_second);
	printf("계속하려면 아무키나 누르세요...\n");
	key_value = _getch();	
	top3sel();
}

void top3sel() {
	system("cls");
	printf(">>> 1floor : 눈 덮인산  <<<\n\n");
	
	int select;
	printf("=====================================\n\n");
	printf("1. 운반용 썰매\n\n2. 등산가의 시체\n\n3. 얼어붙은 호수\n\n");
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
			printf(">>> 눈 덮인 산 - 운반용 썰매 <<<\n\n");
			printf("=====================================\n\n");
			printf("1. 살펴본다\t2. 지나간다\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel1);
			top3_1(sel1);
		break;
		case 2:
			system("cls");
			printf(">>> 눈 덮인 산 - 등산가의 시체 <<<\n\n");
			printf("=====================================\n\n");
			printf("1. 살펴본다\t2. 지나간다\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel2);
			top3_2(sel2);
		break;
		case 3:
			system("cls");
			printf(">>> 눈 덮인 산 - 얼어붙은 호수 <<<\n\n");
			printf("=====================================\n\n");
			printf("1. 살펴본다\t2. 지나간다\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel3);
			top3_3(sel3);	
		break;
		default:
			printf("입력 오류");
			break;
			
	}
}

int top3_1(int sel1) {
	
	int sel;
	
	switch(sel1) {
		case 1:
			
			system("cls");
			printf("=====================================\n\n");
			printf("1. 살펴본다\t2. 지나간다\n\n");
			printf("=====================================\n");
			printf(">> ");
			scanf("%d", &sel);
			
			if( top3_hammer == 1 ) {
				system("cls");
				printf("이미 망치를 얻었습니다.\n ");
				printf("계속하려면 아무키나 누르세요...\n");
				key_value = _getch();
				top3sel();	 
			}
			else {
				system("cls");
				printf("썰매에서 가방을 발견했다.\n");
				printf("계속하려면 아무키나 누르세요...\n");
				key_value = _getch();	
				top3_1_1();
			}
			
		break;
		
		case 2:
			system("cls");
			printf("“내것도 아닌데 구지 건들지 말자..” 아무것도 얻지 못했다\n");
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top3sel();		
		break;
		
		default:
			printf("입력오류");				
		break;	
	}
}

void top3_1_1() {
	int sel;
	system("cls");
	printf("가방\n");
	printf("=====================================\n\n");
	printf("1. 살펴본다\t2. 지나간다\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &sel);
	
	switch(sel) {
		case 1:
			system("cls");
			top3_hammer++;
			printf("가방안엔 얼음 망치가 있다.. 어디에 쓰지..?\n");
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top3sel();			
		break;
		
		case 2:
			system("cls");
			printf("“아무것도 없어 보인다..”\n");
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top3sel();
		break;
		default:
			printf("입력 오류");
		break;
	}
}

int top3_2(int sel2) {
	
	system("cls");
	
	switch(sel2) {
		case 1:
			if(top3_letter == 1) {
				system("cls");
				printf("이미 편지를 얻었습니다.\n");
				printf("계속하려면 아무키나 누르세요...\n");
				key_value = _getch();
				top3sel();
			}
			else if(top3_letter == -1) {
				system("cls");
				printf("편지를 버렸습니다.\n");
				printf("계속하려면 아무키나 누르세요...\n");
				key_value = _getch();				
				top3sel();
			}
			else {
				system("cls");
				printf("“우웁.. 무슨 냄새가..” 시체 썩은내가 나지만 주머니에서 편지지를 발견했다.\n");
				printf("계속하려면 아무키나 누르세요...\n");
				key_value = _getch();
				top3_2_1();
			}
			break;
		case 2:
			system("cls");
			printf("“우웁.. 저건 도저히 못보겠어..” 아무것도 얻지 못했다.\n");
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top3sel();
		break;
		default:
			printf("입력 오류");
		break;
	}
}

void top3_2_1() {
	int sel;
	system("cls");
	printf("=====================================\n\n");
	printf("1. 내용을 본다 2. 편지를 버린다\n\n");
	printf("=====================================\n");
	printf(">> ");
	scanf("%d", &sel);
	
	switch(sel) {
		case 1:
			system("cls");
			top3_letter++;
			printf("계단 위치에 대한 힌트를 얻었다!! “이제 다음층으로 갈 수 있겠어!!”\n");
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top3sel();
		break;
		case 2:
			system("cls");
			top3_letter--;
			printf("“피 묻어서 잘 열리지도 않는데 그냥 버리자.\n");
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top3sel();	
		break;
		default:
			printf("입력 오류");
		break;
	}
}

int top3_3(int sel3) {

	switch(sel3) {
		case 1:
			if(top3_letter == 1 && top3_hammer == 1) {
				system("cls");
				printf("“아! 여기를 깨는 거구나!!” 탈출구로 탈출하였다\n");
				printf("계속하려면 아무키나 누르세요...\n");
				key_value = _getch();
				end();
			}
			else if(top3_hammer == 1) {
				system("cls");
				printf("“어디다가 쓰는 망치지..? 얼음을 깨뜨리는 건 맞는거 같은데..”\n");
				printf("계속하려면 아무키나 누르세요...\n");
				key_value = _getch();
				top3sel();
			}
			else if(top3_letter == 1) {
				system("cls");
				printf("“여기가 탈출구 인가보다!!” 탈출구의 위치를 찾았다\n");
				printf("계속하려면 아무키나 누르세요...\n");
				key_value = _getch();
				top3sel();
			}
			else {
				system("cls");
				printf("커다란 호수를 둘러봤지만 특이한걸 찾을 순 없었다\n");
				printf("계속하려면 아무키나 누르세요...\n");
				key_value = _getch();
				top3sel();
			}
		break;
		
		case 2:
			system("cls");
			printf("여긴 너무 넓다.. 그냥 돌아가자.” 아무것도 알아내지 못했다");
			printf("계속하려면 아무키나 누르세요...\n");
			key_value = _getch();
			top3sel();
			
		break;
		default:
			printf("입력 오류");
		break;
	}
}

void end() {
	system("cls");
	Sleep(one_second);
	printf("2층의 탑을 모두 클리어 하셨습니다.\n");
	Sleep(one_second);
	printf("게임종료 ^^..(아무키나 누르세요)\n");
	key_value = _getch();
}

//void top3exit() {
//	system("cls");
//	printf("호수 근처에서 계단을 발견한 혜민은 바닥을 여는 형태의(다락문 같은) 문을 발견하고 그\n");
//	Sleep(one_second);
//	printf("밑으로 내려가기 시작했다\n");
//	Sleep(one_second);
//	printf("\n“아까 내려온 계단이랑은 다르네...”\n");
//	Sleep(one_second);
//	printf("이번 계단은 콘크리트로 만든 것 같은 회색빛의 계단이었다\n");
//	Sleep(one_second);
//	printf("\n“이번엔 어떤 곳일까...”");
//	Sleep(one_second);
//	printf("그녀는 도대체 왜 여기에 갑작스럽게 오게 된 이유에 대해 의문을 가지고 밑으로 내려갔다\n\n");
//	Sleep(one_second);
//	printf("아까의 층과 마찬가지로 잠수함의 문같이 생긴 문을 열고 나가니 대학교의 교실처럼 보이는 방에 도착했다.\n");
//	Sleep(one_second);
//	printf("교실의 앞문에는 비밀번호를 입력하는 모니터와 키보드가 있었다.\n");
//	Sleep(one_second);
//	printf("“여긴... 교실이네...” \n\n");
//	Sleep(one_second);
//	printf("그녀는 교실의 앞문에는 비밀번호를 입력하는 모니터와 키보드를 발견하였고, 문에는 ‘EXIT’ 라는 문구가 써져 있었다\n");
//	Sleep(one_second);
//	printf("“이번에는 여기가 계단으로 이어지는 길인 것 같네..”\n\n");
//	Sleep(one_second);
//	printf("“왠지 학생 때로 돌아온 느낌이야..”\n");
//	Sleep(one_second);
//	printf("이내 그녀는 잡생각을 떨치고 반을 둘러보기 시작했다.\n\n");
//	Sleep(one_second);
//	printf("계속하려면 아무키나 누르세요...\n");
//	key_value = _getch();	
//		
//	top2sel();
//}

//void top2sel() {
//
//	system("cls");
//	printf(">>> 2floor : 교실  <<<\n\n");
//	
//	int select;
//	printf("=====================================\n\n");
//	printf("1. 가방\n\n2. 서랍\n\n3. 책상/의자\n\n4. 시계\n\n");
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
//			printf(">>> 교실 - 시계 <<<\n\n");
//			printf("=====================================\n\n");
//			printf("1. 살펴본다 2. 지나간다\n\n");
//			printf("=====================================\n");
//			printf(">> ");
//			scanf("%d", &sel1);
//			top2_1(sel1);
//		break;
//		case 2:
//			system("cls");
//			printf(">>> 교실 - 서랍 <<<\n\n");
//			printf("=====================================\n\n");
//			printf("1. 살펴본다 2. 지나간다\n\n");
//			printf("=====================================\n");
//			printf(">> ");
//			scanf("%d", &sel2);
//			top2_2(sel2);
//		break;
//		case 3:
//			system("cls");
//			printf(">>> 교실 - 책상/의자 <<<\n\n");
//			printf("=====================================\n\n");
//			printf("1. 살펴본다 2. 지나간다\n\n");
//			printf("=====================================\n");
//			printf(">> ");
//			scanf("%d", &sel3);
//			top2_3(sel3);	
//		break;
//		case 4:
//			system("cls");
//			printf(">>> 교실 - 가방 <<<\n\n");
//			printf("=====================================\n\n");
//			printf("1. 살펴본다 2. 지나간다\n\n");
//			printf("=====================================\n");
//			printf(">> ");
//			scanf("%d", &sel4);
//			top2_4(sel4);	
//		break;
//		default:
//			printf("입력 오류");
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
//			printf("“뭐지..? 분명 밖은 밝은데 시간은 저녁을 가리키고 있네?” 시계를 만져보니 뒤편에 비밀번호 입력하는 금고를 발견했다");
//			printf("계속하려면 아무키나 누르세요...\n");
//			key_value = _getch();
//			void top2_1_1();
//		break;
//		
//		case 2:
//			system("cls");
//			printf("“그냥 시곈가 보다” 아무것도 얻지 못했다\n");
//			printf("계속하려면 아무키나 누르세요...\n");
//			key_value = _getch();
//			top2sel();	
//		break;
//		
//		default:
//			printf("입력오류");
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
//				printf("“이 열쇠로 열면 되는건가..?” ");
//				printf("계속하려면 아무키나 누르세요...\n");
//				top2_hint++;
//				key_value = _getch();
//				void top2_2_1();				
//			}
//			
//			else {
//				printf("“열쇠로 여는 잠열쇠로 잠긴 사물함이다.. 어딘가엔 열쇠가 있겠지..?”");
//				printf("계속하려면 아무키나 누르세요...\n");
//				key_value = _getch();
//				top2sel();	
//			}
//
//		break;
//		
//		case 2:
//			system("cls");
//			printf("“잠열쇠가 너무 낡았네.. 괜히 만졌다가 다칠 것 같아..” 아무것도 얻지못했다\n");
//			printf("계속하려면 아무키나 누르세요...\n");
//			key_value = _getch();
//			top2sel();	
//		break;
//		
//		default:
//			printf("입력오류");
//		break;	
//	}
//}
//void top2_2_1(){
//	printf("비밀번호에 대한 힌트를 얻었다\n");
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

