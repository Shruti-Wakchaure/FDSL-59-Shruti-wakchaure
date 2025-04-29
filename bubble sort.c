/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    int temp;
    int a[10],n=10;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
  printf("the array is\n");
  for(i=0;i<n;i++)
  {
      printf("%d\t",a[i]);
  }

  for(i=0;i<n-1;i++)
  {
      printf("\nfor %d pass\n",i+1);
      for(j=0;j<n-i-1;j++)
      {
          if(a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
          
      }
      for(j=0;j<n;j++)
      {
          printf("%d\t",a[j]);
      }
      
  }
  printf("\nafter sorting\n");
  for(i=0;i<n;i++)
  {
      printf("%d\t",a[i]);
  }
    
    return 0;
}