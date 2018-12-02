#include <iostream>
#include <string>
using namespace std;


int main()
{
    string maChaine("Bonjour !");
    cout << "Longueur de la chaine : " << maChaine.size()<< endl;
    cout << maChaine.substr(3) << endl;

    return 0;
}
