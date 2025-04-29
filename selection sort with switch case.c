/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    int a[10],temp,i,j,n,ch,l,k;
    char s[25],A,b;
    char m;
   do{ printf("what do you want to perform?\n1.numerical selection sort\n2.string sellection sort\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("enter the size of the array\n");
           scanf("%d",&n);
           printf("enter %d array elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("after performing selection sort the array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
        
    }
    break;
    case 2:printf("enter the string name\n");
    scanf("%s",s);
    printf("the string is %s\n",s);
    l=strlen(s);
    for(A=0;A<l-1;A++)
    {
        for(b=A+1;b<l;b++)
        {
            if(s[A]>s[b])
            {
                m=s[A];
                s[A]=s[b];
                s[b]=m;
            }
        }
    }
    printf("after performing selection sort on the given string the string is \n");
    printf("%s",s);
    break;
    default :printf("wrong choice");
    
    }
    printf("\ndo you want to perform sorting again?\n1.yes\n2.no\n");
    scanf("%d",&k);
   }while(k==1);
    return 0;
}
