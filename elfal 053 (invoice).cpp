#include<iostream>
#include <string>
using namespace std;

class Invoice
{
	public:
		Invoice( string, string, int, int );
	void setPartNumber( string );
		string getPartNumber();
	void setPartDescription(string);
		string getPartDescription();
	void setItemQuantity(int);
	int getItemQuantity();
	void setItemPrice(int);
	int getItemPrice();
	int getInvoiceAmount();

	private:
		string partNumber;
		string partDescription;
	int itemQuantity;
	int itemPrice;
};

Invoice::Invoice( string number, string description, int quantity, int price )
{
	partNumber=number;
	partDescription=description;

	if(quantity>0)
		itemQuantity=quantity;
	else
		{
  		itemQuantity=0;
		cout<<"Initial quantity was invalid."<<endl;
		}

 	if(price>0)
		itemPrice=price;
	else
		{
		itemPrice=0;
		cout<<"Initial price was invalid."<<endl;
		}
}

void Invoice::setPartNumber( string number)
{
	if ( number.length() <= 25 )
		partNumber = number;
	if ( number.length() > 25 )
	{
  		partNumber = number.substr( 0, 25 );
  		cout << "Name \"" << number <<"\" exceeds maximum length (25).\n"<< "Limiting partNumber to first 25 characters.\n" << endl;
	}
}

void Invoice::setPartDescription(string description )
{
	if ( description.length() <= 25 )
		partDescription = description;
	if ( description.length() > 25 )
	{
		partDescription = description.substr( 0, 25 );
		cout << "Name \"" << description <<"\" exceeds maximum length (25).\n"<< "Limiting partDescription to first 25 characters.\n" << endl;
	}
}

void Invoice::setItemQuantity(int quantity )
{
	if(quantity>0)
		itemQuantity=quantity;
	else
	{
		itemQuantity=0;
		cout<<"Initial quantity was invalid."<<endl;
	}
}

void Invoice::setItemPrice(int price )
{
	if(price>0)
		itemPrice=price;
	else
		{
		itemPrice=0;
		cout<<"Initial price was invalid."<<endl;
	}
}

string Invoice::getPartNumber() {
	return partNumber;
}
string Invoice::getPartDescription() {
	return partDescription;
}
int Invoice::getItemQuantity() {
	return itemQuantity;
}
int Invoice::getItemPrice() {
	return itemPrice;
}
int Invoice::getInvoiceAmount() {
	return itemQuantity*itemPrice;
}

int main() {
	cout << "\t\t\t PRICE" <<endl;
	cout << endl;
	Invoice Inv1("DRM07","Album NCT DREAM",3,275000);
	Invoice Inv2("SVT13","Poster SVT",7,90000);
	cout << "Code Invoice 1 : "<< Inv1.getPartNumber() <<endl;
	cout << "Description : "<< Inv1.getPartDescription() <<endl;
	cout << "Total Item  : "<< Inv1.getItemQuantity() <<endl;
	cout << "Price per Item : Rp. "<< Inv1.getItemPrice()<<",-" <<endl;
	cout << "----------------------" <<endl;
	cout << "PRICE TOTAL INVOICE 1 adalah Rp. "<<Inv1.getInvoiceAmount()<<",-" <<endl<<endl;

	cout << "Code Invoice 2 : "<< Inv2.getPartNumber() <<endl;
	cout << "Description : "<< Inv2.getPartDescription() <<endl;
	cout << "Total Item  : "<< Inv2.getItemQuantity() <<endl;
	cout << "Price per Item : Rp. "<< Inv2.getItemPrice()<<",-" <<endl;
	cout << "----------------------" <<endl;
	cout << "PRICE TOTAL INVOICE 2 adalah Rp. "<< Inv2.getInvoiceAmount()<<",-" <<endl<<endl;

}
