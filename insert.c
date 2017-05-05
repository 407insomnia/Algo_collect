#include<stdio.h>

void in(int a[],int n)
{
    for(i=1;i<n;i++)
      if(a[i-1]>a[i])
      {
        j=i-1;
        x=a[i];
        a[i]=a[i-1];
        while(x<a[j])
        {
            a[j+1]=a[j];
            j--; 
        }
        a[j+1]=x;
      }
}

int main()
{



}
