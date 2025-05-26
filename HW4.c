#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 10
struct Student{char name[20];int id;int math;int physics;int english;float average;};
struct Student students[MAX];
int studentCount=0;
void enterGrades();void displayGrades();void searchGrades();void rankGrades();
int main(){
char choice;int password,tries=0,i;
for(i=0;i<20;i++){printf("######----E1B53----######\n");}
while(tries<3){
printf("請輸入4位數密碼（預設為2025）：");
scanf("%d",&password);
if(password==2025){printf("登入成功！歡迎使用成績系統！\n");break;}
else{printf("密碼錯誤！\n");tries++;}
}
if(tries==3){printf("密碼錯誤三次，系統結束！\n");return 0;}
while(1){
printf("------------[Grade System]------------\n");
printf("|a.Enter student grades|\n");
printf("|b.Display student grades|\n");
printf("|c.Search for student grades|\n");
printf("|d.Grade ranking|\n");
printf("|e.Exit system|\n");
printf("--------------------------------------\n");
printf("Enter your choice:");
scanf(" %c",&choice);
switch(choice){
case'a':enterGrades();break;
case'b':displayGrades();break;
case'c':searchGrades();break;
case'd':rankGrades();break;
case'e':{
char confirm;
do{printf("確定離開？(y/n)：");scanf(" %c",&confirm);
if(confirm=='y'){printf("系統結束，掰掰！\n");return 0;}
}while(confirm!='y'&&confirm!='n');
break;}
default:printf("無效選項，請重新輸入。\n");
}
}
return 0;
}
void enterGrades(){
system("cls");
do{printf("請輸入學生人數（5~10）：");scanf("%d",&studentCount);}
while(studentCount<5||studentCount>10);
int i;
for(i=0;i<studentCount;i++){
printf("第%d位學生\n",i+1);
printf("姓名：");scanf("%s",students[i].name);
printf("學號（6位數）：");scanf("%d",&students[i].id);
do{printf("數學成績（0~100）：");scanf("%d",&students[i].math);}
while(students[i].math<0||students[i].math>100);
do{printf("物理成績（0~100）：");scanf("%d",&students[i].physics);}
while(students[i].physics<0||students[i].physics>100);
do{printf("英文成績（0~100）：");scanf("%d",&students[i].english);}
while(students[i].english<0||students[i].english>100);
students[i].average=(students[i].math+students[i].physics+students[i].english)/3.0;
}
printf("輸入完成，返回主選單...\n");
}
void displayGrades(){
system("cls");
printf("姓名\t學號\t數學\t物理\t英文\t平均\n");
int i;
for(i=0;i<studentCount;i++){
printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].average);
}
system("pause");system("cls");
}
void searchGrades(){
system("cls");
char searchName[20];int found=0,i;
printf("請輸入欲查詢的姓名：");scanf("%s",searchName);
for(i=0;i<studentCount;i++){
if(strcmp(students[i].name,searchName)==0){
printf("姓名\t學號\t數學\t物理\t英文\t平均\n");
printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].average);
found=1;break;}}
if(!found){printf("查無此學生資料！\n");}
system("pause");system("cls");
}
void rankGrades(){
system("cls");
struct Student temp;int i,j;
for(i=0;i<studentCount-1;i++){
for(j=i+1;j<studentCount;j++){
if(students[i].average<students[j].average){
temp=students[i];students[i]=students[j];students[j]=temp;
}}}
printf("成績高低排序如下：\n");
printf("姓名\t學號\t平均\n");
for(i=0;i<studentCount;i++){
printf("%s\t%d\t%.1f\n",students[i].name,students[i].id,students[i].average);}
system("pause");system("cls");
}

