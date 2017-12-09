#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int card1, card2;

//fungsi print kartu pertama dan kedua tertutup
void printCard (int number1)
{
	number1 = 1 + rand()%13;
	card1 = number1;
	if (number1<10)
	{
		cout << "		*******";
		cout << "   *******" << endl;
	}
	else
	{
		cout << "		********";
		cout << "   *******" << endl;
	}
	cout << "		*" << number1 << "    *";
	cout << "   *******" << endl;
	cout << "		*  " << number1 << "  *";
	cout << "   *******" << endl;
	cout << "		*    " << number1 << "*";
	cout << "   *******" << endl;
	if (number1<10)
	{
		cout << "		*******";
		cout << "   *******" << endl;
	}
	else
	{
		cout << "		********";
		cout << "   *******" << endl;
	}
	
}
//Fungsi print kartu kedua terbuka
void printCard2 (int number2)
{
	number2 = 1 + rand()%13;
	card2 = number2;
	if (number2<10)
	{
		cout << "		*******" << endl;
	}
	else
	{
		cout << "		********" << endl;
	}
	cout << "		*" << number2 << "    *" << endl;
	cout << "		*  " << number2 << "  *" << endl;
	cout << "		*    " << number2 << "*" << endl;
	if (number2<10)
	{
		cout << "		*******"<< endl;
	}
	else
	{
		cout << "		********"<< endl;
	}
}
int main()
{
	int angka, gamestart, wincount = 0, losecount = 0, gamelength = 0, draw = 0;
	char pilihan;
	
	//Main Menu
	cout << "=================HIGHER & LOWER=================" << endl;
	cout << endl;
	cout << "Selamat datang di Higher & Lower Game" <<endl;
	cout << endl;
	cout << "How To Play : " << endl;
	cout << "Pilihlah apakah kartu yang sedang tertutup lebih besar atau lebih kecil dari kartu yang telah terbuka" << endl;
	cout << endl;
	cout << "Press any key to start" << endl;
	getch();
	system("cls");
	
	//loop untuk permainan sebanyak 3 kali
	while (gamelength <5){
	cout << "=================HIGHER & LOWER=================" << endl;
	cout << endl;
	cout << "Memulai permainan" << endl;
	cout << endl;
	
	srand (time(0));
	printCard(card1);
	
	cout << endl;
	cout << "A. Higher	or	B. Lower" << endl;
	cout << endl;
	cout << "Tebakkanmu : " << endl;
	
	cin >> pilihan;
	cout << endl;
	
	srand (time(0));
	printCard2(card2);
	
	//Untuk Pilihan
	if (((pilihan == 'a' || pilihan == 'A') && card2 > card1) || ((pilihan == 'b' || pilihan == 'B') && card2 < card1))
	{
		cout << "Benar!" << endl;
		wincount++;
		gamelength++;
	}
	else if ( card2 == card1)
	{
		cout << "Draw!" << endl;
		draw++;
		gamelength++;
	}
	else 
	{
		cout << "Salah!" << endl;
		losecount++;
		gamelength++;
	}	
	
	
	
	
	//Skor
	cout << endl;
	cout << "Win : " << wincount << endl;
	cout << "Draw : " << draw << endl;
	cout << "Lose : " << losecount << endl;	
	
	cout << endl;
	cout << "Press any key to continue" << endl;
	getch();
	system("cls");
	}
	cout << "=================HIGHER & LOWER=================" << endl;
	cout << endl;
	cout << "Finish!" << endl;
	cout << endl;
	cout << "Result : " << endl;
	cout << endl;
	cout << "Win = " << wincount << endl;
	cout << "Lose = " << losecount << endl;
	cout << endl;
	
	//Game End
	if (wincount > losecount)
	{
		cout << "CONGRATULATION!!!";
	}
	else 
	{
		cout << "Just Try Again";
	}
}
