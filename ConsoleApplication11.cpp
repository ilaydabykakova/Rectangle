#include"stdafx.h"
#include <iostream>
using namespace std;

class Rectangle{
private:/*sadece de�i�ken yaz�l�r*/
	int height/*=!3 burda  atama yapamazs�n cunku daha nesne olu�mad�,�a�r� yapamay�z,sadece tasar�m*/;
	int weight;
	int area;

public:	
	Rectangle(){
		cout << "............................." << endl;
		cout << "merhaba ben cagr�ld�m." << endl;

		} /*yok edersek d1 cal��t�rmaz parametresiz*/
	
	   Rectangle(string a){

		cout << "merhaba ben parametreli cagr�ld�m." << endl;

	} 
	Rectangle(int a, int b){
		cout << "............................." << endl;

		cout << "merhaba ben cagr�ld�m." << endl;

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
	/*Rectangle d1,d2("nas�ls�n"),d1(15,18);*/
	{
		Rectangle d2("nas�ls�n");
		{
			Rectangle d1(15, 18);
			{
				Rectangle d1;/*yok etmeye buradan ba�lar!! yukar� dogru gider*/
			}
		}
		}
	//d1.DataEnter();
	//d1.AreaFind();

	system("PAUSE");
}
