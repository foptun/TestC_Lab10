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
    } b1[3];
    
    
    b1[0].id = 1;
    strcpy(b1[0].name, "Harry Potter");
    strcpy(b1[0].author, "JK Rowling");
    b1[0].status = true;
    b1[0].day = 7;
    strcpy(b1[0].student, "Phansa Phiradee");
    
    b1[1].id = 2;
    strcpy(b1[1].name, "Java Programming");
    strcpy(b1[1].author, "Danny json");
    b1[1].status = false;
    b1[1].day = 3;
    strcpy(b1[1].student, "-");
    
    b1[2].id = 3;
    strcpy(b1[2].name, "C Programming");
    strcpy(b1[2].author, "Dooddy Taza");
    b1[2].status = false;
    b1[2].day = 5;
    strcpy(b1[2].student, "Kanom Taro");
    
    for (int i = 0; i < 3 ;i++) {
        printf("ID: %d \n", b1[i].id);
        printf("Book Name: %s \n", b1[i].name);
        printf("Author: %s \n", b1[i].author);
        
        if (b1[i].status) {
            printf("Status: Yes \n"); // ถูกยืมแล้ว
        }else{
            printf("Status: No \n"); // ยังไม่ถูกยืม
        }
        printf("Day: %d \n", b1[i].day);
        printf("Student: %s \n", b1[i].student);
        
        printf("\n");
    }
    
    
    return 0;
}
