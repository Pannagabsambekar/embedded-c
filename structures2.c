#include<stdio.h>
struct Teacher{
char *name;
int age;
int tution_fees;
};
int Student(){
struct Teacher Student;
if(Student.age <=25)
  Student.tution_fees= 30000;
  else
  Student.tution_fees= 20000;
  return Student.tution_fees;}

  int main(){
  struct  Teacher Student1; 
  struct  Teacher Student2;
  printf("Enter stduent1 age :");
  scanf("%d", &Student1.age);
   printf("Enter stduent2 age :");
  scanf("%d", &Student2.age);
  printf("Student 1 fees is %d \n" ,Student(Student1));
   printf("Student 2 fees is %d", Student(Student2));
   return 0;
  

}