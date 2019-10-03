/*
1.数组转字符串
import java.util.Arrays;
class Test{
public static void main(String[] args){
int[] array={1,2,3,4,5,6};
String arr=toString(array);
System.out.println(arr);
}
public static String toString(int[] array){
String newarr="[";
for(int i=0;i<array.length;i++){
newarr+=array[i];
if(i<array.length-1){
newarr+=",";
}
}
newarr+="]";
return newarr;
}
}

2.数组拷贝
 public static int[] copyOf(int[] arr,int length){
		 int[] newarr=new int[arr.length];
	 for(int i=0;i<arr.length;i++){
		 newarr[i]=arr[i];
	 }
	 return newarr;
	 }

3.数组中找最大元素

public static int max(int[] arr){
		 int max=arr[0];
		 for(int i=1;i<arr.length;i++){
			 if(arr[i]>max){
				 max=arr[i];
			 }
		 }
		 return max;
	 }

4.数组中元素的平均值

public static double avg(int[] arr){
		 double sum=0;
		 for(int i=0;i<arr.length;i++){
		     sum+=arr[i];
		 }
		 double avg=sum/arr.length;
		 return avg;
	 }

5.顺序查找

 public static int find(int[] arr,int toFind){
		 for(int i=0;i<arr.length;i++){
			 if(arr[i]==toFind){
				 return i;//找到返回下标
			 }
		 }
		 return -1;//表示没找到
	 }

6.二分查找

public static int binarySearch(int[] arr,int toFind){
		 int left=0;
		 int right=arr.length-1;
		 int mid=0;
		 while(left<=right){
			 mid=(left+right)/2;
			 if(arr[mid]>toFind){//表示要找的那个数字在arr[mid]的左边，比arr[mid]小
				 right=mid-1;
			 }else if(arr[mid]<toFind){//表示要找的那个数字在arr[mid]的右边，比arr[mid]大
				 left=mid+1;
			 }else{//找到了
				 return mid;
			 }
		 }
		 return -1;//没找到
	 }
*/