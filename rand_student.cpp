/*================================================================
*   
*   文件名称：rand_student.cpp
*   创 建 者：baozhenhua(鲍振华)
*   创建日期：2018年09月17日
*   描    述：利用vector容器进行学生信息的随机显示
*
================================================================*/


#include<iostream>
#include<fstream>
#include<vector>
#include<unistd.h>
#include<cstdlib>
typedef struct{
	int gno;
	std::string name;
	int sclass;
    int age;	
}Student;
int main(int argc,char** argv){
	if(argc!=2){
		std::cerr<<"参数错误"<<std::endl;
		return 1;
	}
	std::ifstream in(argv[1]);
	std::vector<Student> vec_student;
	while(1){
		Student s_temp;
		in>>s_temp.gno>>s_temp.name>>s_temp.sclass>>s_temp.age;
		if(!in) break;
		vec_student.push_back(s_temp);				
	}
	srand(time(NULL));
	int size=vec_student.size();
	std::cout<<"即将开始随机"<<std::endl;
	std::cout<<"随机人数："<<size<<std::endl;
	std::vector<Student>::iterator it;
/*	
	for(it=vec_student.begin();it!=vec_student.end();++it){
		std::cout<<it->name<<" ";
	}
	std::cout<<std::endl;
*/
	sleep(2);
	int cur=0;
	for(int i=0;i<20;i++){
		system("clear");
		cur=rand()%size;
		std::cout<<"抽到的学生是："<<vec_student.at(cur).name<<std::endl;
		usleep(i*i*500);
	}
	std::cout<<"学生学号："<<vec_student.at(cur).gno<<std::endl;
	std::cout<<"学生班级："<<vec_student.at(cur).sclass<<std::endl;
	std::cout<<"学生年龄："<<vec_student.at(cur).age<<std::endl;
    
    
    
    return 0;
}


