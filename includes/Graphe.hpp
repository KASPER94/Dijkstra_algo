#ifndef GRAPHE_HPP
# define GRAPHE_HPP

# include <iostream>
# include <cstring>
# include <vector>
# include "Sommet.hpp"

class Sommet;

class Graphe {
	private:
		std::vector<Sommet*>	_g;
	public:
		Graphe();
		~Graphe();
		void	AddSummit(std::string name, std::vector<std::string> dependancy);
		Sommet	*GetSummitByName(std::string name);
};

#endif
