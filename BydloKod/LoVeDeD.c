#include <stdio.h>
#include <math.h>

int Plots(double a, double b, double c)
{
    int number ;
    if ((a == 0) && ( b ==0) && ( c == 0))
    {
        number = -1;
    }

        else
        {
              if (((b*b - 4*a*c) < 0 ) || ((a == 0) && ( b ==0) && ( c != 0)))
              {
                  number = 0 ;
              }
              else
              {
                  if (((b*b - 4*a*c) == 0) || ((a == 0) && (b != 0)))
                  {
                      number = 1 ;
                  }
                  else
                  {

                     if ((b*b - 4*a*c) > 0)
                     {
                         number = 2 ;
                     }

                  }
              }
        }

        return(number);
}
void SingleRoot(a, b, c)
{
    float k ;
    if (a == 0)
    {
        k = (-b) / c;
        printf("%.4f", k);
    }
    else
    {
        k = (-b + sqrt(b*b - 4*a*c)) / 2 / a;
        printf("%.4f", k);
    }
}
void FirstPlot(a, b, c)
{
    float k ;
          k = (-b + sqrt(b*b - 4*a*c)) / 2 / a;
          printf("1st root:");
          printf("%.4f\n", k);
}
void SecondPlot(a, b, c)
{
    float k ;
          k = (-b - sqrt(b*b - 4*a*c)) / 2 / a;
          printf("2st root:");
          printf("%.4f", k);
}
int main()
{
    double a, b, c ;
    int number ;
    printf("Program was made and developed by Young Vagan\n");
    printf("Enter the coefficients:");
    scanf("%lg %lg %lg", &a, &b, &c);
    printf("The amount of roots:");
    number = Plots(a, b, c);
     switch(number)
        {
            case -1 :
                printf("Infinity of roots\n");
                break;
            case 0 :
                printf("It has no roots\n");
                break;
            case 1 :
                printf("It has only one root\n");
                printf("This Root is :");
                SingleRoot(a, b, c);
                break;
            case 2 :
                printf("It has only two root\n");
                printf("This Roots are :\n");
                FirstPlot(a, b, c);
                SecondPlot(a, b, c);
                break;
        }

    return(0);

}
