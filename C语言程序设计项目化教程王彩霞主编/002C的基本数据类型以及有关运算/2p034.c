#include <stdio.h>
void main()
{
	char x=3,y='\3';
	printf("你好,扑克迷先生,你要的图案是--%c %c %c %c\n",x,x+1,x+2,x+3);
	printf("你好,扑克迷先生,你要的图案是--%c %c %c %c\n",y,y+1,y+2,y+3);
	printf("你好,扑克迷先生,你要的图案是--%c %c %c %c\n",'\3','\4','\5','\6');
	printf("你好,扑克迷先生,你要的图案是--%c %c %c %c\n",3,4,5,6);
}