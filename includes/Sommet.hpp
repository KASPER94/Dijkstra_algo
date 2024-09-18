#ifndef SOMMET_HPP
# define SOMMET_HPP

# include <iostream>
# include <cstring>
# include <vector>

class Sommet {
	private:
		std::string _name;
		std::vector<Sommet*>	_adjacents;
	public:
		Sommet();
		~Sommet();
		void	setAdj(Sommet *adj);
		void	setName(std::string name);
		std::string	GetName(void);
};

#endif
