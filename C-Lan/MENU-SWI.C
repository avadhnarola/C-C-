
#include<stdio.h>
#include<conio.h>

void main()

{
	int ch,ah,sh,oh,bh;
	clrscr();

	printf("\n ==========================");
	printf("\n 1. Gujrati");
	printf("\n 2. Punjabi");
	printf("\n 3. Rajasthani");
	printf("\n 4. Fastfood");
	printf("\n ==========================");



	printf("\n enter your choise=");
	scanf("%d" ,&ch);


	switch(ch)

	{

		case 1:
			printf("\n ===========================");
			printf("\n 1. Undhiyu Puri");
			printf("\n 2. Dal Dhokli");
			printf("\n 3. Ras-Puri");
			printf("\n 4. Dal Bhat");
			printf("\n 5. Chas-Papad");
			printf("\n ===========================");


			printf("\n enter your choise=");
			scanf("%d" ,&ah);


			switch(ah)

			{
				case 1:
					    printf("\n you select -- Udhiya puri");
					    break;

				case 2:
					    printf("\n you select  -- Dal Dhokli");
					    break;

				case 3:
					    printf("\n you select -- Ras-Puri");
					    break;

				case 4:
					    printf("\n you select -- Dal-Bhat");
					    break;

				case 5:
					    printf("\n you select -- Chas-Papad");
					     break;
				default:
					printf("\n Invalid Choice ");
					break;


						}
						break;
		case 2:
				printf("\n ==========================");
				printf("\n 1. kaju-Kari");
				printf("\n 2. Kaju-Masala");
				printf("\n 3. Punjabi Lassi");
				printf("\n 4. Oil Nan");
				printf("\n 5. Kathoyavadi Chas");
				printf("\n 6. Thums-up");
				printf("\n ==========================");


					printf("\n Enter Your Choise = ");
					scanf("%d",&sh);


			    switch(sh)

			    {
					case 1:
							printf("\n you select -- Kaju-Kari");
							break;
					case 2:
							printf("\n you select -- Kaju-Masala");
							break;
					case 3:
							printf("\n you select -- Punjabi Lassi");
							break;
					case 4:
							printf("\n you select -- Oil Nan");
							break;
					case 5:
							printf("\n you select -- Kathiyavadi Chas");
							break;
					case 6:
							printf("\n you select -- Thums-up");
							break;
					default:
						printf("\n Invalid Choice ");
						break;
			    }
			    break;


		case 3:

				printf("\n===============================");
				printf("\n 1. Dal Bati");
				printf("\n 2. Full-Dish");
				printf("\n 3. Dal-Dhokli");
				printf("\n 4. Thums-up");
				printf("\n 5. Shak-Puri");
				printf("\n===============================");

					printf("\n Enter Your Choise");
					scanf("%d",&oh);

					 switch(oh)
					 {
						case 1:
							printf("\n you select -- Dal Bati");
							break;
						case 2:
							printf("\n you select -- Full-Dish");
							break;
						case 3:
							printf("\n you select -- Dal-Dhokli");
							break;
						case 4:
							printf("\n you select -- Thums-up");
							break;
						 case 5:
							printf("\n you select -- Shak-Puri");
							break;

						 default:
							printf("\n Invalid Choisce ");
							break;
			    }
			    break;


		case 4:
				printf("\n============================");
				printf("\n 1. Pizza");
				printf("\n 2. Burger");
				printf("\n 3. Sandwich");
				printf("\n 4. Hotdog");
				printf("\n 5. Garlic Bread");
				printf("\n 6. Franki");
				printf("\n============================");

					printf("\n Enter Your Choise = ");
					scanf("%d",&bh);

					   switch(bh)

					  {

						 case 1:
							printf("\n you select -- Pizza");
							break;
						 case 2:
							printf("\n you select -- Burger");
							break;
						case 3:
							printf("\n you select -- Sandwich");
							break;
						case 4:
							printf("\n you select -- Hotdog");
							break;
						case 5:
							printf("\n you select -- Garlic Bread");
							break;
						case 6:
							printf("\n you select -- Franki");
							break;
						default:
							printf("\n Invalid Choise");
					  }
					  break;



	    default:

						printf("\n Invalid Choice");




	}
getch();
}
