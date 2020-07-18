#include"stdafx.h"
#include <iostream>
using namespace std;

class Rectangle{
private:/*sadece deðiþken yazýlýr*/
	int height/*=!3 burda  atama yapamazsýn cunku daha nesne oluþmadý,çaðrý yapamayýz,sadece tasarým*/;
	int weight;
	int area;

public:	
	Rectangle(){
		cout << "............................." << endl;
		cout << "merhaba ben cagrýldým." << endl;

		} /*yok edersek d1 calýþtýrmaz parametresiz*/
	
	   Rectangle(string a){

		cout << "merhaba ben parametreli cagrýldým." << endl;

	} 
	Rectangle(int a, int b){
		cout << "............................." << endl;

		cout << "merhaba ben cagrýldým." << endl;

	}
	//void DataEnter(){
	//	cout << "height=";
	//	cin >> height;
	//	cout << "weight=";
	//	cin >> weight;
	//}
	//void AreaFind(){
	//	area = height*weight;

	//	cout << "area=" << area << endl;
	//}


	~Rectangle(){

		cout << "yok edildi" << endl;
	}

};
int main(){
	/*Rectangle d1,d2("nasýlsýn"),d1(15,18);*/
	{
		Rectangle d2("nasýlsýn");
		{
			Rectangle d1(15, 18);
			{
				Rectangle d1;/*yok etmeye buradan baþlar!! yukarý dogru gider*/
			}
		}
		}
	//d1.DataEnter();
	//d1.AreaFind();

	system("PAUSE");
}
