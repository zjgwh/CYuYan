#include <stdio.h>
void main()
{
	//下面的语句分别定义变量NUM代表任意正整数，G,S,B分别代表其个位 ，十位和百位上的数字
	unsigned num,g,s,b;
	printf("请输入一个正整数：");
	scanf("%u",&num);            //注意%U是UNSIGNED类型的格式符号
	g=num%10;                    //求出NUM的个位数送给G
	s=num/10%10;               //求出NUM的十位数送给S
	b=num/100%10;            //求出NUM的百位数送给B
	printf("%u的个位，十位和百位上的数字分别是%u，%u和%u\n",num,g,s,b);

}