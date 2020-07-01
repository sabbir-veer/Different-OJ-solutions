#include<stdio.h>
void quicksort(long long int number[],long long int n,int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,n,first,j-1);
      quicksort(number,n,j+1,last);

   }
}

int main()
{
    long long int n;
    scanf("%lli", &n);
    long long int a[n];

    for(int i=0; i<n; i++) scanf("%lli", &a[i]);

    quicksort(a,n,0,n-1);
    for(int i=1; i<n; i++)
    {
       if(a[i]==a[i-1])
       {
           printf("NO\n");
           return 0;
       }
    }
    printf("YES\n");

    return 0;
}
