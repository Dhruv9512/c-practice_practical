#include <stdio.h>
void sum(int a[], int b[], int n);
void mul(int a[], int b[], int n);
void sub(int a[], int b[], int n);
void div(int a[], int b[], int n);
int main()
{
   int n;
   printf("Enter a length of array:- ");
   scanf("%d", &n);
   int a[n], b[n];

   //-------input array a --------
   for (int i = 0; i < n; i++)
   {
      printf("Enter value of %d number of array 'a':- ", i + 1);
      scanf("%d", &a[i]);
   }
   printf("\n\n");
   //-------input array b --------
   for (int i = 0; i < n; i++)
   {
      printf("Enter value of %d number of array 'a':- ", i + 1);
      scanf("%d", &b[i]);
   }
   // --------- Input operation-------
   char o;
   printf("Enter a operation that you want to perform Eg:- +,-,* :- ");
   scanf(" %c", &o);

   if (o == '+')
   {
      sum(a, b, n);
   }
   else if (o == '*')
   {
      mul(a, b, n);
   }
   else if (o == '-')
   {
      sub(a, b, n);
   }
   else
   {
      div(a, b, n);
   }

   return 0;
}

//--------------sum ---------
void sum(int a[], int b[], int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("%d\t", a[i] + b[i]);
   }
}
//--------------Multiplication-----------
void mul(int a[], int b[], int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("%d\t", a[i] * b[i]);
   }
}

//---------subtraction-------
void sub(int a[], int b[], int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("%d\t", a[i] - b[i]);
   }
}
//----------Division----------
void div(int a[], int b[], int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("%d\t", a[i] / b[i]);
   }
}