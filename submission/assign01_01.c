#include <stdio.h>
#include <string.h>
int main()
{
    float a1,a2,a3,a4,total=0,limit=5000,balance=0;
    int id,time=0,count=0;
    char c1[10]={"Pakistan"},c2[10]={"UAE"},c3[10],c4[10],c5[10],c6[10];
    printf("\tBANK");
    printf("\nEnter Account Number: ");
    scanf("%d",&id);
    printf("\tACCOUNT DETAILS\n");
    printf("Account Status: Active");
    balance=21683716236;
    printf("\nAccount Balanace: $%.2f\n",balance);
    printf("\nEnter amount to be spent: ");
    scanf("%f",&a1);
    printf("Enter Country Name where transaction is to be made: ");
    scanf("%s",&c3);
    printf("Enter amount to be spent: ");
    scanf("%f",&a2);
    printf("Enter Country Name where transaction is to be made: ");
    scanf("%s",&c4);
    printf("Enter amount to be spent: ");
    scanf("%f",&a3);
    printf("Enter Country Name where transaction is to be made: ");
    scanf("%s",&c5);
    printf("Enter amount to be spent: ");
    scanf("%f",&a4);
    printf("Enter Country Name where transaction is to be made: ");
    scanf("%s",&c6);
    total=a1+a2+a3+a4;
    if (total>limit)
    {
        printf("Unusual Activity.\n");
    }
    if (strcmp(c3,c1) && strcmp(c3,c2))
    {
        printf("Suspicious Transaction in %s\n",c3);
    }
    if (strcmp(c4,c1) && strcmp(c4,c2))
    {
        printf("Suspicious Transaction in %s\n",c4);
    }
    if (strcmp(c5,c1) && strcmp(c5,c2))
    {
        printf("Suspicious Transaction in %s\n",c5);
    } 
    if (strcmp(c6,c1) && strcmp(c6,c2))
    {
        printf("Suspicious Transaction in %s\n",c6);
    } 
    printf("Enter Transaction Amount: ");
    scanf("%f",&a1);
    time+=15;
    count++;
    printf("Enter Transaction Amount: ");
    scanf("%f",&a1);
    time+=15;
    count++;
    printf("Enter Transaction Amount: ");
    scanf("%f",&a1);
    time+=15;
    count++;
    printf("Enter Transaction Amount: ");
    scanf("%f",&a1);
    time+=15;
    count++;
    if (count>3)
    {
        printf("Fraud.\n");
    }
    return 0;    
}
