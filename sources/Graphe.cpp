#include "Graphe.hpp"

Graphe::Graphe() {

}

Graphe::~Graphe() {

}

Sommet *Graphe::GetSummitByName(std::string name) {
	std::vector<Sommet*>::iterator i;
	for (i = this->_g.begin(); i < this->_g.end(); i++) {
		Sommet *s = *i;
		if (s->GetName() == name)
			return (s);
	}
	return (nullptr);
}

void	Graphe::AddSummit(std::string name, std::vector<std::string> dependancy) {
	Sommet *adj;
	Sommet *s = nullptr;
	if ((s = GetSummitByName(name)) == nullptr) {
		s = new Sommet();
		s->setName(name);
		//mettre le sommet a la fin de la liste du vecteur
		this->_g.push_back(s);
	}
	for (std::vector<std::string>::iterator i = dependancy.begin(); i < dependancy.end(); i++) {
		if ((adj = GetSummitByName(*i)) != nullptr) {
			s->setAdj(adj);
		}
		else {
			adj = new Sommet();
			adj->setName(*i);
			this->_g.push_back(adj);
			s->setAdj(adj);
		}
	}
}
