// Class automatically generated by Dev-C++ New Class wizard

#include "item.h" // class's header file

// class constructor
Item::Item(string nom, string desc, long prec, long cant)
{
nombre=nom;
descripcion=desc;
precio=prec;
cantidad=cant;
}
Item::Item()
{
	// insert your code here
}
Item::~Item()
{
	// insert your code here
}
void Item::salvar()
{FILE *arch;

char* nomb = strdup(nombre.c_str());
char* desc = strdup(descripcion.c_str());
arch=fopen("doc.txt","a+");

     fprintf(arch, "%s %s %d %d\n", nomb,desc,precio,cantidad);
     
fclose(arch);
cout<<"item guardado correctamente...."<<endl;
}
long Item:: getCant()
{return cantidad;}
string Item::getNombre()
{return nombre;}
long Item::getPrecio()
{return precio;}
 void Item::operator=(Item i)
{
nombre=i.nombre;
descripcion=i.descripcion;
precio=i.precio;
cantidad=i.cantidad;
}
void Item::mostrar()
{
cout<<"Nombre:            "<<nombre<<endl;
cout<<"Descripcion:       "<<descripcion<<endl;
cout<<"Precio:            "<<precio<<endl;
cout<<"Cantidad:                     "<<cantidad<<endl;
}
void Item::leer()
{
cout<<"Nombre:            ";cin>>nombre;
cout<<"Descripcion:       ";cin>>descripcion;
cout<<"Precio:            ";cin>>precio;

}