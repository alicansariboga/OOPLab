#include <iostream>

using namespace std;

void deger_kontrol(int id){
	try{
		switch(id){
			case 0: throw 21;
			case 1: throw 21.75f;
			case 2: throw 'a';
			case 3: throw "Hata Kontrol";
		}
	}
	// Her deger için catch kýsmý olan fonksiyon içinde yazýlmýþ try-catch kullanýmý.
	
	catch(int idc) {
		cout << "int deger hatasi: " << idc << endl;
	}
	catch(float fd) {
		cout << "Float deger hatasi: " << fd << endl;
	}
	catch(char cd) {
		cout << "Char deger hatasi: " << cd << endl;
	}
	catch(const char *cstr) {
		cout << "Karakter dizisi hatasi: " << cstr << endl;
	}
}

int main() {
	deger_kontrol(0);
	deger_kontrol(1);
	deger_kontrol(2);
	deger_kontrol(3);
	
	return 0;
}
