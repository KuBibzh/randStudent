#include<iostream>
#include<string>
#include<cstdlib>
void delay(int n);
std::string name[15]={"刘一","陈二","张三","李四","王五","赵六","孙七","周八","吴九","郑十"};
#define sCount 10;
int main()
{
        srand(time(NULL));
	int sno;
        for(int i = 0; i <30 ; i++)
        {
                system("clear");
                sno = rand() % sCount;
		std::cout<<"马上就要抽中..."<<name[sno]<<std::endl;;
                delay(i * i);
        }
	system("clear");
	std::cout<<"抽中的学生为："<<name[sno]<<std::endl;

        return 0;
}
void delay(int n)
{
        for(int i = 0; i < n; i++)
                for(int j = 0; j < 100000; j++);
}

