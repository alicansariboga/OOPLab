#include <iostream >
using namespace std;
void Xtest(int test){
    cout << "Inside Xtest , test is: " << test << "\n";
    if(test) throw test;
}

int main(){
    cout << "start\n"; 
    try{ 
        Xtest(0);  
        Xtest(1); 
        Xtest(2); 
        Xtest(3);
        Xtest(4);
        
        //If 'in ici 0 oldugu zaman pass gecer. Digerlerinde ilk gordugunu yakalar.
    } catch(int i) { cout << "Caught One! Number is: "<< i <<endl;}
    cout << "end";
    return 0;
}
