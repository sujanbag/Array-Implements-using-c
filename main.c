#include <stdio.h>
#include <stdlib.h>

int n,ar[100];


void display()
{
    int i;
    printf("\n [**] The Numbers of Array are : \n");
    printf("    ____________________\n");
    printf("[*] |Position | Value  |\n");
    for(i=0;i<n;i++)
    {
        printf("\n      %d       | %d       ",i,ar[i]);
    }
    printf("\n    ____________________\n");
}

void insert()
{
    int i,result[n+1],value,pos;

    printf("[++]Enter Value and Position : ");
    scanf("%d%d",&value,&pos);

    for(i=0;i<pos;i++)
    {
        result[i]=ar[i];
    }
    result[pos]=value;
    for(i=pos;i<n;i++)
    {
        result[i+1]=ar[i];
    }
    for(i=0;i<n+1;i++)
    {
        ar[i]=result[i];
    }
    n=n+1;
    //display();
}


void deleteVal()
{
    int i,position;
    printf("[--] Enter Position ");
    scanf("%d",&position);
    for (i=position;i<n;i++)
    {
        ar[i]=ar[i+1];
    }
    n=n-1;

}


void sort()
{
    int i,j,a;
    for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (ar[i] > ar[j])
                {

                    a =  ar[i];
                    ar[i] = ar[j];
                    ar[j] = a;

                }

            }

        }

        display();
}

void SearchValue()
{
    int c;
    int search;
    printf("[++] Enter Value ");
    scanf("%d",&search);
    for (c = 0; c < n; c++)
    {
        if (ar[c] == search)    /* If required element is found */
        {
            printf("[?] %d is present at location %d.\n", search, c+1);
            break;
        }
    }
    if (c == n)
        printf("[!] %d isn't present in the array.\n", search);
}

int main()
{
   // printf("Hello world!\n");
   int i,sml=1,input;
   char s[]={0xf0,0x9f,0x98,0x8e,0};
   printf("[*] Enter Number Of Eliments : ");
   scanf("%d",&n);
   printf("[*] Enter %d Number Of Eliment :\n ",n);
   for(i=0;i<n;i++)
   {

       scanf("%d",&ar[i]);
       if(i<n-1)
            printf("[-] Enter Remain %d Number of Element : \n",n-(i+1));
   }

   printf("[*] Number Add In Array Complete ");

   while(1)
   {
       printf("\n|___________Operation________________|\n");
       printf("|-----------1.Insert-----------------|\n");
       printf("|-----------2.Delete-----------------|\n");
       printf("|-----------3.Sort-------------------|\n");
       printf("|-----------4.Display----------------|\n");
       printf("|-----------5.Search-----------------|\n");
       printf("|-----------6.Exit-------------------|\n");
       printf("\n\n[+] Enter Your Choice : ");
       scanf("%d",&input);
       switch(input)
       {
       case 1:
            insert();
            break;
       case 2:
            deleteVal();
            break;
       case 3:
            sort();
            break;
       case 4:
            display();
            break;
       case 5:
            SearchValue();
            break;
       case 6:
            exit(0);
       default:
            printf("[!!!!!]  Enter a Valid Input");
       }


   }

    return 0;
}
