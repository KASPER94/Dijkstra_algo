#include "Sommet.hpp"

Sommet::Sommet() {
	this->_name = "";
}

Sommet::~Sommet() {

}

void	Sommet::setName(std::string name){
	this->_name = name;
}

void	Sommet::setAdj(Sommet *adj) {
	this->_adjacents.push_back(adj);
}

std::string	Sommet::GetName(void) {
	return (this->_name);
}


