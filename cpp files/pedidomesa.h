// Class automatically generated by Dev-C++ New Class wizard

#ifndef PEDIDOMESA_H
#define PEDIDOMESA_H
#include "pedido.h"
// No description
class PedidoMesa:public Pedido
{int mesa;
	public:
		// class constructor
		PedidoMesa(Orden**, int, long,int);
		// class destructor
		~PedidoMesa();
		long totalCancelar();
		void mostrar();
};

#endif // PEDIDOMESA_H