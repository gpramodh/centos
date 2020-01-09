#include<stdio.h>

int sort ()
{
 int num[30],i,j,temp,n;
 printf("\n\nEnter the value of size\n");
 scanf("%d", &n);
 printf("Enter the numbers \n");

 for (i = 0; i < n; ++i)
 scanf("%d", &num[i]);
 for (i = 0; i < n; ++i) 
     {
		for (j = i + 1; j < n; ++j) 
            {
                if (num[i] < num[j]) 
                {
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
       }

  printf("The output\n");
  for (i = 0; i < n; ++i) 
    {
       printf("%d ", num[i]);
    }
 printf("\n");
 return 0;
}




