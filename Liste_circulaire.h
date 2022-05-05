#ifndef LISTE_CIRCULAIRE_H_INCLUDED
#define LISTE_CIRCULAIRE_H_INCLUDED
int FullScreen ( void )
{
    keybd_event(VK_MENU,0x38,0,0);
    keybd_event(VK_RETURN,0x1c,0,0);
    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
    return 0;
}
void delay(clock_t a)
{
    clock_t depart;
    depart  = clock();
    while(clock()-depart<a)
    {

    }
}
void gotoxy(int x,int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
void intro()
{
    int i;
    char intro[]="   REALISEE PAR MISTER OUABIBA....";
     for(i=0;i<20;i++)
    {
        printf("\n");
    }
    for(i=0;i<80;i++)
    {
        printf(" ");
    }
    for(i=0;intro[i]!='\0';i++)
    {
        printf("%c",intro[i]);
        delay(60);
    }
    printf("\n");
    delay(1500);
    system("cls");
}
int menu(void)
{
    char choix;
    int c=0;
   color(7);printf("\e[?25l");//Séquence d'échappement ANSI pour les interpreters comme des commandes
   gotoxy(28,8);printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
   gotoxy(28,9);color(4);printf("³                                                                MENU PRINCIPAL                                                               ³\n");
   color(7);
   gotoxy(28,10);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
   gotoxy(27,11);printf(" ³                                                     VEUILLEZ CONFIRMER VOTRE CHOIX PAR ENTREE                                               ³\n");
   gotoxy(27,12);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,13);printf(" ³                                                                                                                                             ³\n");
   color(4);
   gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
   color(7);
   gotoxy(27,15);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,16);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
   gotoxy(27,18);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,19);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
   gotoxy(27,21);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,22);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
   gotoxy(27,24);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,25);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
   gotoxy(27,27);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,28);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
   gotoxy(27,30);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,31);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,32);printf(" ³                                                           7-Suppression d'un caractere                                                      ³\n");
   gotoxy(27,33);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,34);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,35);printf(" ³                                                           8-Chaine de consonne                                                              ³\n");
   gotoxy(27,36);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,37);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,38);printf(" ³                                                           9-Comparaison de deux chaines                                                     ³\n");
   gotoxy(27,39);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,40);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,41);printf(" ³                                                           10-Affichage de la chaine                                                         ³\n");
   gotoxy(27,42);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,43);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,44);printf(" ³                                                           11-Quitter l'Application                                                          ³\n");
   gotoxy(27,45);printf(" ³                                                                                                                                             ³\n");
   gotoxy(27,46);printf(" ³                                                                                                                                             ³\n");
   gotoxy(28,47);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
   gotoxy(29,48);puts("Selectionner votre choix ");
    do
    {

          gotoxy(38,c*3+14);
          choix = getch();
          switch(choix)
          {
              case 72: if(c>0)c--;break;
              case 80: if(c<10)c++;break;
          }
          if(c ==  0 && choix == 72)
          {
              color(4);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
          } else if(c == 1 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(4);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");

          } else if(c == 2 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(4);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
          } else if(c == 3 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(4);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(7);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
          } else if(c == 4 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(4);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
              color(7);gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
          } else if(c == 5 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(7);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
              color(4);gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
              color(7);gotoxy(27,32);printf(" ³                                                           7-Suppression d'un caractere                                                      ³\n");
          } else if(c == 6 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(7);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
              color(7);gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
              color(4);gotoxy(27,32);printf(" ³                                                           7-Suppression d'un caractere                                                      ³\n");
              color(7);gotoxy(27,35);printf(" ³                                                           8-Chaine de consonne                                                              ³\n");
          } else if(c == 7 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(7);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
              color(7);gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
              color(7);gotoxy(27,32);printf(" ³                                                           7-Suppression d'un caractere                                                      ³\n");
              color(4);gotoxy(27,35);printf(" ³                                                           8-Chaine de consonne                                                              ³\n");
              color(7);gotoxy(27,38);printf(" ³                                                           9-Comparaison de deux chaines                                                     ³\n");
          } else if(c == 8 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(7);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
              color(7);gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
              color(7);gotoxy(27,32);printf(" ³                                                           7-Suppression d'un caractere                                                      ³\n");
              color(7);gotoxy(27,35);printf(" ³                                                           8-Chaine de consonne                                                              ³\n");
              color(4);gotoxy(27,38);printf(" ³                                                           9-Comparaison de deux chaines                                                     ³\n");
              color(7);gotoxy(27,41);printf(" ³                                                           10-Affichage de la chaine                                                         ³\n");
          } else if(c == 9 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(7);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
              color(7);gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
              color(7);gotoxy(27,32);printf(" ³                                                           7-Suppression d'un caractere                                                      ³\n");
              color(7);gotoxy(27,35);printf(" ³                                                           8-Chaine de consonne                                                              ³\n");
              color(7);gotoxy(27,38);printf(" ³                                                           9-Comparaison de deux chaines                                                     ³\n");
              color(4);gotoxy(27,41);printf(" ³                                                           10-Affichage de la chaine                                                         ³\n");
              color(7);gotoxy(27,44);printf(" ³                                                           11-Quitter l'Application                                                          ³\n");
          }
          if(c == 1 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(4);gotoxy(27,14+c*3);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
          } else if(c == 2 && choix == 80 )
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(4);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
          } else if(c == 3 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(4);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
          } else if(c == 4 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(4);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
          } else if(c == 5 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(7);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
              color(4);gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
          } else if(c == 6 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(7);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
              color(7);gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
              color(4);gotoxy(27,32);printf(" ³                                                           7-Suppression d'un caractere                                                      ³\n");
          } else if(c == 7 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(7);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
              color(7);gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
              color(7);gotoxy(27,32);printf(" ³                                                           7-Suppression d'un caractere                                                      ³\n");
              color(4);gotoxy(27,35);printf(" ³                                                           8-Chaine de consonne                                                              ³\n");
          } else if(c == 8 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(7);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
              color(7);gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
              color(7);gotoxy(27,32);printf(" ³                                                           7-Suppression d'un caractere                                                      ³\n");
              color(7);gotoxy(27,35);printf(" ³                                                           8-Chaine de consonne                                                              ³\n");
              color(4);gotoxy(27,38);printf(" ³                                                           9-Comparaison de deux chaines                                                     ³\n");
          } else if(c == 9 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(7);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
              color(7);gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
              color(7);gotoxy(27,32);printf(" ³                                                           7-Suppression d'un caractere                                                      ³\n");
              color(7);gotoxy(27,35);printf(" ³                                                           8-Chaine de consonne                                                              ³\n");
              color(7);gotoxy(27,38);printf(" ³                                                           9-Comparaison de deux chaines                                                     ³\n");
              color(4);gotoxy(27,41);printf(" ³                                                           10-Affichage de la chaine                                                         ³\n");
          } else if(c == 10 && choix ==80)
          {
              color(7);gotoxy(27,14);printf(" ³                                                           1-Creation Et affichage d'une chaine de caractere                                 ³\n");
              color(7);gotoxy(27,17);printf(" ³                                                           2-Longueur d'une chaine                                                           ³\n");
              color(7);gotoxy(27,20);printf(" ³                                                           3-Copie d'une chaine dans une autre chaine                                        ³\n");
              color(7);gotoxy(27,23);printf(" ³                                                           4-Concatenation de deux chaines                                                   ³\n");
              color(7);gotoxy(27,26);printf(" ³                                                           5-Inversion casse                                                                 ³\n");
              color(7);gotoxy(27,29);printf(" ³                                                           6-Insertion d'une chaine                                                          ³\n");
              color(7);gotoxy(27,32);printf(" ³                                                           7-Suppression d'un caractere                                                      ³\n");
              color(7);gotoxy(27,35);printf(" ³                                                           8-Chaine de consonne                                                              ³\n");
              color(7);gotoxy(27,38);printf(" ³                                                           9-Comparaison de deux chaines                                                     ³\n");
              color(7);gotoxy(27,41);printf(" ³                                                           10-Affichage de la chaine                                                         ³\n");
              color(4);gotoxy(27,44);printf(" ³                                                           11-Quitter l'Application                                                          ³\n");
          }
           if(c == 0 && choix == 13)
           {
               return 1;
           } else if(c == 1 && choix == 13)
           {
               return 2;
           } else if(c == 2 && choix == 13)
           {
               return 3;
           } else if(c == 3 && choix == 13)
           {
               return 4;
           } else if(c == 4 && choix == 13)
           {
               return 5;
           } else if(c == 5 && choix == 13)
           {
               return 6;
           } else if(c == 6 && choix == 13)
           {
               return 7;
           } else if(c == 7 && choix == 13)
           {
               return 8;
           } else if(c == 8 && choix == 13)
           {
               return 9;
           } else if(c == 9 && choix == 13)
           {
               return 10;
           } else if(c == 10 && choix == 13)
           {
               return 11;
           }
    } while(1);
}

#endif // LISTE_CIRCULAIRE_H_INCLUDED
