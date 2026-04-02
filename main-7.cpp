#include <iostream>

using namespace std;

class compte{
private :
    double compte;
public:
    void init (double montant){
     if(montant<0) compte= 0;
        if(montant>0) compte= montant;
    }
    void depot ( double montant){
     if(montant>=0) compte= compte+montant;
    }
    void retrait(double montant) {
    if( montant>=compte) compte=0;
    if(montant< compte)compte=compte-montant;}
    double get compte()const{
    return compte ;}
    void afficher () {
    cout<<"compte bancaire:"<<compte<<"fcfa"<<endl;
    }
};
int main () {
compte c;
c.init(10000);
c.afficher();
cout<< c.getcompte()<<endl
}
