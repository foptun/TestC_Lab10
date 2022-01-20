#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    struct person{
        int id;
        char firstName[20];
        char lastName[20];
        char phone[10];
        int salary;
    };
    
    struct person p1[3];
    
    p1[0].id = 1;
    strcpy(p1[0].firstName, "Phansa");
    strcpy(p1[0].lastName, "Phiradee");
    strcpy(p1[0].phone, "0801234567");
    p1[0].salary = 22000;
    
    p1[1].id = 2;
    strcpy(p1[1].firstName, "K");
    strcpy(p1[1].lastName, "Kanom");
    strcpy(p1[1].phone, "0811111111");
    p1[1].salary = 33000;
    
    p1[2].id = 3;
    strcpy(p1[2].firstName, "Jack");
    strcpy(p1[2].lastName, "Ky");
    strcpy(p1[2].phone, "0822222222");
    p1[2].salary = 44000;
    
    
    for (int i = 0; i < 3; i++) {
        printf("ID: %d \n", p1[i].id);
        printf("First Name: %s \n", p1[i].firstName);
        printf("Last Name: %s \n", p1[i].lastName);
        printf("Phone: %s \n", p1[i].phone);
        printf("Salary: %d \n", p1[i].salary);
        
        printf("\n");
    }
    
    return 0;
}
