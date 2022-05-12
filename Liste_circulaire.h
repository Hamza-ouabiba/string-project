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
    char intro[]="   REALISEE PAR HAMZA OUABIBA....";
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
   color(7);printf("\e[?25l");//S�quence d'�chappement ANSI pour les interpreters comme des commandes
   gotoxy(28,8);printf("\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xc4\xbf");
   gotoxy(28,9);color(4);printf("\xb3                                                                MENU PRINCIPAL                                                               \xb3\n");
   color(7);
   gotoxy(28,10);printf("\xc3\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xb4");
   gotoxy(27,11);printf(" \xb3                                                     VEUILLEZ CONFIRMER VOTRE CHOIX PAR ENTREE                                               \xb3\n");
   gotoxy(27,12);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,13);printf(" \xb3                                                                                                                                             \xb3\n");
   color(3);
   gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
   color(7);
   gotoxy(27,15);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,16);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
   gotoxy(27,18);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,19);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
   gotoxy(27,21);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,22);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
   gotoxy(27,24);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,25);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
   gotoxy(27,27);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,28);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
   gotoxy(27,30);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,31);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,32);printf(" \xb3                                                           7-Suppression d'un caractere                                                      \xb3\n");
   gotoxy(27,33);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,34);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,35);printf(" \xb3                                                           8-Chaine de consonne                                                              \xb3\n");
   gotoxy(27,36);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,37);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,38);printf(" \xb3                                                           9-Comparaison de deux chaines                                                     \xb3\n");
   gotoxy(27,39);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,40);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,41);printf(" \xb3                                                           10-Affichage de la chaine                                                         \xb3\n");
   gotoxy(27,42);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,43);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,44);printf(" \xb3                                                           11-Quitter l'Application                                                          \xb3\n");
   gotoxy(27,45);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(27,46);printf(" \xb3                                                                                                                                             \xb3\n");
   gotoxy(28,47);printf("\xc0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xd9");
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
              color(3);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
          } else if(c == 1 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(3);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");

          } else if(c == 2 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(3);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
          } else if(c == 3 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(3);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(7);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
          } else if(c == 4 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(3);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
              color(7);gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
          } else if(c == 5 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(7);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
              color(3);gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
              color(7);gotoxy(27,32);printf(" \xb3                                                           7-Suppression d'un caractere                                                      \xb3\n");
          } else if(c == 6 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(7);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
              color(7);gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
              color(3);gotoxy(27,32);printf(" \xb3                                                           7-Suppression d'un caractere                                                      \xb3\n");
              color(7);gotoxy(27,35);printf(" \xb3                                                           8-Chaine de consonne                                                              \xb3\n");
          } else if(c == 7 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(7);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
              color(7);gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
              color(7);gotoxy(27,32);printf(" \xb3                                                           7-Suppression d'un caractere                                                      \xb3\n");
              color(3);gotoxy(27,35);printf(" \xb3                                                           8-Chaine de consonne                                                              \xb3\n");
              color(7);gotoxy(27,38);printf(" \xb3                                                           9-Comparaison de deux chaines                                                     \xb3\n");
          } else if(c == 8 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(7);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
              color(7);gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
              color(7);gotoxy(27,32);printf(" \xb3                                                           7-Suppression d'un caractere                                                      \xb3\n");
              color(7);gotoxy(27,35);printf(" \xb3                                                           8-Chaine de consonne                                                              \xb3\n");
              color(3);gotoxy(27,38);printf(" \xb3                                                           9-Comparaison de deux chaines                                                     \xb3\n");
              color(7);gotoxy(27,41);printf(" \xb3                                                           10-Affichage de la chaine                                                         \xb3\n");
          } else if(c == 9 && choix == 72)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(7);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
              color(7);gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
              color(7);gotoxy(27,32);printf(" \xb3                                                           7-Suppression d'un caractere                                                      \xb3\n");
              color(7);gotoxy(27,35);printf(" \xb3                                                           8-Chaine de consonne                                                              \xb3\n");
              color(7);gotoxy(27,38);printf(" \xb3                                                           9-Comparaison de deux chaines                                                     \xb3\n");
              color(3);gotoxy(27,41);printf(" \xb3                                                           10-Affichage de la chaine                                                         \xb3\n");
              color(7);gotoxy(27,44);printf(" \xb3                                                           11-Quitter l'Application                                                          \xb3\n");
          }
          if(c == 1 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(3);gotoxy(27,14+c*3);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
          } else if(c == 2 && choix == 80 )
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(3);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
          } else if(c == 3 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(3);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
          } else if(c == 4 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(3);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
          } else if(c == 5 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(7);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
              color(3);gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
          } else if(c == 6 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(7);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
              color(7);gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
              color(3);gotoxy(27,32);printf(" \xb3                                                           7-Suppression d'un caractere                                                      \xb3\n");
          } else if(c == 7 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(7);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
              color(7);gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
              color(7);gotoxy(27,32);printf(" \xb3                                                           7-Suppression d'un caractere                                                      \xb3\n");
              color(3);gotoxy(27,35);printf(" \xb3                                                           8-Chaine de consonne                                                              \xb3\n");
          } else if(c == 8 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(7);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
              color(7);gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
              color(7);gotoxy(27,32);printf(" \xb3                                                           7-Suppression d'un caractere                                                      \xb3\n");
              color(7);gotoxy(27,35);printf(" \xb3                                                           8-Chaine de consonne                                                              \xb3\n");
              color(3);gotoxy(27,38);printf(" \xb3                                                           9-Comparaison de deux chaines                                                     \xb3\n");
          } else if(c == 9 && choix == 80)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(7);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
              color(7);gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
              color(7);gotoxy(27,32);printf(" \xb3                                                           7-Suppression d'un caractere                                                      \xb3\n");
              color(7);gotoxy(27,35);printf(" \xb3                                                           8-Chaine de consonne                                                              \xb3\n");
              color(7);gotoxy(27,38);printf(" \xb3                                                           9-Comparaison de deux chaines                                                     \xb3\n");
              color(3);gotoxy(27,41);printf(" \xb3                                                           10-Affichage de la chaine                                                         \xb3\n");
          } else if(c == 10 && choix ==80)
          {
              color(7);gotoxy(27,14);printf(" \xb3                                                           1-Creation Et affichage d'une chaine de caractere                                 \xb3\n");
              color(7);gotoxy(27,17);printf(" \xb3                                                           2-Longueur d'une chaine                                                           \xb3\n");
              color(7);gotoxy(27,20);printf(" \xb3                                                           3-Copie d'une chaine dans une autre chaine                                        \xb3\n");
              color(7);gotoxy(27,23);printf(" \xb3                                                           4-Concatenation de deux chaines                                                   \xb3\n");
              color(7);gotoxy(27,26);printf(" \xb3                                                           5-Inversion casse                                                                 \xb3\n");
              color(7);gotoxy(27,29);printf(" \xb3                                                           6-Insertion d'une chaine                                                          \xb3\n");
              color(7);gotoxy(27,32);printf(" \xb3                                                           7-Suppression d'un caractere                                                      \xb3\n");
              color(7);gotoxy(27,35);printf(" \xb3                                                           8-Chaine de consonne                                                              \xb3\n");
              color(7);gotoxy(27,38);printf(" \xb3                                                           9-Comparaison de deux chaines                                                     \xb3\n");
              color(7);gotoxy(27,41);printf(" \xb3                                                           10-Affichage de la chaine                                                         \xb3\n");
              color(3);gotoxy(27,44);printf(" \xb3                                                           11-Quitter l'Application                                                          \xb3\n");
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
