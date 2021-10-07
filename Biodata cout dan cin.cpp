#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	cout<< "====== MASUKAN BIODATA KAMU ====== \n \n";
	
	string nama, umur, asal, hobi;
	
	cout<< "Masukan Nama   : ";getline (cin, nama);
	cout<< "Masukan Umur   : ";getline (cin, umur);
	cout<< "Masukan Asal   : ";getline (cin, asal);
	cout<< "Masukan Hobi   : ";getline (cin, hobi);
	cout<<endl;
	
	cout<< "========= HASIL INPUTAN ========= \n \n";
	
	cout<< "Nama   :"<<nama<<endl;
	cout<< "Umur   :"<<umur<<" tahun"<<endl;
	cout<< "Asal   :"<<asal<<endl;
	cout<< "Hobi   :"<<hobi<<endl;
	
	return 0;
}
