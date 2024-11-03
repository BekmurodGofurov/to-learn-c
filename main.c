#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[20];
    char major[30];
    int age;
    double gpa;
};


int main()
{
    struct student student1;
    student1.age = 18;
    student1.gpa = 4.7;
    strcpy( student1.name, "Bekmurod");
    strcpy( student1.major, "Cyber securty");
    
    struct student student2;
    student2.age = 19;
    student2.gpa = 4.0;
    strcpy( student2.name, "Jaloliddin");
    strcpy( student2.major, "Business");

    printf("%ss\n", student2.name);
    return 0;
}

