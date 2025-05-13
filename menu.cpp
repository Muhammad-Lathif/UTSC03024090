#include <iostream>
#include <conio.h> //getch
using namespace std;

void TampilMenu() {
    system("cls");
    cout << "APLIKASI MENU ARRAY\n";
    cout << "==============================\n";
    cout << "1. Input Array\n";
    cout << "2. Output Array\n";
    cout << "3. Shorting Array (Ascending)\n";
    cout << "4. Info\n";
    cout << "5. Exit\n";
    cout << "Pilih menu (1-5): ";
}

void Info() {
    system("cls");
    cout << "NAMA                      NIM\n";
    cout << "Muhammad Imam Nurrahman   C030324038\n";
    cout << "Muhammad Tarmizi          C030324046\n";
    cout << "Muhammad Lathif           C030324090\n";
    getch();
}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}


int main() {
char pl;
do
{
    TampilMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    mPertama("pertama");
    break;
   case '2':
    mPertama("ke- dua");
    /* code */ 
    break;  
   case '3':
    mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    Info();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}