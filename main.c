#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
		
		int id;
		char name[100];
		double grade;
		
	};
	
	
	
	
int main(int argc, char *argv[]) {
	
	struct student s = { 2014652 ,"hyunseo", 4.3};
	
	s.id = 23456;
	s.grade = 3.5;
	
	printf("Id : %d\n",s.id);
	printf("name : %s\n",s.name);
	printf("grade : %f\n",s.grade);
	
	return 0;
}
