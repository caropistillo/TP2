#include "lista.h"
#include "cola.h"
#include "antena.h"
#include "celular.h"


enum EstadoLlamada {
	OCUPADO,
	EN_CURSO
};


class Sistema {
	private:
		Lista<Antena*>* listaDeAntenas;
		Lista<Celular*>* listaDeCelulares;

	public:
		// Constructor
		// Inicia el sistema
		Sistema();

		// Crea una lista de antenas
		// Pre: -
		// Post: Se crea una lista de punteros a Antena, vacia.
		//       Devuelve un puntero a la lista.
		Lista<Antena*>* crearListaDeAntenas();

		// Pre: La lista de antenas fue inicializada. Recibe un puntero
		//      valido a Antena.
		// Post: Se agrega una antena a la lista de antenas del sistema.
		void agregarAntena(Antena* antena);

		// Crea una lista de celulares
		// Pre: -
		// Post: Se crea una lista de punteros a Celular, vacia.
		//       Devuelve un puntero a la lista.
		Lista<Celular*>* crearListaDeCelulares();

		// Pre: La lista de celulares fue inicializada. Recibe un puntero
		//      valido a Celular.
		// Post: Se agrega un celular a la lista de celulares del sistema.
		void agregarCelular(Celular* celular);

		// Inicia una llamada entre dos celulares.
		// Pre: Los celulares se encuentran en el sistema.
		// Post: Devuelve un estado (OCUPADO o EN_CURSO). En caso de
		//       poder efectuarse, inicia una llamada entre los celulares
		//       X e Y.
		EstadoLlamada iniciarLlamada(Celular* X, Celular* Y);

		// Termina una llamada entre dos celulares.
		// Pre: Una llamada entre X e Y se encuentra en curso.
		// Post: Concluye la llamada.
		void terminarLlamada(Celular* X, Celular* Y);

		// Pre: El celular X se encuentra en el sistema.
		// Post: El celular X se conecta a la antena pasada como parametro
		void conectarCelular(Celular* X, Antena* antena);

		// Pre: El celular x se encuentra conectado a una antena.
		// Post: El celular X se desconecta de la antena.
		void desconectarCelular(Celular* X);

		// Destructor
		~Sistema();
};

