#include <stdio.h>
#include <stdlib.h>

int coef[10];

float val1,val2;

/*int  get_coef()
{ int coef[10];
    int deg,i;
    printf("enter the degree\n");
    scanf("%d",&deg);
    printf("enter the coefficients \n");

     for (i=0;i<=deg;i++)
        scanf("%d",&coef[i]);
        return coef[i];
}*/

float eval (int deg,float x)
{
    int i;//coef[10];
    //int coef[10];
      float total = 0;

  /* printf("enter the value of coefficients\n");
    for (i=0;i<=deg;i++)
      {
          scanf("%d",&coef[i]);

      }
*/
      //printf("enter the value of x to evaluate the polynomial\n");
      //scanf("%f",&x);

      for (i=0;i<deg;i++)
      {
          total = (total+coef[i])*x;

      }
      total = total+coef[deg];

    printf("the value of the polynomial is :\n");
    printf("%f\n",total);
    return total;
    }

    int reg_fal(float val1,float val2,int deg)
    {
        float f1,f2,f3,val3;
       // int deg;
        int n=0;//value1,value2,value_m;

       // printf("enter the degree\n");
      //  scanf("%d",&deg);

   while(n<1000)
    {
        //mid = (val1+val2)/2;
        f1 = eval(deg,val1);
         f2 = eval(deg,val2);
        val3 = (((val1*f2)-(val2*f1))/(f2-f1));

        printf("the val3 is %f\n",val3);
            f3 = eval(deg,val3);


         printf("f1 = %f\n",f1);
         printf("f2 = %f\n",f2);
         printf("f3 = %f\n",f3);
        if ((f1*f3)<0)
            {
        printf("the new interval is [%f,%f]\n",val1,val3);
          val2 = val3;
        }
        else if ((f3*f2)<0){
         printf("the new interval is [%f,%f]\n",val3,val2);
             val1 = val3;
        }


       if (eval(deg,val3)==0.000000){
        printf("......../////the final value /////............\n");
                printf("the final value of polynomial is :%f\n",val1);
       return 0;}
                n++;

    }

    /*if (val1==val2)
    {
        printf("the value of the polynomial is : %d\n",val1);
    }*/

return 0;

    }

 /* printf("enter the value of coefficients\n");
    for (i=0;i<deg;i++)
      {
          scanf("%d",&coef[i]);

      }
      */


      int main()
    {
            float x,total=1;
         // float val1,val2;
            int deg,i,ch=0;

while (ch!=1){
        // while (total>0)
            {
                printf("enter the degree\n");
         scanf("%d",&deg);
         printf("enter the value of x\n");
         scanf("%f",&x);
         total = eval(deg,x);
         printf("total = %f\n",total);
            }

         if (total>0)

        printf("the +ve value is %f\n",total);
        else
         printf(" the -ve value is %f\n",total);

      printf("enter 1 to continue 0 to exit\n");
      scanf("%d",&ch);

}
     printf("enter the value 1: \n");
     scanf("%f",&val1);
     printf("enter the value 2: \n");
     scanf("%f",&val2);

 printf("enter the degree\n");
 scanf("%d",&deg);

        printf("enter the coefficients :\n");
         for (i=0;i<=deg;i++)
         {
             scanf("%d",&coef[i]);
         }


     while (1)
     {
         printf("enter the choice\n");
         printf("1>value of poly\n2>regular falsi\n3>exit\n");
         scanf("%d",&ch);
         switch (ch)
         {
            // case 0 : get_coef();
             case 1:
                 printf("enter the val of x\n");
                 scanf("%f",&x);
                 eval(deg,x);
                         break;
             case 2:
                  // printf("enter the val1 and val2\n");
                   //scanf("%f%f",&val1,&val2);
                reg_fal(val1,val2,deg);
                       break;
             case 3: exit(0);
                         break;

         }
     }


      }

