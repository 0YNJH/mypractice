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

public class baekjoon{
    public static Scanner sc=new Scanner(System.in);
    public static void main(String[] args){
        int[] a=new int[10];
        for (int i=0;i<10;i++){
            a[i]=sc.nextInt();
            a[i] %=42;
        }
        int cnt=0;
        for(int i=0;i<10;i++){
            int num=0;
            for(int j=i+1;j<1;j++){
                if(a[j]==a[i]) num++;
                if(num==0) cnt++;
            }
        }
        System.out.print(cnt);
    }
}