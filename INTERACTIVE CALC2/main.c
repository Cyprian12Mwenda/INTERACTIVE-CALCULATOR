/* cyprian mwenda
MIT license
C89 compiler
*/


#include <stdio.h>
#include <math.h>
int main()
{
    int a, b,d,e;
  int choice;
  int c=0;

    printf("Enter your choice\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    if( choice > 4 )
    {
        printf("Select with in the range!\n");
    }
    else
    {
        printf("Enter  integer number\n");
        scanf("%d", &a);
    }


    switch(choice)
    {
        case 1:  printf("%d + %d = %d\n", c, a, (c+a));
                  int c=(c+a);
        printf("Enter  integer number\n");
        scanf("%d", &b);
      case 2: printf("%d x %d = %d\n", a, b, (a*b));

                printf("Enter  integer number\n");
        scanf("%d", &e);
        case 3: printf("%d - %d = %d\n",(a*b), b, ((a*b)-e));
                  printf("Enter  integer number\n");
        scanf("%d", &d);



        case 4: if( c != 0)
                    printf("%d / %d = %d\n", ((a*b)-e), c, (((a*b)-e)/d));
                else
                    printf("Number can't be divided by 0\n");
                break;

        default: printf("You entered wrong choice\n");
                 break;
    }

    return 0;
}
