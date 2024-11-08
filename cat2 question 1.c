// c.structure programme
/*Name: Queen Esther
Reg.no:CT101/G/22453/24*/

#include<stdio.h> 
#include <string.h>

  struct employee{
    char name [25];
    char department [20];
    char email [50];
    int id;
    float salary;
  }
  employee1;
  int main(){
    strcpy(employee1.name,"John doe");
    strcpy(employee1.department,"Human resourse");
    strcpy(employee1.email,"Johndoe@company.com");
    employee1.id=12345;
    employee1.salary=55000.50;
    printf("Name %s\n",employee1.name);
    printf("Department%s\n",employee1.department);
    printf("Email%s\n",employee1.email);
    printf("Employee's id %d \n",employee1.id);
    printf("Employee's salary%f\n ",employee1.salary);
  
  
  return 0;
}


// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 