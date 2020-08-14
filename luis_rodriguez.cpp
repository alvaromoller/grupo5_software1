#include<iostream>
using namespace std;
class prueba{
    public:
        int dato1;
        int dato2;
    prueba(int a,int b){
        this.dato1=a;
        this.dato2=b;
    }
}
int main(){
    //Este es una clase de prueba
    my_prueba = prueba(1,2);
    //Se muestra los atrubutos de la clase
    cout<<prueba.dato1;
    cout<<prueba.dato2;
    //Fin de ejemplo
}