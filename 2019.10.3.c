/*
1.递归求 N 的阶乘
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.printf("请输入要求的数的阶乘：");
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

2.递归求 1 + 2 + 3 + … + 10
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


3.实现代码:求斐波那契数列的第 N 项
//递归
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.printf("请输入要求的斐波那契数列的项数：");
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
//非递归
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.printf("请输入要求的斐波那契数列的项数：");
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


4. 写一个递归方法，输入一个非负整数，返回组成它的数字之和.
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.printf("请输入一个非负整数：");
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


5.按顺序打印一个数字的每一位(例如 1234 打印出 1 2 3 4)
import java.util.Scanner;
class Test{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.printf("请输入一个数字：");
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


6.实现代码: 求解汉诺塔问题(提示, 使用递归)
class Test{
public static void main(String[] args){
hanNuoTa('A','B','C',3);
}
//先写一个打印移动路径的方法
public static void print(char poss1,char poss2){
System.out.printf("%c->%c%n ",poss1,poss2);
}
//用递归来写汉诺塔
public static void hanNuoTa(char poss1,char poss2,char poss3,int n){
//终止条件：如果在poss1上就只有一个，那就直接把poss1移到poss2上
if(n==1){
print(poss1,poss3);
}else{
//如果有n个，则只需要借助poss3将n-1个从poss1移到poss2上，
//然后将poss1上的那一个移到poss3上，
//最后将剩下的n-1个从poss2上借助poss1移到poss3上就ok了
hanNuoTa(poss1, poss3, poss2, n - 1);
print(poss1, poss3);
hanNuoTa(poss2, poss1, poss3, n - 1);
		 }
	 }
 }

7.实现代码: 青蛙跳台阶问题(提示, 使用递归)
一只青蛙一次可以跳上 1 级台阶，也可以跳上2 级。求该青蛙跳上一个n 级的台阶总共有多少种跳法
import java.util.Scanner;
class Test{
public static void main(String[] args){
int ret=fun(4);
System.out.println(ret);
}
public static int fun(int n){
if(n==1){//如果只有1个台阶，那就只有一种
return 1;
}if(n==2){//如果有2个台阶，那就有2种：1+1    2
return 2;
}else{//如果有n种，只需要知道n-1和n-2各有多少种
return fun(n-1)+fun(n-2);
}

}

}

*/