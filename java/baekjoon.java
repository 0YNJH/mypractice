import java.util.*;
//백준 10818
// public class java {
//     public static Scanner sc=new Scanner(System.in);
//     public static void main(String[] args){
//         int n=0;
//         int max=0;
//         int min=0;
//         int[] a= new int[1000001];
//         n=sc.nextInt();
//         for(int i=0;i<n;i++){
//             a[i]=sc.nextInt();
//             min=a[0];
//             max=a[0];   
//         }
//         for(int i=0;i<n;i++){
//             if(min>a[i]) min=a[i];
//             else if(a[i]>max) max=a[i];
//         }
//         System.out.print(min+" "+max);
//     }
// }

//백준 5597
// public class baekjoon{
//     public static Scanner sc=new Scanner(System.in);
//     public static void main(String[] args){
//         int[] a=new int[31];
//         int[] s=new int[31];
//         for(int i=1;i<=30;i++){
//             a[i]=i;
//         }
//         for(int i=0;i<28;i++){
//             s[i]=sc.nextInt();
//             a[s[i]]=0;
//         }
//         for(int i=1;i<=30;i++){
//             if(a[i]!=0) System.out.println(i);
//         }
//     }
// }

//백준 3052
// public class baekjoon{
//     public static Scanner sc=new Scanner(System.in);
//     public static void main(String[] args){
//         int[] a=new int[10];
//         for (int i=0;i<10;i++){
//             a[i]=sc.nextInt();
//             a[i]%=42;
//         }
//         int cnt=0;
//         for(int i=0;i<10;i++){
//             int num=0;
//             for(int j=i+1;j<10;j++){
//                 if(a[j]==a[i]) num++;
//             }
//             if(num==0) cnt++;
//         }
//         System.out.print(cnt);
//     }
// }

//백준 1546
// public class baekjoon{
//     public static Scanner sc=new Scanner(System.in);
//     public static void main(String[] args){
//         int[] score=new int[1001];
//         int n=0;
//         double sum=0;
//         n=sc.nextInt();
//         float max=0;
//         for(int i=0;i<n;i++){
//             score[i]=sc.nextInt();
//             if(max<score[i]) max=score[i];
//         }
//         for(int i=0;i<n;i++){
//             sum+=score[i]/max*100;
//         }
//         System.out.print(sum/n);
//     }
// }

//백준 8958
// public class baekjoon{
//     public static Scanner sc=new Scanner(System.in);
//     public static void main(String[] args){
//     	int array =sc.nextInt();
//         String str;
//         for(int i=0;i<array;i++){
//         	str=sc.next();
//         	int cnt=0;
//         	int sum=0;
//         	for(int j=0;j<str.length();j++) {
//         	if(str.charAt(j)=='O') {
//         		cnt++;
//         		sum+=cnt;
//         	}
//         	else {cnt=0;}
//         	}
//         	System.out.println(sum);
//         	}
        	
//         }
        
        
// }

//백준 4344
// public class baekjoon{
//     public static Scanner sc=new Scanner(System.in);
//     public static void main(String[] args){
//     	int t=sc.nextInt();
//     	for(int i=0;i<t;i++) {
//     		int[] a=new int[1000];
//     		Arrays.fill(a, 0);
//     		int sum=0;
//     		float cnt=0;
//     		int c=sc.nextInt();
//     		for(int j=0;j<c;j++) {
//     			a[j]=sc.nextInt();
//     			sum+=a[j];
//     		}
//     		for(int k=0;k<c;k++) {
//     			if(a[k]>(float)sum/c) { cnt++;}
//     		}
//     		System.out.printf("%.3f%%\n",(float)(cnt/c)*100);
//     	}
//     }  
// }

// public class baekjoon {
// 	//클래스의 구성요소
// 	// 1) 변수, 멤버, 속성,,
// 	// 2) 메서드, 기능, 함수,,,
	
	
// 	//컴퓨터를 생산하기 위한 설계도 개념
// 	private String company="apple";
// 	int ssd=256;
// 	int ram=8;
// 	float cpu=2.0f;
// 	// 메서드는 어던 작업을 수행하기 위한 명령문들의 집합
// 	// 반복적으로 사용되는 코드나, 너무 긴 코드 등을 정의해 두고
// 	// 필요할 때 가져다가 씀으로써 재활용성이 높아진다는 장점이 있다.
// 	public void info() {
// 		System.out.println("제조사: "+ company);
// 		System.out.println("ssd: "+ ssd+"GB");
// 		System.out.println("ram: "+ ram+"GB");
// 		System.out.println("cpu: "+ cpu+"GHz");
// 		System.out.println("====================");
// 	}//info
	
// 	//접근제한자  반환형  메서드명(첫글자를 반드시 소문자)(괄호 안에 파라미터,인자,매개변수, 아규먼츠 넣음) 
// 	//public   void   info()  { 메서드가 호출됐을 때 실행되는 영역}
	
// 	//접근제한자의 종류
// 	//1) public : 같은 프로젝트의 모든 클래스에서 사용을 허가
// 	//2) private: 현재 클래스에서만 사용을 허가
// 	//3) protected: 상속관계의 클래스에게만 사용을허가
// 	//4) default: 같은 패키지의 클래스에서만 사용을 허가
// }