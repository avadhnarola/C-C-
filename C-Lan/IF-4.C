#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e;
	clrscr();

	printf("\n Enter A : ");
	scanf("%d",&a);

	printf("\n Enter B : ");
	scanf("%d",&b);

	printf("\n Enter C : ");
	scanf("%d",&c);

	printf("\n Enter D : ");
	scanf("%d",&d);

	printf("\n Enter E : ");
	scanf("%d",&e);

	if(a>b)
	{
	   if(a>c)
	   {
		if(a>d)
		{
		  if(a>e)
		  {
		  printf("\n A is Max");
		  }
		  else
		  {
		   printf("\n E is Max");

		  }
		}
		else
		{
		  if(d>e)
		  {
		   printf("\n D is Max");
		  }
		  else
		  {
		   printf("\n E is Max");

		  }

		}
	   }
	   else
	   {
	      if(c>d)
	      {
		if(c>e)
		{
		  printf("\n C is Max");
		}
		else
		{
		  printf("\n D is max");
		}

	      }
	      else
	      {
		if(d>e)
		{
		  printf("\n D is Max");
		}
		else
		{
		  printf("\n E is Max");
		}

	      }

	   }
	}
	else
	{
	  if(b>c)
	  {
	    if(b>d)
	    {
	      if(b>e)
	      {
	       printf("\n B is Max");
	      }
	      else
	      {
	       printf("\n E is Max");
	      }

	    }
	    else
	    {
	      if(d>e)
	      {
		printf("\n D is Max");
	      }
	      else
	      {
		printf("\n E is Max");
	      }

	    }
	  }
	  else
	  {
	    if(c>b)
	    {
	       if(c>e)
	       {
		 printf("\n C is Max");
	       }
	       else
	       {
		 printf("\n E is Max");
	       }
	    }
	    else
	    {
	       if(d>e)
	       {
		  printf("\n D is Max");
	       }
	       else
	       {
		  printf("\n E is Max");
	       }
	    }
	  }
	}
getch();
}