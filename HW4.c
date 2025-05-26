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
void enterGrades(){
    system("cls");
    printf("Enter number of students (5~10): ");
    scanf("%d", &studentCount);
    for(int i=0;i<studentCount;i++){
        printf("Student %d name:",i+1);
        scanf("%s", students[i].name);
        printf("Student ID: ");
        scanf("%d", &students[i].id);
        printf("Math: ");
        scanf("%d", &students[i].math);
        printf("Physics: ");
        scanf("%d", &students[i].physics);
        printf("English: ");
        scanf("%d", &students[i].english);
}
}
void displayGrades(){}
void searchGrades(){}
void rankGrades(){}
int main(){
    char choice;
    int password,tries=0;
    for(int i=0;i<20;i++)printf("##########################\n");
    while(tries<3){
        printf("Enter 4-digit password: ");
        scanf("%d",&password);
        if(password==2025) break;
        tries++;
        if(tries==3){
            printf("Too many failed attempts. Exiting...\n");
            return 0;
        }
    }
    while(1){
        printf("------------[Grade System]----------\n");
        printf("|  a. Enter student grades         |\n");
        printf("|  b. Display student grades       |\n");
        printf("|  c. Search for student grades    |\n");
        printf("|  d. Grade ranking                |\n");
        printf("|  e. Exit system                  |\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        switch(choice){
            case 'a': enterGrades(); break;
            case 'b': displayGrades(); break;
            case 'c': searchGrades(); break;
            case 'd': rankGrades(); break;
            case 'e': return 0;
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
void searchGrades(){
    system("cls");
    char target[20];
    int found = 0;
    printf("Enter name to search: ");
    scanf("%s",target);
    for(int i=0;i<studentCount;i++){
        if(strcmp(students[i].name,target)==0){
            printf("Name\tID\tMath\tPhysics\tEnglish\tAverage\n");
            printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",
                students[i].name,
                students[i].id,
                students[i].math,
                students[i].physics,
                students[i].english,
                students[i].average);
            found=1;
            break;
        }
    }
    system("pause");
    system("cls");
}

