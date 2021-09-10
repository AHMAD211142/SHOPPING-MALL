#include<iostream>
#include<fstream>
using namespace std;
static int bill = 0;

class ShoppingMall {

public:
	void display() {
		cout << "\t\tSHOPPING   MALL\n";
		cout << "\tPRESS  1  TO  GO  IN  :\tToystore\n";
		cout << "\tPRESS  2  TO  GO  IN  :\tClothes\n";
		cout << "\tPRESS  3  TO  GO  IN  :\tRestaurant\n";
		cout << "\tPRESS  4  TO  GO  IN  :\tWatches\n";
		cout << "\tPRESS  5  TO  GO  IN  :\tShoes\n";
		cout << "\tPRESS  6  TO  GO  IN  :\tEXIT\n\n\n";
	}


};
class Toystore : public ShoppingMall
{
private:
	int num, q;
public:
	void display() {
		cout << "\t1  : CAR  500\n";
		cout << "\t2  : BIKE 400\n";
		cout << "\t3  : BOAT 600\n";
		cout << "\t4  : EXIT\n";
		do {
			cin >> num;
			if (num == 1) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 500 * q;
				cout << "\tCAR IS ADDED IN CARD\n";
			}
			else if (num == 2) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 400 * q;
				cout << "\tBIKE IS ADDED IN CARD\n";
			}
			else if (num == 3) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 600 * q;
				cout << "\tBOAT IS ADDED IN CARD\n";
			}
		} while (num != 4);
		cout << "EXITING TOY STORE \n";
		system("CLS");
		ShoppingMall::display();
	}

};
class Clothes : public Toystore
{
private:
	int num, q;
public:
	void display() {
		cout << "1:SHIRT 500\n";
		cout << "2:trouser 700\n";
		cout << "3:pent 1000\n";
		cout << "4:EXIT\n";
		do {
			cin >> num;
			if (num == 1) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 500 * q;
				cout << "\t SHIRT IS ADDED IN CARD\n";
			}
			else if (num == 2) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 700 * q;
				cout << "\tTROUSER IS ADDED IN CARD\n";
			}
			else if (num == 3) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 1000 * q;
				cout << "\tPENT IS ADDED IN CARD\n";
			}
		} while (num != 4);
		cout << "EXITING CLOTHES STORE \n";
		system("CLS");
		ShoppingMall::display();
	}

};
class Restourent : public Clothes
{
private:
	int num, q;
public:
	void display() {
		cout << "1:Biryani 200\n";
		cout << "2:kabab 100\n";
		cout << "3:krahi 600\n";
		cout << "4:EXIT\n";
		do {
			cin >> num;
			if (num == 1) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 200 * q;
				cout << "\t BIRYANI IS ADDED IN CARD\n";
			}
			else if (num == 2) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 100 * q;
				cout << "\tKABAB IS ADDED IN CARD\n";
			}
			else if (num == 3) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 600 * q;
				cout << "\tKRAHI IS ADDED IN CARD\n";
			}
		} while (num != 4);
		cout << "EXITING RETURANT \n";
		system("CLS");
		ShoppingMall::display();
	}

};
class Watches : public Restourent
{
private:
	int num, q;
public:
	void display() {
		cout << "1:Rado   5000\n";
		cout << "2:hoblet 2000\n";
		cout << "3:axx 3000\n";
		cout << "4:EXIT\n";
		do {
			cin >> num;
			if (num == 1) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 5000 * q;
				cout << "\t RADO IS ADDED IN CARD\n";
			}
			else if (num == 2) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 2000 * q;
				cout << "\tHOBLET IS ADDED IN CARD\n";
			}
			else if (num == 3) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 3000 * q;
				cout << "\taxx IS ADDED IN CARD\n";
			}
		} while (num != 4);
		cout << "EXITING WATCH STORE \n";
		system("CLS");
		ShoppingMall::display();
	}
};
class Shoes : public Watches
{
private:
	int num, q;
public:
	void display() {
		cout << "Red 700\n";
		cout << "Yellow 800\n";
		cout << "White 600\n";
		cout << "4:EXIT\n";
		do {
			cin >> num;
			if (num == 1) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 700 * q;
				cout << "\t RED IS ADDED IN CARD\n";
			}
			else if (num == 2) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 800 * q;
				cout << "\tYELLOW IS ADDED IN CARD\n";
			}
			else if (num == 3) {
				cout << "ENTER THE QUANTITY : ";
				cin >> q;
				bill += 600 * q;
				cout << "\tWHITE IS ADDED IN CARD\n";
			}
		} while (num != 4);
		cout << "EXITING SHOES STORE \n";
		system("CLS");
		ShoppingMall::display();
	}

};
int main()
{
	int choice, number;
	int text[100];
	ShoppingMall a;
	Toystore Toy;
	Clothes cloth;
	Restourent food;
	Watches watch;
	Shoes shoe;

	a.display();
	do {
		cin >> choice;
		if (choice == 1) {
			Toy.display();
		}
		else if (choice == 2) {
			cloth.display();
		}
		else if (choice == 3) {
			food.display();
		}
		else if (choice == 4) {
			watch.display();
		}
		else if (choice == 5) {
			shoe.display();
		}
	} while (choice != 6);
	cout << "TOTAL BILL   =  " << bill;
	ifstream fin;
	int ch, card, i = 0,f=0;
	fin.open("file.txt");
	fin >> ch;
	do {
		cout << "\nENTER YOUR CREDIT CARD NUMBER  : ";
		cin >> number;
		if (ch == number)
		{
			i = 1;
		}
		else {
			cout << "YOUT CARD NUMBER IS WRONG \n ";
		}
	} while (i != 1);
	fin >> ch;
	do {
		cout << "ENTER THE PASSWORD : ";
		cin >> card;
		if (card == ch)
		{
			fin >> ch;
			if (bill < ch) {
				cout << "BILL             : " << bill;
				f = ch - bill;
				cout << "\nREMAINING BALANCE: " << f;
				i = 2;
			}
			else {
				cout << "YOUR BALANCE IS INSUFFICIANT ";
			}
		}
		else {
			cout << "YOUR PASSWORD IS INCORRECT\n ";
		}
	} while (i != 2);
	ofstream files;
	files.open("file.txt");
	files << "11100\t";
	files << "547\t";
	files << f ;
	files.close();

	return 0;
}