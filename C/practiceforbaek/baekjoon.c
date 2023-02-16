// 백준 5597
// #include <stdio.h>
// int main() {
//     int a[31] = { 0, };
//     for (int i = 1; i <= 30; i++) {
//         a[i] = i;
//     }
//     int s[31] = { 0, };
//     for (int i = 0; i < 28; i++) {
//         scanf("%d", &s[i]);
//         a[s[i]] = 0;

//     }
//     for (int i = 1; i <= 30; i++) {
//         if (a[i] != 0) {
//             printf("%d\n", i);
//         }
//     }
// }

// 백준 3052
// #include <stdio.h>
// int main(){
//     int a[10]={0,};
//     for(int i=0;i<10;i++){
//         scanf("%d",&a[i]);
//         a[i]=a[i]%42;
//     }

//     int cnt_1=0;
//     for(int i=0;i<10;i++){
//         int cnt=0;
//         for(int j=0;j<10;j++){
//             if(a[j]==a[i]) ++cnt;
//         }
//         if(cnt==0) ++cnt_1;
//     }
   
//     printf("%d",cnt_1);
// }

// #include <stdio.h>
// int main(void) {

//     int in;

//     int c = 0;

//     int a[10];

//     for (int i = 0; i < 10; i++) {

//         scanf("%d", &in);

//         a[i] = (in % 42);

//     }

//     for (int i = 0; i < 10; i++) {

//         int num = 0;

//         for (int j = i + 1; j < 10; j++) {

//             if (a[i] == a[j])

//                 num++;

//         }

//         if (num == 0)

//             c++;

//     }

//     printf("%d", c);

//     return 0;

// }

// 백준 1546
// #include <stdio.h>
// int main(){
//     int n=0;
//     int score[1000]={0,};
//     float max=0;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&score[i]);
//         if(max<score[i]){
//             max=score[i];
//         }
//     }
//     double sum=0;
//     for(int i=0;i<n;i++){
//         sum+=score[i]/max*100;
//     }
//     printf("%lf",sum/n); 
// }

// 백준 8958
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int n=0;
//     scanf("%d",&n);
//     char ox[80];
    
//     for(int i=0;i<n;i++){
//         int cnt=0,score=0;
//         gets(ox);
//         for(int j=0;j<strlen(ox);j++){
//             if(ox[i]=='O'){
//                 cnt++;
//                 score+=cnt;
//             }
//             else cnt=0;
//         }
//         printf("%d",score);
//     }
// }

// 백준4344
// #include <stdio.h>
// #include <string.h>
// int main() {
// 	int c = 0, t = 0;
// 	scanf("%d", &t);
// 	for (int i = 0; i < t; i++) {
// 		int a[1000] = { 0, };
// 		int sum = 0, cnt = 0;
// 		scanf("%d", &c);
// 		for (int j = 0; j < c; j++) {
// 			scanf("%d", &a[j]);
// 			sum += a[j];
// 		}
// 		for (int j = 0; j < c; j++) {
// 			if (a[j] > (float)sum / c) cnt++;
// 		}
// 		printf("%.3f%%\n", (float)cnt / c * 100);
// 	}
// 	return 0;
// }

//계산기

// #include <stdio.h>
// void printMenu() {
// 	printf("========================================");
// 	printf("MENU");
// 	printf("========================================\n");
// 	printf("1.덧셈\n2.뺄셈\n3.곱셈\n4.나눗셈\n5.나머지\n");
// 	printf("원하는 메뉴를 선택하시오(1-5):");
// }

// int add(int x, int y) {
// 	return x + y;
// }
// int sub(int x, int y) {
// 	return x - y;
// }
// int mul(int x, int y) {
// 	return x * y;
// }
// int div(int x, int y) {
// 	return x / y;
// }
// int remain(int x, int y) {
// 	return x % y;
// }
// void calculate() {
// 	int num = 0;
// 	int result = 0;
// 	printMenu();
// 	scanf("%d", &num);
// 	int a = 0, b = 0;
// 	printf("숫자 2개 입력하시오: ");
// 	scanf("%d %d", &a, &b);
// 	switch (num) {
// 	case 1:
// 		result = add(a, b);
// 		break;
// 	case 2:
// 		result = sub(a, b);
// 		break;
// 	case 3:
// 		result = mul(a, b);
// 		break;
// 	case 4:
// 		result = div(a, b);
// 		break;
// 	case 5:
// 		result = remain(a, b);
// 		break;
// 	}
// 	printf("완산 결과: %d\n", result);
// 	char ch;
// 	printf("계속하려면 y를 누르시오: ");
// 	ch = getchar();
// 	ch = getchar();
// 	if (ch == 'y') calculate();
// 	else return 0;
// }
// int main() {
// 	calculate();
// 	return 0;
// }

// 백준 10870
// #include <stdio.h>
// int fino(int n){
//     if(n==0) return 0;
//     else if(n==1||n==2) return 1;
//     return fino(n-1)+fino(n-2);
// }
// int main(){
//     int n=0;
//     scanf("%d",&n);
//     printf("%d",fino(n));
//     return 0;
// }


//백준 10872
// #include <stdio.h>

// int fac(int n){
//     if(n<1) return 1;
//     return n*fac(n-1);
// }

// int main(){
//     int n=0;
//     scanf("%d",&n);
//     printf("%d",fac(n));
// }

//백준 11729
// #include <stdio.h>
// void hanoi(int n, int start,int goal,int tmp) {
// 	if (n == 1) printf("%d %d\n", start, goal);
// 	else {
// 		hanoi(n - 1, start, tmp, goal);
// 		printf("%d %d\n", start, goal);
// 		hanoi(n - 1, tmp, goal, start);
// 	}
// }
// int power(int n, int m) {
// 	if (m == 0) return 1;
// 	return n * power(n, m - 1);
// }
// int main() {
// 	int n;
// 	scanf("%d", &n);
// 	printf("%d\n", power(2, n) - 1);
// 	hanoi(n, 1, 3, 2);
// 	return 0;
// }

//백준 15969
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
// 	int n = 0;
// 	scanf("%d", &n);
// 	int* arr = (int*)malloc(sizeof(int) * n);
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", &arr[i]);
// 	}
// 	int max = 0, min = arr[0];
// 	for (int i = 0; i < n; i++) {
// 		if (max < arr[i]) max = arr[i];
// 		if (min > arr[i]) min = arr[i];
// 	}
// 	printf("%d", max - min);
// }

// 백준 17608
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
// 	int n, max = 0, total = 0;
// 	scanf("%d", &n);
// 	int* stick = (int*)malloc(sizeof(int*) * n);
// 	for (int i = 0; i < n; i++) scanf("%d", &stick[i]);
// 	for (int i = n - 1; i >= 0; i--) {
// 		if (max < stick[i]) {
// 			max = stick[i];
// 			total += 1;
// 		}
// 	}
// 	printf("%d", total);
// 	return 0;
// }

//백준 14696
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void) {
// 	int n = 0;
// 	scanf("%d", &n);
// 	for (int i = 0; i < n; i++) {
// 		int A[5] = { 0, };
// 		int B[5] = { 0, };
// 		int a_cnt = 0, b_cnt = 0;
// 		char winner = 'D';
// 		scanf("%d",&a_cnt);
// 		int x = 0;
// 		for (int j = 0; j < a_cnt; j++) {
// 			scanf("%d", &x); // 4 -> index로 활용
// 			A[x]++;
// 		}
// 		scanf("%d", &b_cnt);
// 		for (int j = 0; j < b_cnt; j++) {
// 			scanf("%d", &x); // 4 -> index로 활용
// 			B[x]++;
// 		}
// 		for (int j = 4; j >= 0; j--) {
// 			if (A[j] > B[j]) {
// 				winner='A';
// 				break;
// 			}
// 			else if (B[j] > A[j]) {
// 				winner='B';
// 				break;
// 			}
// 		}
// 		printf("%c\n", winner);
// 	}
// 	return 0;
// }

//구조체
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct {
// 	char name[20];
// 	int kor,eng,math;
// 	int total;
// }Person;
// int main() {
// 	Person p[3];
// 	for (int i = 0; i < 3; i++) {
// 		scanf("%s %d %d %d", &p[i].name, &p[i].kor, &p[i].eng, &p[i].math);
// 		p[i].total = p[i].kor + p[i].eng + p[i].math;
// 	}
// 	for (int i = 0; i < 3; i++) {
// 		for (int j = i+1; j < 3; j++) {
// 			if (p[i].total < p[j].total) {
// 				Person temp = p[i];
// 				p[i] = p[j];
// 				p[j] = p[i];
// 			}
// 		}
// 	}
// 	for (int i = 0; i < 3; i++) {
// 		printf("%s %d %d %d\n", p[i].name, p[i].kor, p[i].eng, p[i].math);
// 	}
// 	return 0;
// }

// typedef struct money_box {
// 	int w500; //500백원 동전 수 저장
// 	int w100; //ㅂ00백원 동전 수 저장
// 	int w50; //50백원 동전 수 저장
// 	int w10; //10백원 동전 수 저장
// }MoneyBox;

// void init(MoneyBox* s); //MoneyBox 변수 초기화
// void save(MoneyBox* s, int unit, int cnt); //unit 동전을 cnt개 저금
// void total(MoneyBox* s); //저금통의 총 저축액 반환

// int main() {
// 	int unit, cnt, res = 0;
// 	MoneyBox mb;
// 	init(&mb);
// 	while (1) {
// 		printf("동전의 금액과 개수: ");
// 		scanf("%d", &unit);
// 		if (unit <= 0) break;
// 		else {
// 			scanf("%d", &cnt);
// 			save(&mb, unit, cnt);
// 		}
// 	}
// 	res = total(&mb);
// 	printf("총 저금액 : %d원", res);
// }

// void init(MoneyBox* s) {
// 	s-> w500 = 0;
// 	s-> w100 = 0;
// 	s-> w50 = 0;
// 	s-> w10 = 0;
// }
// void save(MoneyBox* s, int unit, int cnt) {
// 	switch (unit) {
// 	case 500:
// 		s->w500 += unit * cnt;
// 		break;
// 	case 100:
// 		s->w100 += unit * cnt;
// 		break;
// 	case 50:
// 		s->w50 += unit * cnt;
// 		break;
// 	case 10:
// 		s->w10 += unit * cnt;
// 		break;
// 	default:
// 		break;
// 	}
// }
// void total(MoneyBox* s) {
// 	return s->w10 + s->w100 + s->w50 + s->w500;
// }

//좌석예약하기

#include <stdio.h>
#include <stdlib.h>
#define Col 6
#define Row 6
#define TOTAL_NUM Col*Row // 전체 좌석수

//좌석 현황
void PrintCheck(int arr[][Col]);
//좌석 예약
void CheckSeat(int arr[][Col]);
//좌석 변경
void ChangeCheck(int arr[][Col]);
//예약 취소
void CancelCheck(int arr[][Col]);
//메뉴 화면

int check = 0;// 예약 좌석 수
int SelectMenu() {
	int key = 0;
	printf("1.좌석 예약\n");
	printf("2.좌석 취소\n");
	printf("3.좌석 변경\n");
	printf("4.좌석 현황\n");
	printf("5.종료\n");
	scanf("%d", &key);
	return key;
}


int main() {

	int seat[Row][Col] = { 0, };
	int key = 0;
	while ((key = SelectMenu()) != 5) {
		switch (key) {
		case 1:
			PrintCheck(seat);
			CheckSeat(seat);
			break;
		case 2:
			PrintCheck(seat);
			CancelCheck(seat);
			break;
		case 3:
			PrintCheck(seat);
			CancelCheck(seat);
			break;
		case 4:
			PrintCheck(seat);
			break;
		default:
			break;
		}
	}
	printf("프로그램을 종료하겠습니다.");
	return 0;
}

void PrintCheck(int arr[][Col]) {
	printf("=======================무대=======================\n");
	for (int i = 1; i <= Row; i++) {
		printf("\t%d열", i);
	}
	printf("\n=======================무대=======================\n");
	for (int i = 0; i < Col; i++) {
		printf("%c행\t", i + 65);
		for (int j = 0; j < Row; j++) {
			if (arr[i][j] == 0) printf("□\t");
			else printf("■\t");
			
		}
		printf("\n");
	}
	printf("전체 좌석 수: %d\n", TOTAL_NUM);
	printf("예약 좌석 수: %d\n", check);
	printf("잔여 좌석 수: %d\n", TOTAL_NUM - check);
}
//좌석 예약
void CheckSeat(int arr[][Col]) {
	char nRow;
	int nCol;
	printf("예약할 좌석을 입력하세요 (ex. A1) : ");
	//1.데이터 입력받기
	scanf("%c", &nRow);
	scanf("%c%d", &nRow, &nCol);
	//2.좌석이 이미 있는 경우 -> 이미 예약된 좌석입니다. -> return
	if (arr[nRow-65][nCol-1] == 1) {
		printf("이미 예약된 좌석입니다.\n");
		return;
	}
	//3.범위를 벗어난 경우 -> 잘못된 번호를 입력하셨습니다. -> return
	if (nRow<'A' || nRow>Row + 'A' || nCol<1 || nCol>Col) {
		printf("잘못된 번호를 입력하셨습니다.");
		return;
	}

	arr[nRow-65][nCol-1] = 1;
	check++;
	printf("%c%d좌석 예약이 완료 되었습니다.\n", nRow, nCol);
}

void ChangeCheck(int arr[][Col]) {
	char nRow;
	int nCol;
	printf("예약하신 좌석을 입력하세요(ex. A1): ");
	scanf("%c", &nRow);
	scanf("%c%d", &nRow, &nCol);
	//1.입력받은 행과 열이 범위에 속하는지 check
	if (nRow < 'A' || nRow>'A' + Row || nCol <1 || nCol>Col) {
		printf("잘못된 번호를 입력하셨습니다.\n");
		return;
	}
	//2.입력받은 행과 열이 예약이 되어있는지 check
	if (arr[nRow - 65][nCol - 1] == 0) {
		printf("예약이 되어있지 않는 좌석입니다.\n");
		return;
	}
	//3.기존 예약 좌석은 초기화 -> 행과 열을 입력받아 새로운 자리로 변경 ->좌석예약함수
	arr[nRow - 65][nCol - 1] = 0;
	check--;
	CheckSeat(arr);
}

//예약 취소
void CancelCheck(int arr[][Col]) {
	char nRow;
	int nCol;
	printf("예약을 취소할 좌석을 입력하세요.(ex. A1) : ");
	scanf("%c", &nRow);
	scanf("%c%d", &nRow, &nCol);
	if (nRow < 'A' || nRow >'A' + Row || nCol<1 || nCol>Col) {
		printf("잘못된 번호를 입력하셨습니다.\n");
		return;
	}
	if (arr[nRow - 65][nCol - 1] == 0) {
		printf("예약되지 않은 좌석입니다.\n");
		return;
	}
	arr[nRow - 65][nCol - 1] = 0;
	check--;
	printf("%c%d좌석 예약이 취소 되었습니다.\n",nRow,nCol);
}

#include <stdio.h>
#include <stdlib.h>

//#define FALSE 0
//#define TRUE 1
//
//typedef struct _node Node;
//
//struct _node {    /*노드 구조체(자기참조 구조체 사용*/
//    int data;     /*데이터 영역 : int형 데이터 저장*/
//    Node* next;   /*포인터 영역*/
//};
//
//typedef struct {  /*연결 리스트 관리 구조체*/
//    Node* head;   /*head pointer (head node 가리킴*/
//    Node* tail;   /*tail pointer (tail node 가리킴)*/
//    int size;     /*연결 리스트의 크기 - 실제 data node의 개수*/
//}List;
//
//void createList(List* lp);            /*연결 리스트 초기화*/
//
//void addFirst(List* lp, int data);    /*head node 뒤에 node 추가*/
//
//void addLast(List* lp, int data);     /*tail node 앞에 node 추가*/
//
//void printList(List* lp);             /*리스트 내의 모든 데이터 출력*/
//
//Node* searchNode(List* lp, int data); /*data와 일치하는 node 검색*/
//
//void removeNode(List* lp, int data);  /*data 노드 삭제*/
//
//void destoryList(List* lp);           /*리스트 내의 모든 노드 삭제*/
//
//
//int selectMenu()
//{
//    printf("==========================\n");
//    printf("1.머리에 노드를 삽입\n");
//    printf("2.꼬리에 노드를 삽입\n");
//    printf("3.검색하기\n");
//    printf("4.삭제하기\n");
//    printf("5.출력하기\n");
//    printf("0.종료\n");
//
//    int menu;
//    printf("메뉴 선택 : ");
//    scanf("%d", &menu);
//    return menu;
//}
//
//
//int main()
//{
//    List list;
//    int menu, data;
//    createList(&list);
//    while ((menu = selectMenu()) != 0)
//    {
//        switch (menu)
//        {
//        case 1:
//            printf("머리에 데이터 삽입 : ");
//            scanf("%d", &data);
//            addFirst(&list, data);
//            break;
//        case 2:
//            printf("꼬리에 데이터 삽입 : ");
//            scanf("%d", &data);
//            addLast(&list, data);
//            break;
//        case 3:
//            printf("데이터 검색 : ");
//            scanf("%d", &data);
//            if (searchNode(&list, data))
//                printf("검색 데이터가 존재합니다.\n");
//            else
//                printf("검색 데이터가 존재하지 않습니다.\n");
//            break;
//        case 4:
//            printf("데이터 삭제 : ");
//            scanf("%d", &data);
//            removeNode(&list, data);
//            break;
//        case 5:
//            printf("데이터 출력 : ");
//            printList(&list);
//            break;
//        }
//    }
//    printf("프로그램 종료\n");
//    destoryList(&list);
//    return 0;
//}
//
///*연결 리스트 초기화*/
//void createList(List* lp) {
//
//    lp->head = (Node*)malloc(sizeof(Node));  /*head node 생성*/
//    lp->tail = (Node*)malloc(sizeof(Node));  /*tail node 생성*/
//    lp->head->next = lp->tail; /*head node와 tail node 연결*/
//    lp->tail->next = lp->tail; /*tail node의 next는 자기 자신을 가리키도록 설정*/
//    lp->size = 0; /*연결 리스트 크기(size 멤버) 0으로 초기화*/
//}
//
///*head node 뒤에 node 추가*/
//void addFirst(List* lp, int data) {
//    if (lp == NULL)
//        return;
//    Node* newp = (Node*)malloc(sizeof(Node));  /*새 노드 생성*/
//    newp->data = data;           /*새 노드에 data 저장*/
//    newp->next = lp->head->next; /*새 노드의 next 설정*/
//    lp->head->next = newp;       /*head node 뒤에 새 노드 연결*/
//    lp->size++;                  /*리스트 size 증가*/
//}
//
///*tail node 앞에 node 추가*/
//void addLast(List* lp, int data) {
//    if (lp == NULL)
//        return;
//    Node* newp = (Node*)malloc(sizeof(Node)); /*새 노드 생성*/
//    newp->data = data;           /*새 노드에 data 저장*/
//    newp->next = lp->tail;       /*새 노드의 next 설정*/
//
//    /*tail node의 앞 노드 검색*/
//    Node* btp = lp->head;
//    while (btp->next != lp->tail) {
//        btp = btp->next;
//    }
//    btp->next = newp;            /*tail node 앞에 새 노드 연결*/
//    lp->size++;                  /*리스트 size 증가*/
//}
//
///*리스트 내의 모든 데이터 출력*/
//void printList(List* lp) {
//    if (lp == NULL)
//        return;
//    /*data가 있는 첫 노드를 current로 가리키게 함*/
//    Node* current = lp->head->next;
//    /*리스트의 마지막 노드까지 current를 옮기면서 data 출력하기*/
//    while (current != lp->tail) {
//        printf("%d ", current->data);
//        current = current->next;
//    }
//    printf("\n");
//}
//
////data와 일치하는 node 검색
//Node* searchNode(List* lp, int data) {
//	if (lp == NULL) return NULL;
//	//data 있는 첫 노드를 current 가리키게 함
//	Node* current = lp->head->next;
//	while (current != lp->tail) {
//		if (current->data == data) {
//			return current;
//			current = current->next;
//		}
//	}
//	return NULL;
//}
//
////data 노드 삭제
//void removeNode(List* lp, int data) {
//	if (lp==NULL) return;
//
//	//삭제할 node를 검색함, - searchNode
//	Node* deleteP = searchNode(lp, data);
//	if (deleteP != NULL) {
//		//삭제할 노드의 바로 앞 노드를 찾음
//		Node* current = lp->head;
//		while (current->next != deleteP) current = current->next;
//
//		//삭제할 노드의 앞 노드와 삭제할 노드의 뒤 노드를 연결
//		current->next = deleteP->next;
//		free(deleteP);
//		lp->size--;
//		printf("데이터 삭제 성공\n");
//	}
//	else
//		printf("데이터를 찾지 못했습니다.\n");
//}
//
////리스트 내의 모든 노드 삭제
//void destoryList(List* lp) {
//    if (lp == NULL) return;
//
//    //data 있는 첫 노드를 current로 가리키게 한다
//    Node* current = lp->head->next;
//    Node* tempP;
//
//    //리스트의 마지막 데이터 노드 까지 current를 옮기면서 삭제하기
//    while (current != lp->tail) {
//        tempP = current->next;
//        free(current);
//        current = tempP;
//    }
//    free(lp->head);
//    free(lp->tail);
//    lp->head = lp->tail = NULL;
//    lp->size = 0;
//    printf("모든 노드를 삭제하였습니다.\n");
//}

//-----------------------------------------------


//typedef struct stack {
//	int* stack; //stack으로 사용되는 동적할당 배열을 가리키는 포인터 변수
//	int size; //스택의 크기(size)
//	int top; //스택의 입출구 위치 정보 저장
//}Stack;
//
//void createStack(Stack* sp, int n); //스택 메모리 할당 및 멤버 초기화
//int isStackFull(Stack* sp); //스택이 꽉 차있는지 검사
//int isStackEmpty(Stack* sp); // 스택이 완전히 비어있는지 검사
//int push(Stack* sp, int data); // 스택에 데이터 저장하는 함수
//int pop(Stack* sp);// 스택에서 데이터를 꺼내는 함수
//void printStack(Stack* sp); // 스택 내의 모든 데이터 출력함수
//void destroyStack(Stack* sp);//스택 메모리 해제 함수
//
//int main() {
//	Stack stk;
//	createStack(&stk, 5);
//	int menu,data;
//	while (1) {
//		printf("(1)푸시 (2)팝 (3)출력 (0)종료");
//		scanf("%d", &menu);
//		if (menu == 0) break;
//		switch (menu) {
//		case 1:
//			printf("추가할 숫자 입력: ");
//			scanf("%d", &data);
//			if (push(&stk, data)) printf("PUSH 성공!\n");
//			else printf("PUSH 실패\n");
//			break;
//		case 2:
//			data=pop(&stk);
//			if (data == 0) printf("데이터가 없습니다\n");
//			else printf("pop: %d\n", data);
//			break;
//		case 3:
//			printStack(&stk);
//			break;
//		}
//	}
//	printf("프로그램을 종료합니다.");
//	destroyStack(&stk);
//	return 0;
//}
//
//void createStack(Stack* sp, int n) { //스택 메모리 할당 및 멤버 초기화
//	//stack 메모리 할당
//	sp->stack = (int*)calloc(n, sizeof(int));
//	sp->size = n;
//	sp->top = 0;
//}
//
//int isStackFull(Stack* sp){ //스택이 꽉 차있는지 검사
//	if (sp->top == sp->size) return 1;
//	return 0;
//}
//int isStackEmpty(Stack* sp) { // 스택이 완전히 비어있는지 검사
//	if (sp->top == 0) return 1;
//	return 0;
//}
//
//int push(Stack* sp, int data) { // 스택에 데이터 저장하는 함수
//	//1.NULL 체크
//	if (sp == NULL) return 0;
//	//2.꽉 차 있으면 저장 실패
//	if (isStackFull(sp)) return 0;
//	//3.top위치에 데이터 저장 후 top증가
//	else {
//		sp->stack[sp->top] = data;
//		sp->top++;
//		return 1;
//	}
//}
//
//int pop(Stack* sp) {// 스택에서 데이터를 꺼내는 함수
//	if (sp == NULL) return 0; //1.NULL check
//	if (isStackEmpty(sp)) return 0; //2.비어있는지 check
//	sp->top--; //3.top 감소
//	return sp->stack[sp->top];
//}
//
//void printStack(Stack* sp) { // 스택 내의 모든 데이터 출력함수
//	if (sp == NULL) return;
//	for (int i = sp->top--; i >= 0; i--) {
//		printf("%d ", sp->stack[i]);
//		printf("\n");
//	}
//}
//void destroyStack(Stack* sp){//스택 메모리 해제 함수
//	if (sp == NULL) return;
//	free(sp->stack);
//	sp->stack = NULL;
//	sp->top = 0;
//	sp->size = 0;
//}

//백준 9012

int main() {
	int n; scanf("%d", &n); //테스트 케이스 수
	char str[50];
	int stack[50]; //'(' => 1 push
	for (int i = 0; i < n; i++) {
		scanf("%s", str);
		memset(stack, 0, sizeof(stack));
		int top = 0;
		int chk = 0;
		for (int j = 0; str[j] != NULL; j++) {
			if (str[j] == '(') stack[top++] = 1;
			else {
				if (top == 0) {
					chk == 1;
					break;
				}
				else {
					stack[--top] = 0;
				}
			}
		}

		if (chk == 1 || top != 0) printf("NO\n");
		else printf("YES\n");
	}
	
}

//백준 2164
int main() {
	int n; scanf("%d", &n); //4
	int front = 0, rear = 0;
	int* queue = (int*)calloc(n, sizeof(int));//queue 만들기
	for (int i = 0; i < n; i++) {
		queue[rear] = i + 1;
		rear = (rear + 1) % n;
	}//1 2 3 4
	int size = n;
	while (size > 1) {//카드가 한장 남을 때까지 반복한다
		//dequeue
		front = (front + 1) % n;
		size--;
		//맨윗장 버리고 맨 아래에 다시 추가
		int x = queue[front];
		front = (front + 1) % n;//버림
		queue[rear] = x; //추가
		rear = (rear + 1) % n;
	}
	printf("%d", queue[front]);
	return 0;
}