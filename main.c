#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<time.h>
#include"Liste_circulaire.h"
typedef struct chaine
{
	char data;
	struct chaine *prev;
	struct chaine *next;
} chaine;
//entrer une chaine
void saisie(chaine **head,char c)
{
	chaine *b = (chaine *)malloc(sizeof(chaine));
	if(b)
	{
		b->data = c;
		b->next = (*head);
		b->prev = (*head)->prev;
		b->prev->next = b;
		(*head)->prev = b;
	} else printf("creation impossible");
}
//affichage d'une chaine :
void affichage(chaine *head)
{
	chaine *temp = head->next;
	int i=0;
	gotoxy(37,16);printf("Votre Chaine de caractere : ");
	while(temp != head)
	{
         gotoxy(28,15);printf("\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xbf");
		 gotoxy(28,16);printf("\xb3");gotoxy(100,16);printf("\t\t\t\t\t  \xb3");
		 gotoxy(70+i,16);printf("%c",temp->data);
         gotoxy(28,17);printf("\xc0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xd9");
		 temp = temp->next;
		 i++;
	}
}
//copie d'une chaine dans une autre
void Copie(chaine **head,chaine *head2)
{
    chaine *temp = (*head)->next;
    chaine *temp2 = (head2)->next;
    while(temp2 != head2)
    {
        saisie(head,temp2->data);
        temp2 = temp2->next;
    }
}
int longueurChaine(chaine *head)
{
	 chaine *temp = head->next;
	 int c=0;
	 if(temp != head)
	 {
	 	 while(temp != head)
	 	 {
	 	    c++;
			temp = temp->next;
		 }
		 return c;
	 } else return 0;
}
//concatenation de deux chaines :
chaine* concatenationChaine(chaine **head1,chaine **head2)
{
   chaine *head3 = (chaine *)malloc(sizeof(chaine));
   chaine *temp = (*head1)->next;
   chaine *temp2 = (*head2)->next;
   chaine *temp3;
   if(head3)
   {
   	head3->next = head3;
   	head3->prev = head3;
       while(temp != * head1 )
	   {
	   	   saisie(&head3,temp->data);
	   	   temp = temp->next;
	   	   if(temp == *head1)
           {
               temp3 = head3->next;
               while(temp3 != head3)
               {
                   temp3 = temp3->next;
               }
               while(temp2 != *head2)
               {
                   saisie(&temp3,temp2->data);
                   temp2 = temp2->next;
               }
           }
	   }
   }
   return head3;
}
//inversion :
/*chaine *invertion(chaine *head)
{
	 chaine *temp = (head)->prev;
	 chaine *temp2;
	 chaine *head3 = (chaine *)malloc(sizeof(chaine));
	 head3->next = head3;
	 head3->prev = head3;
	 while(temp != head)
	 {
	 	 saisie(&head3,temp->data);
	 	 temp = temp->prev;
	 }
	 temp = (head)->next;
	 temp2 = (head3)->next;
	 while(temp != head)
	 {
	 	temp->data = temp2->data;
	 	temp = temp->next;
	 	temp2 = temp2->next;
	 }
	 return head;
}*/
//chaine en miniscule et majiscule :
void invertionCasse(chaine **head)
{
	//si le caractere est majicule :
	chaine *temp = (*head)->next;
	if(temp == *head)
	{
		return;
	} else
	{
		 while(temp != *head)
		 {
             if(isalpha(temp->data) != 0 )
             {
                 if(isupper(temp->data))
                   {
                         temp->data = tolower(temp->data);
                   }
                 else
                 {
                      temp->data = toupper(temp->data);
                 }
             }
			 temp = temp->next;
		 }
	}
}
//syppression des occurences d'un caract�re:
void suppression(chaine **head,char caractere)
{
	chaine *temp = (*head)->next;
	if(temp == *head)
	{
		 return;
	} else
	{
		while(temp != *head)
		{
			 if(caractere == tolower(temp->data))
			 {

				 temp->prev->next = temp->next;
				 temp->next->prev = temp->prev;
				 free(temp);
			 }
			 temp = temp->next;
		}

	}
}
//chaine de consonne :
chaine* Consonne(chaine **head)
{
   chaine *conso = (chaine *)malloc(sizeof(chaine));
   chaine *temp = (*head)->next;
   if(conso)
   {
       conso->next = conso;
       conso->prev = conso;
       while(temp != *head)
	   {
           if(isalpha(temp->data))
           {
               if(tolower(temp->data) != 'a' && tolower(temp->data) != 'e' && tolower(temp->data) != 'i' && tolower(temp->data) != 'o' && tolower(temp->data) != 'u' && tolower(temp->data) != 'y')
                   {
                       saisie(&conso,temp->data);
                   }
           }
		   temp = temp->next;
	   }
	   return conso;
   } else return NULL;
}

//insertion d'une chaine dans une autre
chaine * insertion(chaine *head,chaine *head2)
{
	 int position;
	 chaine *temp = (head)->next;
	 chaine *temp2 = (head2)->prev;
	 chaine *b;
	 int i = 0;
	 int j;
	 int flag = 0;
	 gotoxy(28,14);printf("Donner une position : ");
	 scanf("%d",&position);
     if(position == 1)
     {

         while(temp2 != head2)
         {
              b = (chaine *)malloc(sizeof(chaine));
             b->data = temp2->data;
             b->next = (head)->next;
             b->prev = (head);
             (head)->next->prev = b;
             (head)->next = b;
             temp2 = temp2->prev;
         }
         return head;
     } else
     {
         while(temp != head)
         {
            i++;
            if(i == position-1)
            {
                while(temp2 != head2)
                {
                    b = (chaine *)malloc(sizeof(chaine));
                    b->data = temp2->data;
                    b->next = temp->next;
                    b->prev = temp;
                    temp->next->prev = b;
                    temp->next = b;
                    temp2 = temp2->prev;
                }
                flag = 1;
                break;
            } else
            {
                temp = temp->next;
            }
         }
         if(flag == 1)
         {
             return head;
         }
     }
}
//comparaison de deux chaines
int Comparaison(chaine *head,chaine *head2,char *c1,char *c2)
{
	chaine *temp = (head)->next;
	chaine *temp2 =(head2)->next;
	int i;
	//copier les chaines :
	for(i=0;i<longueurChaine(head);i++)
	{
        while(temp != head)
        {
            c1[i] = temp->data;
            temp = temp->next;
            break;
        }
	}
	for(i=0;i<longueurChaine(head2);i++)
    {
        while(temp2 != head2)
        {
            c2[i] = temp2->data;
            temp2 = temp2->next;
            break;
        }
    }
    temp = (head)->next;
	temp2 =(head2)->next;
	if(longueurChaine(head) == longueurChaine(head2))
    {
        while(temp!=head)
        {
            if(temp->data > temp2->data)
            {
                return 1;
            } else if(temp->data < temp2->data)
            {
                return -1;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        return 0;
    } else
    {
        if(longueurChaine(head) > longueurChaine(head2))
        {
            return 1;
        } else
        {
            return -1;
        }
    }
}

int main()
{
	chaine *head = (chaine *)malloc(sizeof(chaine));
	chaine *headCo = (chaine *)malloc(sizeof(chaine));
	chaine *head2 = (chaine *)malloc(sizeof(chaine));
	chaine *head3 = (chaine *)malloc(sizeof(chaine));
	chaine *head4 = NULL;
	char data[256];
	char data2[256];
	char data3[256];
	char data4[256];
	char lettre;
	int  choix;
	int i;
	FullScreen();
    intro();
    head3->next = head3;
    head3->prev = head3;
    head2->next = head2;
    head2->prev = head2;
    head->next = head;
    head->prev = head;
	if(head && head2&& head3)
	{
         do
         {
             system("cls");
             choix  =  menu();
             switch(choix)
             {
                 case 1:
                 {
                         system("cls");
                         head->next = head;
                         head->prev = head;
                         gotoxy(28,10);printf("Donner une chaine ! ");
                         fflush(stdin);
                         gets(data);
                         for(i=0;i<strlen(data);i++)
                         {
                             saisie(&head,data[i]);
                         }
                         affichage(head);
                         getch();
                         system("cls");
                         head3->next = head3;
                         head3->prev = head3;
                         gotoxy(28,10);printf("Donner une deuxieme chaine a manipuler ! ");
                         fflush(stdin);
                         gets(data4);
                         for(i=0;i<strlen(data4);i++)
                         {
                             saisie(&head3,data4[i]);
                         }
                         affichage(head3);
                 } break;
                 case  2:
                    {
                        system("cls");
                        color(7);
                        if(head->next != head && head->prev !=head)
                        {
                            gotoxy(28,15);printf("\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xbf");
                            gotoxy(28,16);printf("\xb3");gotoxy(30,16);printf("\t\tla longueur de premiere chaine de caractere est : %d",longueurChaine(head));gotoxy(100,16);printf("\t\t\t\t\t  \xb3");
                            gotoxy(28,17);printf("\xc0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xd9");
                            getch();
                            system("cls");
                            gotoxy(28,15);printf("\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xbf");
                            gotoxy(28,16);printf("\xb3");gotoxy(30,16);printf("\t\tla longueur de deuxieme chaine de caractere est : %d",longueurChaine(head3));gotoxy(100,16);printf("\t\t\t\t\t  \xb3");
                            gotoxy(28,17);printf("\xc0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xd9");
                        } else
                        {
                            gotoxy(28,16);printf("Veuillez Creer une chaine de caractere");
                        }
                    } break;
                 case 3:
                    {
                        system("cls");
                        if(head->next != head && head->prev != head)
                        {
                            Copie(&head2,head3);
                            gotoxy(28,10);printf("Chaine de caractere copier ");
                            affichage(head2);
                        } else
                        {
                            gotoxy(28,16);printf("Veuillez Creer une chaine de caractere");
                        }

                    } break;
                 case 4:
                    {
                        system("cls");

                        //concatenation de deux chaines :
                        if(head->next != head && head->prev != head)
                        {
                            headCo = concatenationChaine(&head,&head3);
                            affichage(headCo);
                        } else
                        {
                            gotoxy(28,16);printf("Veuillez Creer une chaine de caractere");
                        }

                    } break;
                 case 5:
                    {
                        system("cls");
                        if(head3->prev != head3 && head3->next != head3)
                        {
                            invertionCasse(&head3);
                            affichage(head3);
                        } else
                        {
                            gotoxy(28,16);printf("Veuillez Creer une chaine de caractere");
                        }
                    } break;
                 case 6:
                    {
                         system("cls");
                        if(head->next != head && head->prev)
                        {
                            head = insertion(head,head3);
                            affichage(head);
                        } else
                        {
                            gotoxy(28,16);printf("Veuillez Creer une chaine de caractere");
                        }
                    } break;
                 case 7:
                    {
                        system("cls");
                            if(head3->next != head3 && head3->prev != head3)
                            {
                                gotoxy(28,10);printf("Donner un caractere : ");
                                fflush(stdin);
                                scanf("%c",&lettre);
                                suppression(&head,tolower(lettre));
                                affichage(head);
                            } else
                            {
                                gotoxy(28,16);printf("Veuillez Creer une chaine de caractere");
                            }
                   } break;
                case 8:
                {
                    system("cls");
                        if(head->next != head && head->prev != head)
                        {
                            head4 = Consonne(&head);
                            affichage(head4);
                        } else
                        {
                            gotoxy(28,16);printf("Veuillez Creer une chaine de caractere");
                        }
                } break;
                case 9:
                    {
                        system("cls");
                        if(head->next != head && head->prev != head)
                        {
                            if(Comparaison(head,head3,data,data4) == 0)
                            {
                                gotoxy(28,16);printf("les deux chaines sont egaux %s = %s",data,data4);
                            } else if(Comparaison(head,head3,data,data4) == -1)
                            {
                                gotoxy(28,16);printf("la Premiere chaine %s est plus petite que la deuxieme chaine %s",data,data4);
                            } else
                            {
                                gotoxy(28,16);printf("la premiere chaine %s est plus grande que la deuxieme chaine %s",data,data4);
                            }
                        } else
                        {
                            gotoxy(28,16);printf("Veuillez Creer une chaine de caractere");
                        }
                    } break;
                case 10:
                    {
                            system("cls");
                            if(head->next != head && head->prev != head)
                            {
                                affichage(head);
                                getch();
                                system("cls");
                                affichage(head3);
                            } else
                            {
                                gotoxy(28,16);printf("Veuillez Creer une chaine de caractere");
                            }
                    } break;
                case 11:
                {
                     system("cls");
                     exit(EXIT_SUCCESS);
                } break;
             }
          getch();
         } while( choix!=  0);
	} else printf("Creation Impossible");
    return 0;
}

