#include "list.h"
#include "queue.h"
#include "antenna.h"
#include "cellphone.h"


enum CallStatus {
	BUSY,
	IN_PROGRESS
};


class System {
	private:
		List<Antenna*>* listOfAntennas;
		List<CellPhone*>* listOfCellPhones;

	public:
		// Constructor
		// pre: -
		// post: se inicio el sistema
		System();

		// Crea una lista de antenas
		// Pre: -
		// Post: Se crea una lista de punteros a Antenna, vacia.
		//       Devuelve un puntero a la lista.
		List<Antenna*>* createAntennaList();

		// Pre: La lista de antenas fue inicializada. Recibe un puntero
		//      valido a Antenna.
		// Post: Se agrega una antena a la lista de antenas del sistema.
		void addAntenna(Antenna* antenna);

		// Crea una lista de celulares
		// Pre: -
		// Post: Se crea una lista de punteros a CellPhone, vacia.
		//       Devuelve un puntero a la lista.
		List<CellPhone*>* createCellPhoneList();

		// Pre: La lista de celulares fue inicializada. Recibe un puntero
		//      valido a CellPhone.
		// Post: Se agrega un celular a la lista de celulares del sistema.
		void addCellPhone(CellPhone* cellPhone);

		// Inicia una llamada entre dos celulares.
		// Pre: Los celulares se encuentran en el sistema.
		// Post: Devuelve un estado (BUSY o IN_PROGRESS). En caso de
		//       poder efectuarse, inicia una llamada entre los celulares
		//       X e Y.
		CallStatus initiateCall(CellPhone* X, CellPhone* Y);

		// Termina una llamada entre dos celulares.
		// Pre: Una llamada entre X e Y se encuentra en curso (IN_PROGRESS).
		// Post: Concluye la llamada.
		void terminateCall(CellPhone* X, CellPhone* Y);

		// Pre: El celular X se encuentra en el sistema.
		// Post: El celular X se conecta a la antena pasada como parametro
		void connectCellPhone(CellPhone* X, Antenna* antenna);

		// Pre: El celular x se encuentra conectado a una antena.
		// Post: El celular X se desconecta de la antena.
		void disconnectCellPhone(CellPhone* X);

		// Destructor
		// pre: -
		// post: El sistema fue destruido.
		~System();
};

