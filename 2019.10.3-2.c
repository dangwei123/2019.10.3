/*
1.����ת�ַ���
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

2.���鿽��
 public static int[] copyOf(int[] arr,int length){
		 int[] newarr=new int[arr.length];
	 for(int i=0;i<arr.length;i++){
		 newarr[i]=arr[i];
	 }
	 return newarr;
	 }

3.�����������Ԫ��

public static int max(int[] arr){
		 int max=arr[0];
		 for(int i=1;i<arr.length;i++){
			 if(arr[i]>max){
				 max=arr[i];
			 }
		 }
		 return max;
	 }

4.������Ԫ�ص�ƽ��ֵ

public static double avg(int[] arr){
		 double sum=0;
		 for(int i=0;i<arr.length;i++){
		     sum+=arr[i];
		 }
		 double avg=sum/arr.length;
		 return avg;
	 }

5.˳�����

 public static int find(int[] arr,int toFind){
		 for(int i=0;i<arr.length;i++){
			 if(arr[i]==toFind){
				 return i;//�ҵ������±�
			 }
		 }
		 return -1;//��ʾû�ҵ�
	 }

6.���ֲ���

public static int binarySearch(int[] arr,int toFind){
		 int left=0;
		 int right=arr.length-1;
		 int mid=0;
		 while(left<=right){
			 mid=(left+right)/2;
			 if(arr[mid]>toFind){//��ʾҪ�ҵ��Ǹ�������arr[mid]����ߣ���arr[mid]С
				 right=mid-1;
			 }else if(arr[mid]<toFind){//��ʾҪ�ҵ��Ǹ�������arr[mid]���ұߣ���arr[mid]��
				 left=mid+1;
			 }else{//�ҵ���
				 return mid;
			 }
		 }
		 return -1;//û�ҵ�
	 }
*/