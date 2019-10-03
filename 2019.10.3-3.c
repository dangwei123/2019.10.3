/*
1.冒泡排序

for(int i=0;i<arr.length;i++){
			 //[0,i)是排好序的
			 for(int j=arr.length-1;j>i;j--){
				 //[i,arr.length)是未排好序的
				 if(arr[j-1]>arr[j]){
					 int tmp=arr[j-1];
					 arr[j-1]=arr[j];
					 arr[j]=tmp;
				 }
			 }
		 }

2.检查数组是否有序排列（升序）

public static boolean isSorted(int[] arr){
		 for(int i=0;i<arr.length-1;i++){
			 if(arr[i]>arr[i+1]{
				 return false;//如果有一个元素比它后边的元素大，那就不是有序排列的
			 }
		 }
		 return true;//是有序排列的
	 }

3.数组逆序

 public static int[] reverse(int[] arr){
		 int left=0;
		 int right=arr.length-1;
		 while(left<right){
			 int tmp=arr[left];
			 arr[left]=arr[right];
			 arr[right]=tmp;
			 left++;
			 right--;
		 }
		 return arr;
	 }

4.给定一个整型数组, 将所有的偶数放在前半部分, 将所有的奇数放在数组后半部分
例如
{1, 2, 3, 4}
调整后得到
{4, 2, 3, 1}

 public static int[] transform(int[] arr){
		 int left=0;
		 int right=arr.length-1;
		 while(left<right){
			 while(left%2==0){//遇到奇数就退出while
				 left++;
			 }
			 while(right%2!=0){//遇到偶数退出while
				 right--;
			 }
			 if(left<right){//得保证left在right的左边
				 int tmp=arr[left];
				 arr[left]=arr[right];
				 arr[right]=tmp;
			 }
		 }
		 return arr;
	 }

5.将一个数组中的元素全都右移b个位置。
比如: {1,2,3,4,5}
右移3个位 {3,4,5,1,2}

public static void main(String[] args){
		int [] a=new int[] {1,2,3,4,5};
		int num=2;
		int b=num%(a.length);
		int [] c=new int [a.length];
		for(int i=0;i<a.length;i++){
			c[(i+b)%5]=a[i];
		}
		String newarr=Arrays.toString(c);
		System.out.println(newarr);
		}
*/
