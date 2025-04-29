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
 
    char temp;
    char a[20],i,j;
    int l=0;
    
    printf("enter string name\n");
    

        scanf("%s",&a);
    l=strlen(a);
    
  

  for(i=0;i<l;i++)
  {
      for(j=0;j<l-i-1;j++)
      {
          if(a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
      }
  }
  printf("after sorting the strings are\n");
  
  
      printf("%s\t",a);
  
    

    return 0;
}
