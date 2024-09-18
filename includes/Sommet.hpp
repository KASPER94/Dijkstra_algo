#ifndef SOMMET_HPP
# define SOMMET_HPP

# include <iostream>
# include <cstring>

class Sommet {
	private:
		std::string _name;
		std::vector<Sommet*>	_adjacents;
	public:
		Sommet();
		~Sommet();
};

#endif
