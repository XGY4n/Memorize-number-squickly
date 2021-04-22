#include<time.h>
#include <windows.h>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
FILE *fp;
void start()
{
    printf("ready?\n");
    Sleep(1500);
    system("cls");
    for(int i=3;i!=0;i--)
    {
        printf("%d\n",i);
        Sleep(1000);
        system("cls");
    }
    printf("start!\n");
    Sleep(800);
    system("cls");
    return ;
}
//倒计时









void dateout(double k,int s)
{
    switch (s)
    {
    case 1:
        fp=fopen("C:\\Users\\Public\\Documents\\test.txt","w");
        fprintf(fp,"%lf\n",k);
        break;
    case 2:
        fp=fopen("C:\\Users\\Public\\Documents\\test.txt","w");
        fprintf(fp,"%lf\n",k);
        break;                            
    default:
        break;
    }
}
//dateout









void sjs()
{
    int i,j,t,a1,b,c;
    printf("Enter the number of digits:");
    scanf("%d",&a1);
    printf("Enter the problem number:");
    scanf("%d",&b);
    printf("Enter the time between each problem(every 1000=1 second):");
    scanf("%d",&c);
    char s[100];
    char u[100];
    char l[1000]={0};
    long long int a[a1];
    t=0;
    Sleep(1000);
    system("cls");
    start();
    srand((unsigned int)time(NULL)); 
    for(int k=1;k<=b;k++)
    {
    
            for(i=0;i<=a1;i++)
            {           
                a[i]=rand()%10+1;
                itoa(a[i],s,10);
                strcat(l,s); 
            } 

        printf("%s",l); 
        printf("\n");
        Sleep(c);
        system("cls");
        printf("Your answer:\n");
        scanf("%s",u);
        if(strcmp(u,l)==0)
        {
            printf("Yes!\n");
            t++;
        }
        else
        {
            printf("No~\n");
        }
        memset(l,'\0',sizeof(l));
        Sleep(500);
        system("cls");
    }
    printf("your accpet answer have %d\n",t);
    printf("your Accuracy Rate is %lf%%\n",t*1.0/b*1.0*100);
    printf("Press any button\n");
    return ;
}
//自定义







void easy()
{
    int a,b,t,s;
    s=1;
    double k;
    t=0;
    start();
    srand((unsigned int)time(NULL));    
    for(int j=1;j<=3;j++)
    {
        a=rand()%100001+ 10000;//5
        printf("%d\n",a);
        Sleep(1000);
        system("cls");
        printf("Your answer:\n");
        scanf("%d",&b);
        if(a==b)
        {
            printf("Yes!\n");
            t++;
        }
        else
        {
            printf("NO~\n");
        }
        Sleep(500);
        system("cls");
    }
    printf("your accpet answer have %d\n",t);
    printf("your Accuracy Rate is %lf%%\n",t*1.0/3.0*100);
    k=t/3.0*100;
    printf("Press any button\n");
    dateout(k,s);
    fclose(fp);
    return ;
}
//easy mode




void hard()
{
    char h[100];
    char u[100];
    char l[1000]={0};
    int a[15];
    int i,j,t,s;
    double k;
    s=2;
    t=0;
    start();
    srand((unsigned int)time(NULL)); 
    for(int k=1;k<=5;k++)
    {
    
            for(i=0;i<=8;i++)
            {           
                a[i]=rand()%10+1;
                itoa(a[i],h,10);
                strcat(l,h); 
            } 

        printf("%s",l); 
        printf("\n");
        Sleep(1000);
        system("cls");
        printf("Your answer:\n");
        scanf("%s",u);
        if(strcmp(u,l)==0)
        {
            printf("Yes!\n");
            t++;
        }
        else
        {
            printf("No~\n");
        }
        memset(l,'\0',sizeof(l));
        Sleep(500);
        system("cls");
    }
    printf("your accpet answer have %d\n",t);
    printf("your Accuracy Rate is %lf%%\n",t*1.0/5.0*100);
    k=t/3.0*100;
    dateout(k,s);
    printf("Press any button\n");
    fclose(fp);
    return ;
}
//hard mode







void sh()
{
    char s[100];
    char u[100];
    char l[1000]={0};
    int a[15];
    int i,j,t;
    t=0;
    start();
    srand((unsigned int)time(NULL)); 
    for(int k=1;k<=8;k++)
    {
            for(i=0;i<=12;i++)
            {           
                a[i]=rand()%10+1;
                itoa(a[i],s,10);
                strcat(l,s); 
            } 

        printf("%s",l); 
        printf("\n");
        Sleep(1000);
        system("cls");
        printf("Your answer:\n");
        scanf("%s",u);
        if(strcmp(u,l)==0)
        {
            printf("Yes!\n");
            t++;
        }
        else
        {
            printf("No~\n");
        }
        memset(l,'\0',sizeof(l));
        Sleep(500);
        system("cls");
    }
    printf("your accpet answer have %d\n",t);
    printf("your Accuracy Rate is %lf%%\n",t*1.0/8.0*100);
    printf("Press any button\n");
    return ;
}
//super hard mode








void customize()
{

}
void mainmuen()
{
    int n;
    printf("        |----------------|\n");
    printf("        |choose your mode|\n");
    printf("        |----------------|\n");
    printf("	|    1 easy      |\n");
    printf("        |----------------|\n");
	printf("	|    2 hard      |\n");
    printf("        |----------------|\n");
    printf("	|    3 super hard|   \n");
    printf("        |----------------|\n");
	printf("	|    4 customize |\n");
    printf("        |----------------|\n");
    printf("	|    0 quit      |\n");
    printf("        |----------------|\n");
    printf("        select:\n");
/*cout<<"⠄⠄⠄⠄⠄⠄⢠⣿⣋⣿⣿⣉⣿⣿⣯⣧⡰⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄"<<endl;
cout<<"⠄⠄⠄⠄⠄⠄⣿⣿⣿⣏⣿⣿⡗⣿⣿⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄."<<endl;
cout<<"⠄⠄⠄⠄⠄⠄⠟⡛⣉⣭⣭⣭⠌⠛⡻⢿⣿⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄"<<endl;
cout<<"⠄⠄⠄⠄⠄⠄⠄⠄⣤⡌⣿⣷⣯⣭⣿⡆⣈⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄"<<endl;
cout<<"⠄⠄⠄⠄⠄⠄⠄⢻⣿⣿⣿⣿⣿⣿⣿⣷⢛⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄"<<endl;
cout<<"⠄⠄⠄⠄⠄⠄⠄⠄⢻⣷⣽⣿⣿⣿⢿⠃⣼⣧⣀⠄⠄⠄⠄⠄⠄⠄⠄⠄"<<endl;
cout<<"⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣛⣻⣿⠟⣀⡜⣻⢿⣿⣿⣶⣤⡀⠄⠄⠄⠄⠄"<<endl;
cout<<"⠄⠄⠄⠄⠄⠄⠄⠄⢠⣤⣀⣨⣥⣾⢟⣧⣿⠸⣿⣿⣿⣿⣿⣤⡀⠄⠄⠄"<<endl;
cout<<"⠄⠄⠄⠄⠄⠄⠄⠄⢟⣫⣯⡻⣋⣵⣟⡼⣛⠴⣫⣭⣽⣿⣷⣭⡻⣦⡀⠄"<<endl;
cout<<"⠄⠄⠄⠄⠄⠄⠄⢰⣿⣿⣿⢏⣽⣿⢋⣾⡟⢺⣿⣿⣿⣿⣿⣿⣷⢹⣷⠄"<<endl;
cout<<"⠄⠄⠄⠄⠄⠄⠄⣿⣿⣿⢣⣿⣿⣿⢸⣿⡇⣾⣿⠏⠉⣿⣿⣿⡇⣿⣿⡆"<<endl;
cout<<"⠄⠄⠄⠄⠄⠄⠄⣿⣿⣿⢸⣿⣿⣿⠸⣿⡇⣿⣿⡆⣼⣿⣿⣿⡇⣿⣿⡇"<<endl;
cout<<"⠇⢀⠄⠄⠄⠄⠄⠘⣿⣿⡘⣿⣿⣷⢀⣿⣷⣿⣿⡿⠿⢿⣿⣿⡇⣩⣿⡇"<<endl;
cout<<"⣿⣿⠃⠄⠄⠄⠄⠄⠄⢻⣷⠙⠛⠋⣿⣿⣿⣿⣿⣷⣶⣿⣿⣿⡇⣿⣿⡇"<<endl;*/
cin>>n;
    switch (n)
    {
    case 1:
        system("cls");easy();getch();system("cls");
        break;
    case 2:
        system("cls");hard();getch();system("cls");
        break;
    case 3:
        system("cls");sh();getch();system("cls");
        break;
    case 4:
        system("cls");sjs();getch();system("cls");
        break;
    case 0:
        
        exit(0);
        break;
    default:
        printf("        Error!\n");printf("        Press any button\n");getch();system("cls");
        break;
    }
    mainmuen();
}
int main()
{
    mainmuen();
    return 0;
}