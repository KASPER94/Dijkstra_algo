#include "Algo.hpp"

Algo::Algo() {

}

Algo::~Algo() {

}

void	Algo::seek_width(const std::string &sommet) {
    this->Color[sommet] = GREY;
    this->nb_jump[sommet] = 0;
    this->visits.push(sommet);
    seek(sommet, this->visits, this->Color, this->nb_jump);
}

void Algo::seek(const std::string &sommet, std::queue<std::string> &visits, std::map<std::string, COLOR> &Color, std::map<std::string, int> &nb_jump) {
    
}
