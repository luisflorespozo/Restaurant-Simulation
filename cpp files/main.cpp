#include "especiales.h"
#include "item.h"
#include "menu.h"
#include "orden.h"
#include <conio.h>
#include "pedido.h"
#include "pedidomesa.h"
#include "pedidodomicilio.h"
#include "cuenta.h"
#include "restaurante.h"
int main()
{

    Item i2;
    cout<<"Desea agregar un item al inventario?"<<endl;
    cout<<"Si[1], No[0]:  "<<endl;
    char tecla=getch();
        if(tecla=='1')
        {i2.leer();
        i2.salvar();}
//    

    Item**vec2;
    vec2=new Item*[3];
    (*(vec2+0))=new Item("veve", "fasa", 35,77);
    (*(vec2+1))=new Item("fefe", "qwqw", 22,66);
    (*(vec2+2))=new Item("gege", "rere", 11,44);
    
    Item**vec;
    vec=new Item*[3];
        (*(vec+0))=new Item("papa", "fasa", 35,77);
        (*(vec+1))=new Item("gaga", "qwqw", 22,66);
        (*(vec+2))=new Especiales("combo",vec2,3);

Menu m(vec,3);
cout<<m.buscar("papa",0)<<endl;
//m.mostrar();
Orden *x=new Orden;
Orden *y=new Orden;
x->leer();
y->leer(); 
    Orden**vec3;
    vec3=new Orden*[2];
        (*(vec3+0))=x;
        (*(vec3+1))=y;            
Pedido p(vec3,2,122);
cout<<p.totalCancelar();

//x.verificar2("44");
x->getTotal();


    getch();
}
