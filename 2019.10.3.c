/*
1.�ݹ��� N �Ľ׳�
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.printf("������Ҫ������Ľ׳ˣ�");
int num=sc.nextInt();
int ret=fun(num);
System.out.println(ret);
sc.close();
}
public static int fun(int n){
if(n==0){
return 1;
}else{
return n*fun(n-1);
}
}

}

2.�ݹ��� 1 + 2 + 3 + �� + 10
class Test{
public static void main(String[] args){
int sum=fun(10);
System.out.println(sum);
}
public static int fun(int n){
if(n==1){
return 1;
}else{
return n+fun(n-1);
}
}

}


3.ʵ�ִ���:��쳲��������еĵ� N ��
//�ݹ�
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.printf("������Ҫ���쳲��������е�������");
int N=sc.nextInt();
int ret=feiBoQiNa(N);
System.out.println(ret);
}
public static int feiBoQiNa(int n){
if(n==1||n==2){
return 1;
}else{
return feiBoQiNa(n-2)+feiBoQiNa(n-1);
}
}

}
//�ǵݹ�
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.printf("������Ҫ���쳲��������е�������");
int N=sc.nextInt();
int ret=feiBoQiNa(N);
System.out.println(ret);
}
public static int feiBoQiNa(int n){
int f1=1;
int f2=1;
int f3=0;
if(n==1||n==2){
f3=1;
}else{
for(int i=3;i<=n;i++){
f3=f1+f2;
f1=f2;
f2=f3;
}
}
return f3;
}

}


4. дһ���ݹ鷽��������һ���Ǹ����������������������֮��.
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.printf("������һ���Ǹ�������");
int N=sc.nextInt();
int ret=funSum(N);
System.out.println(ret);
}
public static int funSum(int n){
if(n>9){
return n%10+funSum(n/10);
}else{
return n;
}
}
}


5.��˳���ӡһ�����ֵ�ÿһλ(���� 1234 ��ӡ�� 1 2 3 4)
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.printf("������һ�����֣�");
int N=sc.nextInt();
print(N);
}
public static void print(int n){
if(n>9){
print(n/10);
}
System.out.printf("%d ",n%10);
}
}


6.ʵ�ִ���: ��⺺ŵ������(��ʾ, ʹ�õݹ�)
class Test{
public static void main(String[] args){
hanNuoTa('A','B','C',3);
}
//��дһ����ӡ�ƶ�·���ķ���
public static void print(char poss1,char poss2){
System.out.printf("%c->%c%n ",poss1,poss2);
}
//�õݹ���д��ŵ��
public static void hanNuoTa(char poss1,char poss2,char poss3,int n){
//��ֹ�����������poss1�Ͼ�ֻ��һ�����Ǿ�ֱ�Ӱ�poss1�Ƶ�poss2��
if(n==1){
print(poss1,poss3);
}else{
//�����n������ֻ��Ҫ����poss3��n-1����poss1�Ƶ�poss2�ϣ�
//Ȼ��poss1�ϵ���һ���Ƶ�poss3�ϣ�
//���ʣ�µ�n-1����poss2�Ͻ���poss1�Ƶ�poss3�Ͼ�ok��
hanNuoTa(poss1, poss3, poss2, n - 1);
print(poss1, poss3);
hanNuoTa(poss2, poss1, poss3, n - 1);
		 }
	 }
 }

7.ʵ�ִ���: ������̨������(��ʾ, ʹ�õݹ�)
һֻ����һ�ο������� 1 ��̨�ף�Ҳ��������2 ���������������һ��n ����̨���ܹ��ж���������
import java.util.Scanner;
class Test{
public static void main(String[] args){
int ret=fun(4);
System.out.println(ret);
}
public static int fun(int n){
if(n==1){//���ֻ��1��̨�ף��Ǿ�ֻ��һ��
return 1;
}if(n==2){//�����2��̨�ף��Ǿ���2�֣�1+1    2
return 2;
}else{//�����n�֣�ֻ��Ҫ֪��n-1��n-2���ж�����
return fun(n-1)+fun(n-2);
}

}

}

*/