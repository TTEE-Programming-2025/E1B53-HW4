#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 10
struct Student{
    char name[20];
    int id;
    int math;
    int physics;
    int english;
    float average;
};
struct Student students[MAX];
int studentCount=0;
void enterGrades(){} 
void displayGrades(){}
void searchGrades(){}
void rankGrades(){}
int main(){
    char choice;
    for(int i=0;i<20;i++) printf("##########################\n");

    while(1){
        printf("------------[Grade System]----------\n");
        printf("|  a. Enter student grades         |\n");
        printf("|  b. Display student grades       |\n");
        printf("|  c. Search for student grades    |\n");
        printf("|  d. Grade ranking                |\n");
        printf("|  e. Exit system                  |\n");
        printf("------------------------------------\n");
        printf("Enter your choice:");
        scanf("%c", &choice);
        switch(choice){
            case 'a':enterGrades();break;
            case 'b':displayGrades();break;
            case 'c':searchGrades();break;
            case 'd':rankGrades();break;
            case 'e':return 0;
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}

