#include "message.h"


Message::Message(string body, int sender) {
	this->body = body;
	this->sender = sender;
}

string Message::getBody() {
	return this->body;
}

int Message::getSender() {
	return this->sender;
}
