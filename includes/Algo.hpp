#ifndef ALGO_HPP
# define ALGO_HPP

# include <iostream>
# include <queue>
# include <map>
# include <cstring>
# include <vector>
# include "Sommet.hpp"
# include "Graphe.hpp"

enum COLOR {RED, GREY, BLACK};

class Algo {
	private:
        std::queue<std::string> visits;
        std::map<std::string, COLOR> Color;
        std::map<std::string, int> nb_jump;
		void	seek_width(const std::string &sommet);
	public:
		Algo();
		~Algo();
		void	seek(const std::string &sommet, std::queue<std::string> &visits, std::map<std::string, COLOR> &Color, std::map<std::string, int> &nb_jump);
};

#endif