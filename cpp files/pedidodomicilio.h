// Class automatically generated by Dev-C++ New Class wizard

#ifndef PEDIDODOMICILIO_H
#define PEDIDODOMICILIO_H
#include "pedido.h"
// No description
class PedidoDomicilio:public Pedido
{string direccion;
string nombre;
	public:
		// class constructor
		PedidoDomicilio(Orden**, int, long,string,string);
		// class destructor
		~PedidoDomicilio();
		long totalCancelar();
		void mostrar();
};

#endif // PEDIDODOMICILIO_H
