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
printf("�п�J4��ƱK�X�]�w�]��2025�^�G");
scanf("%d",&password);
if(password==2025){printf("�n�J���\�I�w��ϥΦ��Z�t�ΡI\n");break;}
else{printf("�K�X���~�I\n");tries++;}
}
if(tries==3){printf("�K�X���~�T���A�t�ε����I\n");return 0;}
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
do{printf("�T�w���}�H(y/n)�G");scanf(" %c",&confirm);
if(confirm=='y'){printf("�t�ε����A�T�T�I\n");return 0;}
}while(confirm!='y'&&confirm!='n');
break;}
default:printf("�L�Ŀﶵ�A�Э��s��J�C\n");
}
}
return 0;
}
void enterGrades(){
system("cls");
do{printf("�п�J�ǥͤH�ơ]5~10�^�G");scanf("%d",&studentCount);}
while(studentCount<5||studentCount>10);
int i;
for(i=0;i<studentCount;i++){
printf("��%d��ǥ�\n",i+1);
printf("�m�W�G");scanf("%s",students[i].name);
printf("�Ǹ��]6��ơ^�G");scanf("%d",&students[i].id);
do{printf("�ƾǦ��Z�]0~100�^�G");scanf("%d",&students[i].math);}
while(students[i].math<0||students[i].math>100);
do{printf("���z���Z�]0~100�^�G");scanf("%d",&students[i].physics);}
while(students[i].physics<0||students[i].physics>100);
do{printf("�^�妨�Z�]0~100�^�G");scanf("%d",&students[i].english);}
while(students[i].english<0||students[i].english>100);
students[i].average=(students[i].math+students[i].physics+students[i].english)/3.0;
}
printf("��J�����A��^�D���...\n");
}
void displayGrades(){
system("cls");
printf("�m�W\t�Ǹ�\t�ƾ�\t���z\t�^��\t����\n");
int i;
for(i=0;i<studentCount;i++){
printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].average);
}
system("pause");system("cls");
}
void searchGrades(){
system("cls");
char searchName[20];int found=0,i;
printf("�п�J���d�ߪ��m�W�G");scanf("%s",searchName);
for(i=0;i<studentCount;i++){
if(strcmp(students[i].name,searchName)==0){
printf("�m�W\t�Ǹ�\t�ƾ�\t���z\t�^��\t����\n");
printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].average);
found=1;break;}}
if(!found){printf("�d�L���ǥ͸�ơI\n");}
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
printf("���Z���C�ƧǦp�U�G\n");
printf("�m�W\t�Ǹ�\t����\n");
for(i=0;i<studentCount;i++){
printf("%s\t%d\t%.1f\n",students[i].name,students[i].id,students[i].average);}
system("pause");system("cls");
}

