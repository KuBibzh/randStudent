#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


void delay(int n);

const char name[][15]={"刘一","陈二","张三","李四","王五","赵六","孙七","周八","吴九","郑十"};
#define sCount 10;
int main()
{
	int sno, i;

	srand(time(NULL));

	for(i = 0; i <30 ; i++)
	{
		system("clear");
		sno = rand() % sCount;
		printf("正在抽奖...%s\n", name[sno]);
		//sleep(1);
		delay(i * i);
	}

	printf("抽中的学生为：%s\n", name[sno]);

	return 0;
}


void delay(int n)
{
	int i, j;
	for(i = 0; i < n; i++)
		for(j = 0; j < 100000; j++);
}
