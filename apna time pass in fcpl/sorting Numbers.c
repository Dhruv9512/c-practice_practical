
//  *********************** Programme to sort array in deccending order ******************
#include <stdio.h>
int main()
{
  int n;
  // ----------------------------  Input length of array  --------------------------------
  printf("Enter length of array:- ");
  scanf("%d", &n);
  int sho[n];
  int temp;
  // --------------------------------  Input Array ------------------------------------
  for (int i = 0; i < n; i++)
  {
    printf("Enter %d value of the array:- ", i + 1);
    scanf("%d", &sho[i]);
  }
  // ------------------------------ Print array before sorting  ---------------------------
  printf("\n\nArray Before sorting:-  ");
  for (int i = 0; i < n; i++)
  {
    printf("%d \t", sho[i]);
  }
  // -------------------------------  Main logic of soring  ------------------------------------
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (sho[i] > sho[j])
      {
        temp = sho[j];
        sho[j] = sho[i];
        sho[i] = temp;
      }
    }
  }
  // ----------------------------------  Print array after sorting    ------------------------------------
  printf("\n\nArray After sorting:-  ");
  for (int i = 0; i < n; i++)
  {
    printf("%d \t", sho[i]);
  }

  return 0;
}