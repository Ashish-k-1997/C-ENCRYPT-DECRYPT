#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;
char pass[50];


void encrypt()
{
 char ch;
 int z[50], i;


 ifstream ifile;
 ofstream ofile;

 ifile.open("input.txt");
 ofile.open("output.txt");

 cout << "\n\n\tPASSWORD CAN ONLY BE a-z WITHOUT SPACES" ;
 cout << "\n\n\tENTER PASSWORD :  " ;
 cin>>pass;

  for(int i=0; i<strlen(pass);i++)
 {
  z[i]=pass[i]-96;
 }



 system("cls");
 cout<<"\n\n\n\n\n\t\t\t\t\t PLEASE WAIT.";

 i=0;

 while(ifile.get(ch))
 {
   if(i==strlen(pass))
    i=0;

   ofile.put(ch+z[i]);
   i++;

  }

 system("cls");
 cout<<"\n\n\n\n\n\t\t\t\t\tENCRYPT DONE, PRESS ANY KEY.";
 getch();

 ifile.close();
 ofile.close();
}

void decrypt()
{
  char ch;
 int z[50], i;



 ifstream ifile;
 ofstream ofile;

 ifile.open("input.txt");
 ofile.open("output.txt");

 cout << "\n\n\tPASSWORD CAN ONLY BE a-z WITHOUT SPACES" ;
 cout << "\n\n\tENTER PASSWORD :  " ;
 cin>>pass;

  for(int i=0; i<strlen(pass);i++)
 {
  z[i]=pass[i]-96;
 }

 system("cls");
 cout<<"\n\n\n\n\n\t\t\t\t\t PLEASE WAIT.";

 i=0;

 while(ifile.get(ch))
 {
   if(i==strlen(pass))
    i=0;

   ofile.put(ch-z[i]);
   i++;

  }

 system("cls");
 cout<<"\n\n\n\n\n\t\t\t\t\tDECRYPT DONE, PRESS ANY KEY.";
 getch();

 ifile.close();
 ofile.close();
}


int main()
{
    int choice;
    while(1)
    {
     system("cls");
     cout << "\n\n\n\t\t0. To Exit" ;
     cout << "\n\t\t1. To Encrypt" ;
     cout << "\n\t\t2. TO Decrypt" ;
     cout << "\n\n\t\t   Your choice   :  " ;
     cin>>choice;

     system("cls");

     switch(choice)
     {
        case 0 : exit(0);   break;

        case 1 : encrypt(); break ;

        case 2 : decrypt(); break;

        default : system("cls");
                   cout<<"\n\n\n\t\t\tWRONG CHOICE";
     }
    }
     return 0;
}



