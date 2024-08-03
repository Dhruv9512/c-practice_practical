//*********Write a c programme to print 1 to 10 number  but don't print 5,6,7 using  continue************

#include <stdio.h>

int main()
{

  for (int i = 1; i <=10; i++)
  {
    if (i == 5 || i == 6 || i == 7)
    {
        
        continue;
    }
    
    printf("%d\n",i);
  }
  

    return 0;
}

//------------------goto loop-----------------

//   int a = 1;
// loop:
//     for (int i = a; i <= 10; i++)
//     {

//         if (i == 5 || i == 6 || i == 7)
//         {
//             a++;
//             goto loop;
//         }

//         printf("%d\n", a);
//         a++;
//     }