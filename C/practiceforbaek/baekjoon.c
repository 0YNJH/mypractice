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