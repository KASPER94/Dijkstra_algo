#ifndef GRAPHE_HPP
# define GRAPHE_HPP

# include <iostream>
# include <cstring>
# include "Sommet.hpp"

class Sommet;

class Graphe {
	private:
		std::vector<Sommet*>	_g;
	public:
		Graphe();
		~Graphe();
};

#endif
