#include <stdio.h>
#include <string.h>   //比较两个字符串是否相等的函数
void main()
{
	char name[81];                 //定义字符串变量最多接受80个有效字符
	int x;
	printf("请输入你的名字:");
	//scanf("%s",name);             //利用SCANF给NAME赋值  
	
	gets(name);         //与SCANF("%s,NAME")的区别:GETS可以接受空格和空串,
	printf("你好----%s\n",name);  //输出NAME的值

	x=strcmp(name,"张三");
    printf("相同吗?0为相同:\n%d",x);
}