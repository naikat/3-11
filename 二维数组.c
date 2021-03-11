//二维数组



//int main()
//{
//	int arr1[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };// 3 行 4 列
//	int arr2[3][4] = { {1,3,4},{5,8},{9,10,11} };// 
//	int arr3[][4] = { {1,3,4,5},{9,10,11} };//行可以省略 列 不可以
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j,  &arr[i][j]);
//
//		}
//		
//
//	}
//	return 0;
//}


//& arr[0][0] = 010FFB28
//& arr[0][1] = 010FFB2C
//& arr[0][2] = 010FFB30
//& arr[0][3] = 010FFB34
//& arr[1][0] = 010FFB38
//& arr[1][1] = 010FFB3C
//& arr[1][2] = 010FFB40
//& arr[1][3] = 010FFB44
//& arr[2][0] = 010FFB48
//& arr[2][1] = 010FFB4C
//& arr[2][2] = 010FFB50
//& arr[2][3] = 010FFB54


//此处得出的结论 是 二维数组也是内存中连续存放的 每个位置相差4个字节  从低地址到高地址




//数组作为函数参数


//#include<stdio.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//没趟冒泡排序
//		int flag = 1;//假设这一趟排序数组已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序有数据不完全有序
//
//			}
//		}
//		if (flag == 1)
//		{
//			break;//break 放在外层循环语句中 因此可以使用break       break不能单独用于if 语句  只能用于 for   switch
//		}
//	}
//}
//
//
//
//
//
//
//int main()
//{
//	int arr[] = { 2,3,34,1,9,12,13,0,23,44};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//arr 是数组 我们对数组 arr进行传参，实际上传递狗的是数组arr首元素的地址
//	bubble_sort(arr, sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}


//1、 sizeof(数组名)，计算整个数组的大小，sieof内部单独放一个数组名,数组名表示整个数组
//2、 &数组名，取出的是数组的地址，&数组名，数组名表示整个数组。


//除了以上两种情况外 所有的数组名都表示数组的首元素的地址。