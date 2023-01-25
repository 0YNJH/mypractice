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
public class baekjoon{
    public static Scanner sc=new Scanner(System.in);
    public static void main(String[] args){
    	int t=sc.nextInt();
    	for(int i=0;i<t;i++) {
    		int[] a=new int[1000];
    		Arrays.fill(a, 0);
    		int sum=0;
    		float cnt=0;
    		int c=sc.nextInt();
    		for(int j=0;j<c;j++) {
    			a[j]=sc.nextInt();
    			sum+=a[j];
    		}
    		for(int k=0;k<c;k++) {
    			if(a[k]>(float)sum/c) { cnt++;}
    		}
    		System.out.printf("%.3f%%\n",(float)(cnt/c)*100);
    	}
    }  
}
