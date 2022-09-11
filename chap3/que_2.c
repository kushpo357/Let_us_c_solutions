#include <stdio.h>
int main()
{
    int rm,sm,aj;
    printf("input Ram's age :");
    scanf("%d",&rm);
    printf("\ninput Shyam's age :");
    scanf("%d",&sm);
    printf("\ninput Ajay's age :");
    scanf("%d",&aj);

    if(rm>sm)
        {if(sm>aj)
            printf("Order according to age : Ram > Shyam > Ajay\n");
         if(sm==aj)
           printf("Order according to age : Ram > Shyam = Ajay\n");
         if(sm<aj)
           {
               if(aj<rm)
                    printf("Order according to age : Ram > Ajay > Shyam\n");
               if (aj==rm)
                    printf("Order according to age : Ram = Ajay > Shyam\n");
               else
                    printf("Order according to age : Ajay > Ram > Shyam\n");
           }           
        }
    else 
        {if(rm==sm)
            {if(sm>aj)
                printf("Order according to age : Ram = Shyam > Ajay\n");
             if(sm==aj)
                printf("Order according to age : Ram = Shyam = Ajay\n");
             if(sm<aj)
                printf("Order according to age : Ram = Ajay > Shyam\n");
            }
         else
            {if(rm>aj)
                 printf("Order according to age : Shyam > Ram > Ajay\n");
             if(rm==aj)
                 printf("Order according to age : Shyam > Ram = Ajay\n");
             else
             {
                 if(sm>aj)             
                    printf("Order according to age : Shyam > Ajay > Ram\n");
                 if(sm==aj)
                    printf("Order according to age : Ajay = Shyam > Ram\n");
                 else
                    printf("Order according to age : Ajay > Shyam > Ram\n");
             }
            }
        }
    return 0;
}
