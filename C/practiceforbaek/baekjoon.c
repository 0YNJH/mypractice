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
#include <stdio.h>
#include <string.h>
int main() {
	int c = 0, t = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int a[1000] = { 0, };
		int sum = 0, cnt = 0;
		scanf("%d", &c);
		for (int j = 0; j < c; j++) {
			scanf("%d", &a[j]);
			sum += a[j];
		}
		for (int j = 0; j < c; j++) {
			if (a[j] > (float)sum / c) cnt++;
		}
		printf("%.3f%%\n", (float)cnt / c * 100);
	}
	return 0;
}