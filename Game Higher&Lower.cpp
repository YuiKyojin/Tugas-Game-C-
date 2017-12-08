#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

//fungsi print kartu
void printCard(int number)
{
	if (number<10)
	{
		cout << "		*******" << endl;
	}
	else
	{
		cout << "		********" << endl;
	}
	cout << "		*" << number << "    *" << endl;
	cout << "		*  " << number << "  *" << endl;
	cout << "		*    " << number << "*" << endl;
	if (number<10)
	{
		cout << "		*******" << endl;
	}
	else
	{
		cout << "		********" << endl;
	}
	
}

int main()
{
	int angka, gamestart;
	
	//Main Menu
	cout << endl;
	cout << "=================HIGHER & LOWER=================" << endl;
	cout << endl;
	cout << "Selamat datang di Higher & Lower Game" <<endl;
	cout << endl;
	cout << "How To Play : " << endl;
	cout << "Pilihlah apakah kartu yang sedang tertutup lebih besar atau lebih kecil dari kartu yang telah terbuka" << endl;
	cout << endl;
	cout << "Press any key to start" << endl;
	getch();
	
	
	cout << endl;
	cout << "Memulai permainan" << endl;
	cout << endl;
	
	srand (time(NULL));
	printCard(rand()%13);
	
		
}
