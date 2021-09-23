#include<stdio.h>

struct patientDetails{
char name[30], surname[20];
int registerNumber;
int dd,mm,yy;
char gender[4];
char address[30];
long int phoneNumber;
};


int main(){
struct patientDetails p[50];
int i=0,j=0,count=0,option=0;

printf("\n\t Patient Details Management System\t\n");
while(option!=3){
printf("\n Choose an option");
printf("\n 1. Add new patient details");
printf("\n 2. List of all available patients details");
printf("\n 3. Exit\n");
printf("\n Enter your option: ");
scanf("%d", &option);

switch (option) {
case 1:
printf("\n Enter register number: ");
scanf ("%d",&p[i].registerNumber);
printf("\n Enter the name of the patient: ");
scanf("%s %s",p[i].name,p[i].surname);
printf("\n Date of Birth: ");
scanf("%d/%d/%d",&p[i].dd,&p[i].mm,&p[i].yy);
printf("\n Gender(F/M): ");
scanf("%s", p[i].gender);
printf("\n Address:");
scanf("%s", p[i].address);
printf("\n Phone Number:");
scanf("%ld",&p[i].phoneNumber);
i++;
break;
case 2:
printf("\n List of all patients \n");
for (j=0;j<i;j++){
printf("\nDetails of Patient %d\n",j+1);
printf("\n Register Number: %d",p[j].registerNumber);
printf("\n Name of the Patient: %s %s",p[j].name,p[j].surname);
printf("\n Date of Birth: %d/%d/%d",p[j].dd,p[j].mm,p[j].yy);
printf("\n Gender: %s",p[j].gender);
printf("\n Address: %s",p[j].address);
printf("\n Phone number: %ld",p[j].phoneNumber);
}
}
}
}
