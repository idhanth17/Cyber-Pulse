#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
void server(){
    while(1){
    extern int userid[20];
    extern char user[20][50];
    extern char pass[20][50];
    int x,a,n;
    char passC[50]="ABCDE";
    l2:printf("1. ADD USER\n");
    printf("2. MODIFY USER\n");
    printf("3. EXIT\n");
    printf("enter your choice:");
    scanf("%d",&x);
    if(x==1){
        userid[n]=1001+n;
        printf("enter new username:");
        scanf("%s",user[n]);
        l3:printf("enter password:");
        scanf("%s",pass[n]);
        printf("confirm password:");
        scanf("%s",passC);
        a=strcmp(pass[n],passC);
        if(a!=0){
            printf("password not matching\n");
            goto l3;
        }
        printf("Your Details are:");
        printf("UserID:%d\n",userid[n]);
        printf("UserName:%s\n",user[n]);
        n++;
    }
    else if(x==2){
        printf("enter your userid:");
        scanf("%d",&a);
        a=a-1001;
        printf("1. Modify Username\n");
        printf("2. Modify Password\n");
        printf("3.EXIT\n");
        printf("enter your choice:");
        int p;
        scanf("%d",&p);
        if(p==1){
            scanf("%s",passC);
            if(strcmp(pass[a],passC)==0){
                printf("enter new username:");
                scanf("%s",user[a]);
            }
        }
        else if(p==2){
            printf("enter user id:");
            scanf("%d",&p);
            for(int i=0;i<=n;i++){
                if(userid[i]==p){
                    printf("enter new password:");
                    scanf("%s",pass[i]);
                }
            }
        }
        else if(p==3){
            goto l2;
        }
    }
    else if(x==3){
            break;
    }
    }
}

void create(char name[],char age[],char address[],char proffession[],char gen,char salary[],int o)
{
    FILE* filePointer;
    switch(o){
    case 1001:filePointer = fopen("Details1.txt", "w");break;
    case 1002:filePointer = fopen("Details2.txt", "w");break;
    case 1003:filePointer = fopen("Details3.txt", "w");break;
    case 1004:filePointer = fopen("Details4.txt", "w");break;
    case 1005:filePointer = fopen("Details5.txt", "w");break;
    case 1006:filePointer = fopen("Details6.txt", "w");break;
    case 1007:filePointer = fopen("Details7.txt", "w");break;
    case 1008:filePointer = fopen("Details8.txt", "w");break;
    case 1009:filePointer = fopen("Details9.txt", "w");break;
    case 1010:filePointer = fopen("Details10.txt", "w");break;
    case 1011:filePointer = fopen("Details11.txt", "w");break;
    case 1012:filePointer = fopen("Details12.txt", "w");break;
    case 1013:filePointer = fopen("Details13.txt", "w");break;
    case 1014:filePointer = fopen("Details14.txt", "w");break;
    case 1015:filePointer = fopen("Details15.txt", "w");break;
    case 1016:filePointer = fopen("Details16.txt", "w");break;
    case 1017:filePointer = fopen("Details17.txt", "w");break;
    case 1018:filePointer = fopen("Details18.txt", "w");break;
    case 1019:filePointer = fopen("Details19.txt", "w");break;
    case 1020:filePointer = fopen("Details20.txt", "w");break;
    }
    if (strlen(name) > 0) {
        fputs(name, filePointer);
        fputs("\n", filePointer);
        }
    if (strlen(age) > 0) {
        fputs(age, filePointer);
        fputs("\n", filePointer);
        }
    if (strlen(address) > 0) {
        fputs(address, filePointer);
        fputs("\n", filePointer);
        }
    if (strlen(proffession) > 0) {
        fputs(proffession, filePointer);
        fputs("\n", filePointer);
        }
    fputc(gen, filePointer);
    fputs("\n", filePointer);
    if (strlen(salary) > 0) {
        fputs(salary, filePointer);
        fputs("\n", filePointer);
        }
        printf("do you want to enter other info\n");
        char details[50];
        scanf("%[^\n]s",details);
    if (strlen(details) > 0) {
        fputs(details, filePointer);
    }
    fclose(filePointer);
    printf("DETAILS SUCCESFULLY UPDATED\n");
}
void disp(int o)
{
    FILE* filePointer;
    char dataToBeRead[10000];
    switch(o){
    case 1001:filePointer = fopen("Details1.txt", "r");break;
    case 1002:filePointer = fopen("Details2.txt", "r");break;
    case 1003:filePointer = fopen("Details3.txt", "r");break;
    case 1004:filePointer = fopen("Details4.txt", "r");break;
    case 1005:filePointer = fopen("Details5.txt", "r");break;
    case 1006:filePointer = fopen("Details6.txt", "r");break;
    case 1007:filePointer = fopen("Details7.txt", "r");break;
    case 1008:filePointer = fopen("Details8.txt", "r");break;
    case 1009:filePointer = fopen("Details9.txt", "r");break;
    case 1010:filePointer = fopen("Details10.txt", "r");break;
    case 1011:filePointer = fopen("Details11.txt", "r");break;
    case 1012:filePointer = fopen("Details12.txt", "r");break;
    case 1013:filePointer = fopen("Details13.txt", "r");break;
    case 1014:filePointer = fopen("Details14.txt", "r");break;
    case 1015:filePointer = fopen("Details15.txt", "r");break;
    case 1016:filePointer = fopen("Details16.txt", "r");break;
    case 1017:filePointer = fopen("Details17.txt", "r");break;
    case 1018:filePointer = fopen("Details18.txt", "r");break;
    case 1019:filePointer = fopen("Details19.txt", "r");break;
    case 1020:filePointer = fopen("Details20.txt", "r");break;
    }
    while (fgets(dataToBeRead, 10000, filePointer) != NULL) {

            printf("%s", dataToBeRead);
        }
        printf("\n");

        fclose(filePointer);


}

void client(){
    int u=1;
    extern int userid[20];
    extern char user[20][50];
    extern char pass[20][50];
    printf("enter your userid");
    int a;
    scanf("%d",&a);
    a=a-1001;
    char str1[50];
    char str2[50];
    printf("enter the username:");
    scanf("%s",str1);
    printf("enter password:");
    scanf("%s",str2);
    if(strcmp(str1,user[a])==0 && strcmp(str2,pass[a])==0){
        char name[30],address[60],proffession[30],gen;
        char age[3],salary[100000];
        while(u){
        printf("1.DISPLAY\n");
        printf("2.CREATE\n");
        printf("3.EXIT\n");
        int x;
        printf("enter your choice:");
        scanf("%d",&x);
        switch(x){
            case 1:disp(userid[a]);
                    break;
            case 2:printf("Name:");
        scanf("%s",name);
        printf("Age:");
        scanf("%s",age);
        printf("Address:");
        scanf("%s",address);
        printf("Profession:");
        scanf("%s%*c",proffession);
        printf("Gender:");
        scanf("%c",&gen);
        printf("Salary:");
        scanf("%s%*c",salary);
                create(name,age,address,proffession,gen,salary,userid[a]);
                    break;
            default:u=0;
        }
    }
    }
}
int userid[20];
char user[20][50];
char pass[20][50];
int n=0;

int main(){
    int x=1;
    while(x){
        int y;
     l1:printf("1. SERVER \n");
        printf("2. CLIENT \n");
        printf("3. EXIT \n");
        printf("ENTER YOUR CHOICE:");
        scanf("%d",&y);
        switch(y){
            case 1: server();
                    break;
            case 2: client();
                    break;
            case 3: exit(0);
                    break;
            default:goto l1;
        }
    }
}
