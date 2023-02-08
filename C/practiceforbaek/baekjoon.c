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