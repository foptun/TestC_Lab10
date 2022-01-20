#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> // สำหรับใช้ bool

int main() {
    struct book{
        int id;
        char name[20];
        char author[20]; // ผู้แต่งหนังสือ
        bool status; // สถานะ ถูกยืม หรือ ยังไม่ถูกยืม
        int day; // ยืมได้กี่วัน
        char student[50]; // น.ศ. คนที่ยืมหนังสือ
    } b1;
    
    
    b1.id = 1;
    strcpy(b1.name, "Harry Potter");
    strcpy(b1.author, "JK Rowling");
    b1.status = true;
    b1.day = 7;
    strcpy(b1.student, "Phansa Phiradee");
    
    printf("ID: %d \n", b1.id);
    printf("Book Name: %s \n", b1.name);
    printf("Author: %s \n", b1.author);
    
    if (b1.status) {
        printf("Status: Yes \n"); // ถูกยืมแล้ว
    }else{
        printf("Status: No \n"); // ยังไม่ถูกยืม
    }
    printf("Day: %d \n", b1.day);
    printf("Student: %s \n", b1.student);
    
    return 0;
}
