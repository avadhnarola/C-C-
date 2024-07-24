#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();

	printf("\n Enter A :");
	scanf(" %d",&a);

	printf("\n Enter B :");
	scanf(" %d",&b);

	printf("\n Enter C :");
	scanf(" %d",&c);

	if(a==b)
	{
		if(a==c)
		{
			printf("\n A B C same");
		}
		else
		{
		   if(a>c)
		   {
		      printf("\n A B same , C is Min");
		   }
		   else
		   {
		      printf("\n A B same , C is Max");
		   }
		}
	}
	else
	{
	  if(b==c)
	  {
	     if(b>a)
	     {
	       printf("\n B C same , A is Min");
	     }
	     else
	     {
	       printf("\n B C same , A is Max");
	     }


	  }
	  else
	  {
	    if(a==c)
	    {
	      if(a>b)
	      {
		 printf("\n A C same , B is Min");
	      }
	      else
	      {
		 printf("\n A C same , B is Max");

	      }


	    }
	    else
	    {
	       if(a>b)
	       {
		  if(a>c)
		  {
		    printf("\n A B C different , A is Max");

		  }
		  else
		  {
		    printf("\n A B C different , C is Max");

		  }

	       }
	       else
	       {
		 if(b>c)
		 {
		   printf("\n A B C different , B is Max");

		 }
		 else
		 {
		   printf("\n A B C different , C is Max");

		 }

	       }
	    }
	  }
	}
getch();
}