//操作符




//
//#include<stdio.h>
//
//int main()
//{
//	double a = 5 / 2.0;
//	printf("a= %lf\n ", a);
//	return 0;
//}



//
//#include<stdio.h>
//
//int main()
//{
//	int a = -16;
//	int b = 0;
//	b = a >> 1;
//	//>>  ---  右移操作符
//	// 移动的是二进制位
//	//00000000000000000000000000010000
//	printf("b= %d\n ", b);
//	return 0;
//}


//   右移操作符
//   1、算术右移
//   右边丢弃，左边补原符号位   1 为 负  0 为 正
//   
//   2、逻辑右移
//   右边丢弃，左边补0 
//
//

//#include<stdio.h>
//
//int main()
//{
//	int a = -16;
//	int b = 0;
//	b = a << 1;
//	//>>  ---  右移操作符
//	// 移动的是二进制位
//	//00000000000000000000000000010000
//	printf("b= %d\n ", b);
//	return 0;
//}
//



//#include<stdio.h>
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = a | b;
//	int f = a ^ b;
//	c = a & b;
//	printf("%d\n", d);
//	printf("%d\n", c);
//	printf("%d\n", f);
//	//   &  ---  按2机制位与
//	//   |  ---  按2机制位或
//	//   ^  ---  按2机制异或
//	// 
//	// a---00000000000000000000000000000011
//	// b---00000000000000000000000000000101
//	// &  (相同得1  不同得0)
//	// c- -00000000000000000000000000000001
//
//
//	// a---00000000000000000000000000000011
//	// b---00000000000000000000000000000101
//	// |   一个相同及相同
//	// c- -00000000000000000000000000000111
//
//
//
//	// a---00000000000000000000000000000011
//	// b---00000000000000000000000000000101
//	// ^  相同为0 相异为1
//	// c- -00000000000000000000000000000110
//
//
//
//
//	return 0; 
//}




//// 将 a b 两值相互交换 不使用临时变量
//
//
//
//#include<stdio.h>
//
//int main()
//{
//	int a = 33;
//	int b = 25;
//	
//	//加减法---(容易溢出)
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//
//	//异或的方法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//
//
//
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//





//整数的二进制表示有 原码 反码 补码
// 存储到内存的是补码

//  -1
//100000000000000000000000000000001---原码
//111111111111111111111111111111110---反码    符号为不变 其余取反
//111111111111111111111111111111111---补码    反码+1



//编写一个代码 实现：求一个整数储存在内存中的二进制中的1的个数

//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))//每次向右移位1位                   & 1 检验最后一位是否等于 1 
//			count++;
//
//	}
//	printf("%d \n", count);
//	return 0;
//}



//
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//printf("%p", &a);
//	printf("%d", a);
//	//printf("%p", &a);
//	return 0;
//
//}

//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)   //40
//	printf("%d\n", sizeof(ch));//(3)    //10  
//	test1(arr); //4   地址32位  指针所以 4
//	test2(ch);  //4    同样是地址      4
//	return 0;
//}
////问：
////（1）、（2）两个地方分别输出多少？
////（3）、（4）两个地方分别输出多少



//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
////程序输出的结果是什么？


// && 的 时候 a =1 b=2 c=3 d=4  因为 第一个 a++ 先使用a 后++  此处的a 是0   && 得 0 所以后面bcd都没计算了
// ||  的 时候  a= 1 b=3 c=3 d=4  因为 第一个 a++ 先使用a 后++  此处的a 是0   后面继续计算  ++b  得 3     因为++b为真  || 得 1 所以后面bcd都没计算了



//条件操作符


//#include<stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int max = 0;
//	max = (a > b ? a: b);// exp1?exp2:exp3 
//	
//	printf("%d ", max);
//
//	return 0;
//
//}
//




//逗号表达式


//#include<stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 22, a, b = a + 12);//  逗号表达式 从左向右依次执行，整个表达式的最后结果是最后一个表达式的结果
//	printf("%d", c);
//	return 0;
//}


//代码2
//if (a = b + 1， c=a/2, d >0)  // 此条件语句 最后的判断真假 是 d>0  同样是最后



//#include <stdio.h>
//void test1()      // 此处（）为语法规则
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();            //实用（）作为函数调用操作符。
//	test2("hello bit.");//实用（）作为函数调用操作符。
//	return 0;
//}




// 结构体
// 
// 
// 
//结构体.成员名
//->结构体指针->成员名


//#include<stdio.h>
//
////创建一个结构类型   struct Stu
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//
//
//int main()
//{
//	int a = 0;
//
//
//	struct stu s1 = { "张三", "20",  "1609180105" };
//	//使用 struct Stu  这个类型创建了一个学生对象 s1   ，并初始化
//
//
//	//struct stu* p = &s1;
//	//printf("%s %s %s\n", (*p).age, (*p).id, (*p).name);
//	//
//
//
//	//printf("%s %s %s\n", p->age, p->id, p->name);
//	////使用结构体指针
//
//
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.age);
//	printf("%s\n", s1.id);
//	//结构体变量.成员名
//
//
//	return 0;
//}







////隐藏类型转换 （整型提升  算术转换）
//
// 
// 
// 
// 
////C的整型算术运算总是至少以缺省整型类型的精度来进行的。
////为了获得这个精度，表达式中的字符和短整型操作数在使用之前被转换为普通整型，这种转换称为整型提升。
//
//
//
//#include<stdio.h>
//
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011---a  char   1个字节 8个比特位
//
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111---b
//
//	char c = a + b;
//	//00000011---a    提升 00000000000000000000000000000011
//	//01111111---b    提升 00000000000000000000000001111111
//	//000000000000000000000000010000010---c
//
//	printf("%d\n", c);  //  printf打印的是原码
//	//10000010-- - c
//	//11111111111111111111111110000010----补码    储存在内存中的是补码
//	//11111111111111111111111110000001----反码    
//	//10000000000000000000000001111110----原码
//	//-126
//
//
//	// 此处输出为 int 4个字节 因此  得整型提升
//	//整形提升是按照变量的数据类型的符号位来提升的
//	return 0;
//
//	
//
//}


//#include<stdio.h>
//
//int main()
//{
//	char a = 0xb6;  // 1011(b)0110(6)   10110110
//	//  0x 为十六进制
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)//  比较也是一种运算  因此 a 此处进行了整性提升   11111111111111111111111110110110 不等于0xb6
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}



//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4   进行计算 整型提升
//	printf("%u\n", sizeof(!c));//1   （!c）= c
//	return 0;
//}





//算术转换

//如果某个操作符的各个操作数属于不同的类型，那么除非其中一个操作数的转换为另一个操作数的类型，否则操作就无法进行。下面的层次体系称为寻常算术转换

//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int

//如果某个操作数的类型在上面这个列表中排名较低，那么首先要转换为另外一个操作数的类型后执行运算








//优先级




//表达式的求值部分由操作符的优先级决定。
//表达式1
//  a* b + c * d + e * f

//所以表达式的计算机顺序就可能是


//a* b
//c* d
//a* b + c * d
//e * f
//a * b + c * d + e * f
//或者：
//a * b
//c * d
//e * f


//注释：代码1在计算的时候，由于比+的优先级高，只能保证，的计算是比+早，但是优先级并不
//能决定第三个*比第一个+早执行。