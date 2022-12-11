#include <stdio.h>
#include <ctype.h>


void bfast();
void lunch();
void dinner();
void m_m();
void exit();

int num;
float price;
float total;
char choice;
int again;
FILE *fp;

void main()
{
    fp = fopen("amo.txt","w");

   if(fp == NULL)
   {
      printf("Error!");
      exit(1);
   }
	m_m();

                 fclose(fp);
}

void m_m()
{
	char choice = ' ' ;

  printf("                Welcome to DELTACO Restaurant.          \n ");
  printf("             +============================+          \n\n");
  printf("  ** Please select the meal that you would like to purchase. ** \n\n");
  printf("\t\t      [A] Breakfast\n\n\n");
  printf("\t\t      [B] Lunch\n\n\n");
  printf("\t\t      [C] Dinner\n\n\n");
  printf("Enter your choice here : ");
  scanf("%c", &choice);
  system("cls");
		{
		if (toupper(choice) == 'A' )
		  bfast();
		else
			if (toupper(choice) == 'B')
				  lunch();
			else
				if (toupper(choice) == 'C')
					  dinner();
					  else
						  if (toupper(choice) != 'A' , 'B' , 'C' , 'D')
						  {
							  m_m();
						  }
	}
}
void bfast()
{
  int choice = 0;
  int quantity = 0;
  int again = 0;

  fflush(stdin);
  printf("                Welcome to DELTACO Restaurant.          \n ");
  printf("             +============================+          \n\n");
  printf("                  *  Breakfast Menu  * \n\n");
  printf("  ** Please select the food that you would like to purchase. ** \n\n");
  printf("\t\t   [1] Toast & Tea - TK 15.00\n");
  printf("\t\t   [2] Egg Muffin - TK 25\n");
  printf("\t\t   [3] Ruti & Daal-Bhaji - TK 20\n");
  printf("Enter your choice here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  total = 15.00 * quantity ;
	   printf("\n\nYour total amount is TK%.2f ,  please pay at the counter.\n Thank you so much for visiting us. \n Please do come again.\n\n\n ", total);
	   fprintf(fp,"%f",total);

	   printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
			scanf("%d", &again);
			system("cls");
			 if (again == 1 )
				bfast();
			 else
				 if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				}



      }
	else
		  if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  total = 25 * quantity ;
		  printf("\n\nYour total amount is TK%.2f , Please pay at the counter. \n Thank you so much for visiting us. \n Please do come again.\n\n\n ", total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		    fprintf(fp,"%f",total);

			scanf("%d", &again);
			system("cls");
			 if (again == 1 )
				bfast();
			 else if (again == 2 )
				m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				}
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 20 * quantity ;
			  printf("\n\nYour total amount is TK%.2f , Please pay at the counter. \n Thank you so much for visiting us. \n Please do come again.\n\n\n ", total);
		       printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		       fprintf(fp,"%f",total);

			   scanf("%d", &again);
			   system("cls");
			  if (again == 1 )
				{
				bfast();
				 }
			  else
				  if (again == 2 )
				{
				m_m();
				}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
					}
			  }
			  else
					if (choice != 1 , 2 , 3 )
						{
						fflush(stdin);
						system("cls");
						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						bfast();
						}
    }
  }

void lunch()
{
  int choice;
  int quantity;
  int again;


  printf("                Welcome to DELTACO Restaurant.          \n ");
  printf("             +============================+          \n\n");
  printf("                   *  Lunch Menu  * \n\n");
  printf("  ** Please select the food that you would like to purchase. ** \n\n");
  printf("\t\t   [1] Fried Rice with Chiken Curry - TK 130\n");
  printf("\t\t   [2] Fried Rice with Beef Curry- TK 120\n");
  printf("\t\t   [3] Rice with Fish Curry- TK 95\n");
  printf("Enter your choice here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  total = 130* quantity ;
	  printf("\n\nYour total amount is TK%.2f , Please pay at the counter. \n Thank you so much for visiting us.\n Please do come again.\n\n\n ", total);
	  fprintf(fp,"%f",total);

	  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			lunch();
		else
			if (again == 2 )
				m_m();
		else
			if (again != 1 , 2)
			{
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			}
		}
      }
	else
		  if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  total = 120 * quantity ;
		  printf("\n\nYour total amount is TK%.2f , Please pay at the counter. \n Thank you so much for visiting us. \n Please do come again.\n\n\n ", total);
		  fprintf(fp,"%f",total);

		  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			lunch();
		else
			if (again == 2 )
				m_m();
		else
			if (again != 1 , 2)
			{
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			}
		}
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 95 * quantity ;
			  printf("\n\nYour total amount is TK%.2f , Please pay at the counter. \n Thank you so much for visiting us. \n Please do come again.\n\n\n ", total);
			   fprintf(fp,"%f",total);

			   {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else
					if (again == 2 )
						m_m();
				else
					if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
					}
	           }
			  }
				 else
					 if (choice != 1 , 2 , 3)
						{
						fflush(stdin);
						system("cls");
						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						lunch();
						}
	  }
}
void dinner()
{
  int choice;
  int quantity;
  int again;


  printf("                Welcome to DELTACO Restaurant.          \n ");
  printf("             +============================+          \n\n");
  printf("                    *  Dinner Menu  * \n\n");
  printf("  ** Please select the food that you would like to purchase. ** \n\n");
  printf("\t\t   [1] Set Menu(7 items) - TK 250\n");
  printf("\t\t   [2] Spagetti - TK 125\n");
  printf("\t\t   [3] Chicken Burger - TK 150\n");
  printf("Enter your choice here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  total = 250 * quantity ;
	  printf("\n\nYour total amount is TK%.2f , Please pay at the counter. \n Thank you so much for visiting us. \n Please do come again.\n ", total);
	   fprintf(fp,"%f",total);

	    {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			dinner();
		else
			if (again == 2 )
				m_m();
		else
			if (again != 1 , 2)
			{
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			}
	    }
      }
	else
		  if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  total = 125 * quantity ;
		  printf("\n\nYour total amount is RM%.2f , Please pay at the counter. \n Thank you so much for visiting us. \nPlease do come again.\n ", total);
		   fprintf(fp,"%f",total);

		    {
			printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
			scanf("%d", &again);
			system("cls");
			if (again == 1 )
				dinner();
			else
				if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				}
	        }
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 150 * quantity ;
			  printf("\n\nYour total amount is TK%.2f , Please pay at the counter. \n Thank you so much for visiting us. \n Please do come again.\n\n\n ", total);
			   fprintf(fp,"%f",total);

			    {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else
					if (again == 2 )
						m_m();
				else
					if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
					}
				 }
			  }
                else
					 if (choice != 1 , 2 , 3)
						{
						fflush(stdin);
						system("cls");
						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						dinner();
						}
  }
}

