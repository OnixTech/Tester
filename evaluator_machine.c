#include "evaluator_machine.h"

int main(void)
{
    int ex;
    int *p_ex = &ex;
    int total_ex = 9;
    int *total_ex_p = &total_ex;

    ex = 0;
    while(ex != 15)
    {
      switch(ex)
      {
        case 0:
          menu_exercise(total_ex_p);
          printf("\n15:quit\n");
          scanf("%d", &ex);
          break;
        case 1:
          main_ex00();
          end(p_ex);
          break;
        case 2:
          main_ex01();
          end(p_ex);
          break;
        case 3:
          main_ex02();
          end(p_ex);
          break;
        case 4:
          main_ex03();
          end(p_ex);
          break;
        case 5:
          printf("\nExercise 04:\n");
          main_ex04();
          end(p_ex);
          break;
        case 6:
          printf("\nExercise 05:\n");
          main_ex05();
          end(p_ex);
          break;
        case 7:
          printf("\nExercise 06:\n");
          main_ex06();
          end(p_ex);
          break;
        case 8:
          printf("\nExercise 07:\n");
          main_ex07();
          end(p_ex);
          break;
        case 9:
          printf("\nExercise 08:\n");
          main_ex08();
          end(p_ex);
          break;
        case 10:
          printf("\nExercise 09:\n");
          //main_ex09();
          end(p_ex);
          break;
        case 11:
          printf("\nExercise 10:\n");
          //main_ex10();
          end(p_ex);
          break;
        case 12:
          printf("\nExercise 11:\n");
          end(p_ex);
          break;
        default:
          printf("\nExit\n");
          ex = 15;
      }
  }

  return 0;

}

void menu_exercise(int *total_ex_p)
{
  int num = 1;
  
  printf("\nWhich exercise would you like to test:\n");
  while(num <= *total_ex_p)
  {
    printf("%d_Exercise N°: %d\n", (num - 1), num);
    num++;
  }

}

void end(int *p_ex)
{
    int n;

    printf("\n0:menu 15:quit\n");
    scanf("%d", &n);
    *p_ex = n;
}

