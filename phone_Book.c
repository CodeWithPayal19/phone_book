#include<stdio.h>

int main()
{
    char n[50];    //variable declration
    int a;       //variable declartion 
    int p;
    int d;
    char add[50];

    char na[50];
    int ag;
    int ph;
    int da;
    char addr[50];

    printf("WELLCOME TO PHONE BOOK \n\n");

    printf("MENU\n");

    printf("Press 1 to add the contact\n\n");

    int x;
    printf("enter\n");
    scanf("%d",&x);

    if (x==1)
    {
        int y;
        printf("enter the number of contact to be added : ");
        scanf("%d",&y);

        if(y==1)
        {
            printf("--------------------------------------------------\n");
            printf("Name : ");
            scanf("%s",&n);
            printf("Age : ");
            scanf("%d",&a);
            printf("phone number : ");
            scanf("%d",&p);
            printf("Date of birth : ");
            scanf("%d",&d);
            printf("address : ");
            scanf("%s",&add);
            printf("--------------------------------------------------\n");

        }
        else if(y==2)
        {

            printf("--------------------------------------------------\n");
            printf("Name : ");
            scanf("%s",&n);
            printf("Age : ");
            scanf("%d",&a);
            printf("phone number : ");
            scanf("%d",&p);
            printf("Date of birth : ");
            scanf("%d",&d);
            printf("address : ");
            scanf("%s",&add);
            printf("--------------------------------------------------\n");
            

            printf("--------------------------------------------------\n");
            printf("Name : ");
            scanf("%s",&na);
            printf("Age : ");
            scanf("%d",&ag);
            printf("phone number : ");
            scanf("%d",&ph);
            printf("Date of birth : ");
            scanf("%d",&da);
            printf("address : ");
            scanf("%s",&addr);
            printf("--------------------------------------------------\n");
        
        }

        printf("press 2 to see the entered contact information\n");
        printf("press 3 to exit the phone book ");

        int z;
        printf("enter\n");
        scanf("%d",&z);

        if(z==2)
        {
            int num;
            printf("enter the number of contact to be viewed : ");
            scanf("%d",&num);

            if(num==1)
            {
                         
                   printf("--------------------------------------------------\n");
                   printf("Name : \n");
                   printf("%s",n);
                   printf("Age : \n");
                   printf("%d",a);
                   printf("phone number :\n ");
                   printf("%d",p);
                   printf("Date of birth : \n");
                   printf("%d",d);
                   printf("address :\n ");
                   printf("%d",add);
                   printf("--------------------------------------------------\n");

            }
            else if(num==2)
            {
              
                   printf("--------------------------------------------------\n");
                   printf("Name : ");
                   printf("%s",n);
                   printf("Age : ");
                   printf("%d",a);
                   printf("phone number : ");
                   printf("%d",p);
                   printf("Date of birth : ");
                   printf("%d",d);
                   printf("address : ");
                   printf("%s",add);
                   printf("--------------------------------------------------\n");
            

                   printf("--------------------------------------------------\n");
                   printf("Name : ");
                   printf("%s",na);
                   printf("Age : ");
                   printf("%d",ag);
                   printf("phone number : ");
                   printf("%d",ph);
                   printf("Date of birth : ");
                   printf("%d",da);
                   printf("address : ");
                   printf("%s",addr);
                   printf("--------------------------------------------------\n");

            }

        }

        else if(z==3)
        {
            printf("are you sure you want to close the phone book\n");
            printf("press 1 for yess\n");
            printf("press 2 for noo\n");

            int ans;
            printf("enter \n");
            scanf("%d",&ans);

            if(ans==1)
            {
                printf("the phone book has closed\n ");
                printf("have a good day\n");
            }
            else if(ans==2)
            {
                printf("the phone book has not closed\n");
                printf("you can continue\n");
            }
        }


    }

    else
    {
       printf("in-valid");
    }
    return 0;
    
}