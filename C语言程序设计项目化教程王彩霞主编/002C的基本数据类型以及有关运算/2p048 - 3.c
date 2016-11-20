#include <stdio.h>
void main()
{
	printf("%s,%d,%.2f\n","ABCDEF",247,198.67123);
	printf("%-10s,%10s,%8.2s,%3s\n","ABCDEF","ABCDEF","ABCDEF","ABCDEF");
	printf("%12d,%-12d,%2d\n",1234,1234,1234);
	printf("%18.2f,%-18.2f,%12f\n",123456.6734,123456.6734,123456.6734);
	printf("%c,%-10c,%10c\n",'A','A','A');
	//c语言的知识没有必要死记硬背,在编写程序时,有意识地多使用它们,自然而然地就记住了,想忘记它们都困难!
}