#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct student{
       int ID;
       char name[10];
       double grade;
};
       

int main(int argc, char *argv[])
{
    struct student won = {060627, "Sowon", 4.34};
    
    won.ID = 27;
    
    strcpy(won.name, "Nam");
    
    won.grade = 4.34;
    
    printf("ID : %i\nname : %s\ngrade : %1f\n", won.ID, won.name, won.grade);
  
  system("PAUSE");	
  return 0;
}
