#include "main_exxx_c01.h"

void main_ex00(void)
{
    int n = 10;
    int *nbr;

    printf("\nExercise 00:\n");
    printf("Create a function that takes a pointer to int as a parameter, and sets the value 42 to that int.\n");
    printf("\n-> ");
    nbr = &n;
    ft_ft(nbr);
    printf("%d\n", *nbr);
}

void main_ex01(void)
{
  int n = 10;
  int *nbr = &n;
  int **nbr1 = &nbr;
  int ***nbr2 = &nbr1;
  int ****nbr3 = &nbr2;
  int *****nbr4 = &nbr3;
  int ******nbr5 = &nbr4;
  int *******nbr6 = &nbr5;
  int ********nbr7 = &nbr6;
  int *********nbr8 = &nbr7;

  printf("\nExercise 01:\n");
  printf("Create a function that takes a pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to int as a parameter and sets the value 42 to that int.\n");
  printf("-> ");

  ft_ultimate_ft(nbr8);

  printf("%d", *********nbr8);
}

void  main_ex02(void)
{
    int a = 10;
    int b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("\nExercise 02:\n");
    printf("Create a function that swaps the value of two integers whose addresses are entered as parameters.\n");

    printf("\npassing a: %d & b: %d\n", a, b);
    ft_swap(ptr1, ptr2);
    printf("Giving: a: %d & b: %d\n", a, b);
}
void main_ex03(void)
{
    int   a = 13;
    int   b = 5;
    int   division;
    int   resto;
    int   *div;
    int   *mod;

    printf("\nExercise 03:\n");
    printf("This function divides parameters a by b and stores the result in the int pointed by div. It also stores the remainder of the division of a by b in the int pointed by mod.\n");    

    printf("\nDividing a = 13 by b = 5\n");

    div = &division;
    mod = &resto;

    ft_div_mod(a, b, div, mod);
    printf("The div result shloud be 2\n -> %d\n The mod value should be 3\n -> %d\n", division, resto);
}
void main_ex04(void)
{
    int   a = 11;
    int   b = 5;
    int   *p_a = &a;
    int   *p_b = &b;

    printf("This function divides parameters a by b. The result of this division is stored in the int pointed by a. The remainder of the division is stored in the int pointed by b.\n");
    printf("Passing a = 11 and b = 5:\n");
    ft_ultimate_div_mod(p_a, p_b);
    printf("Expecting a = 2\n a -> %d\nExpecting b = 1\n b -> %d\n", a, b);
}
void main_ex05(void)
{
    char string[] = {"Hola"};
    char *str = &string[0];

    printf("Create a function that displays a string of characters on the standard output.\n");
    printf("String = Hola\n");
    ft_putstr(str);
}
void main_ex06(void)
{
    int   n;
    char string[] = {"yeah"};
    char *str = &string[0];
    printf("Create a function that counts and returns the number of characters in a string.\n");
    printf("Giving the string of 4 characters -> *yeah*\n");
    n = ft_strlen(str);
    printf("-> %d", n);
}
void main_ex07(void)
{
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];

    printf("Create a function which reverses a given array of integer (first goes last, etc).\n");
    printf("Passing the array {1, 2, 3, 4, 5,}\n");
    ft_rev_int_tab(ptr, size);

    printf("Getting: ");
    for(int i = 0; i < size; i++)
    {
      printf("%d", arr[i]);
    }
}
void main_ex08(void)
{
    int size = 10;
    int arr[] = {0, 4, 2, 1, 9, 8, 6, 5, 7, 3};
    int *ptr = &arr[0];

    printf("Create a function which reverses a given array of integer (first goes last, etc).\n");
    printf("Passing the array {0, 4, 2, 1, 9, 8, 6, 5, 7, 3}\n");
    ft_sort_int_tab(ptr, size);

    printf("Getting: ");
    for(int i = 0; i < size; i++)
    {
      printf("%d", arr[i]);
    }
}
//void main_ex09(void){}
//void main_ex10(void){}
//void main_ex11(void){}
//void main_ex12(void){}