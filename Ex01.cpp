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
    
    struct person p1;
    
    p1.id = 1;
    strcpy(p1.firstName, "Phansa");
    strcpy(p1.lastName, "Phiradee");
    strcpy(p1.phone, "0801234567");
    p1.salary = 22000;
    
    printf("ID: %d \n", p1.id);
    printf("First Name: %s \n", p1.firstName);
    printf("Last Name: %s \n", p1.lastName);
    printf("Phone: %s \n", p1.phone);
    printf("Salary: %d \n", p1.salary);
    
    return 0;
}
