/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
struct book
{
    char name[20];
    int code;
};

int main()
{
    struct book b[20];
    int i,p,n,ch,choice;
   printf("enter no of books:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("Name:\n");
       scanf("%s",b[i].name);
       printf("code:\n");
       scanf("%d",&b[i].code);
   }
   do{
       printf("enter your choice\n,1.insertion\n2.deletion\n3.modification\n4.display\n5.exist\n");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:printf("enter position at which you want to insert new info:\n");
                scanf("%d",&p);
                for(i=n;i>=p;i--)
                {
                    b[i+1]=b[i];
                }
                printf("please enter name:\n");
                scanf("%s",b[p].name);
                printf("please enter code:\n");
                scanf("%d",&b[p].code);
                n=n+1;
                printf("after insertion the data is\n");
                for(i=0;i<n;i++)
                {
                    printf("name is:%s\nthe code is :%d\n",b[i].name ,b[i].code);
                }
                break;
                
            case 2:printf("at which position you want to delete a info:\n");
            scanf("%d",&p);
            for(i=p;i<n-1;i++)
            {
                b[i]=b[i+1];
            }
            n=n-1;
            printf("the data after deletion is\n");
            for(i=0;i<n;i++)
            {
                printf("the name is %s\n the code is %d\n",b[i].name,b[i].code);
            }
            break;
            
        case 3:printf("at which postion you want to perform modification\n");
        scanf("%d",&p);
        printf("name\n");
        scanf("%s",b[p].name);
        printf("code:\n");
        scanf("%d",&b[p].code);
        printf("the data after modification is \n");
        for(i=0;i<n;i++)
        {
            printf("the book name is %s\n the code is %d\n",b[i].name,b[i].code);
        }
        break;
        
        case 4:for(i=0;i<n;i++)
        {
            printf("book %d\n",i+1);
            printf(" book name : %s\n",b[i].name);
            printf("book code :%d\n",b[i].code);
            
            
        }
        break;
        
          case 5:exit(0);
           break;
       }
       printf("do u want to go again to menu(1/0)");
       scanf("%d",&choice);
   }while(choice==1);
   return 0;
   }