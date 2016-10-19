#include <string>

using namespace std;


class Message {

	private:
		string body;
		int sender;

	public:

		// Constructor
		// pre: El identificador del remitente pasado como parametro
		//      (sender) es valido
		// post: Se creo un mensaje, con los atributos cuerpo (body)
		//       y remitente (sender)
		Message(string body, int sender);

		// pre: -
		// post: Devuelve el cuerpo del mensaje
		string getBody();

		// pre: -
		// post: Devuelve el identificador del remitente del mensaje
		int getSender();

		// Destructor
		// pre: -
		// post: El mensaje fue destruido
		~Message();
};



