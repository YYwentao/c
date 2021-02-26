#include<stdio.h>
#include<string.h>
//第一题 
//题目内容:
//实现一个函数，可以左旋字符串中的k个字符。
//例如:
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//旋转字符串

////                                   1.暴力求解法 
//void left_move(char* arr,int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for(i=0;i<k;i++)
//	{
//		//左旋一个字符
//		//第一步
//		 char tmp = *arr;
//		 //第二部 
//		int j = 0;
//		for(j=0;j<len-1 ;j++)
//		{
//			*(arr+j )= *(arr+1+j); 
//		} 
//		//第三步
//		*(arr+len-1) = tmp;
//	}
//} 
////                           2.三部反转法
//例如: 
// ab cdef
// ba fedc
// cdefab 
int main()
{
	int a = 0;//输入要左旋的字符数 
	char arr[] = "abcdef";
	scanf("%d",&a);
	left_move(arr,a);
	printf("%s\n",arr); 
	return 0;
} 
