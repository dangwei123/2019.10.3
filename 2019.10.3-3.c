/*
1.ð������

for(int i=0;i<arr.length;i++){
			 //[0,i)���ź����
			 for(int j=arr.length-1;j>i;j--){
				 //[i,arr.length)��δ�ź����
				 if(arr[j-1]>arr[j]){
					 int tmp=arr[j-1];
					 arr[j-1]=arr[j];
					 arr[j]=tmp;
				 }
			 }
		 }

2.��������Ƿ��������У�����

public static boolean isSorted(int[] arr){
		 for(int i=0;i<arr.length-1;i++){
			 if(arr[i]>arr[i+1]{
				 return false;//�����һ��Ԫ�ر�����ߵ�Ԫ�ش��ǾͲ����������е�
			 }
		 }
		 return true;//���������е�
	 }

3.��������

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

4.����һ����������, �����е�ż������ǰ�벿��, �����е��������������벿��
����
{1, 2, 3, 4}
������õ�
{4, 2, 3, 1}

 public static int[] transform(int[] arr){
		 int left=0;
		 int right=arr.length-1;
		 while(left<right){
			 while(left%2==0){//�����������˳�while
				 left++;
			 }
			 while(right%2!=0){//����ż���˳�while
				 right--;
			 }
			 if(left<right){//�ñ�֤left��right�����
				 int tmp=arr[left];
				 arr[left]=arr[right];
				 arr[right]=tmp;
			 }
		 }
		 return arr;
	 }

5.��һ�������е�Ԫ��ȫ������b��λ�á�
����: {1,2,3,4,5}
����3��λ {3,4,5,1,2}

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
