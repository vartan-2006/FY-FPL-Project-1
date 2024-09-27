#include <stdio.h>
 main()
{
    int a,b,c;
    printf("Enter quantity of goods in the warehouse:"); 
    scanf("%d", &a);
    if (a<5000)
    {
        printf("Please restock the warehouse urgently\n");
        b=10000-a;
        printf("Enter 0 to restock, press 1 to exit :"); 
        scanf("%d", &c);
         switch (c)
         {
            case 0:
            printf("You have placed order of %d units\n",b);
            break;
         case 1:
            printf("You have exited\n");
            break;
         
         default:printf("Invalid input.");
            break;
         }
    
    }
    else if (a>=5000&&a<10000)
    {
        printf("Warehouse is not full but restocking is not urgent\n");
        b=10000-a;
        printf("Enter 0 to restock, press 1 to exit:"); 
        scanf("%d", &c);
         switch (c)
         {
            case 0:
            printf("You have placed order of %d units\n",b);
            break;
         case 1:
            printf("You have exited\n");
            break;
         
         default:printf("Invalid input.");
            break;
         }
    }
    else if (a=10000)
    {
        printf("Warehouse is full");
    }
    else if (a<0||a>10000)
    {
        printf("Entered value is greater than 10000 or less than 0");
    }
  return 0;  
}