# include "Sommet.hpp"
# include "Graphe.hpp"

int main(void) {
	Graphe g;

//SOMMET 1
	std::vector<std::string> adj_s1;
	adj_s1.push_back("2");
	adj_s1.push_back("3");
	adj_s1.push_back("4");

	g.AddSummit("1", adj_s1);

	//Sommet2
	std::vector<std::string> adj_s2;
	adj_s2.push_back("3");
	adj_s2.push_back("4");

	g.AddSummit("2", adj_s2);

	//sommet3
	std::vector<std::string> adj_s3;
	adj_s3.push_back("2");
	adj_s3.push_back("4");

	g.AddSummit("3", adj_s3);

	//sommet4
	std::vector<std::string> adj_s4;
	g.AddSummit("4", adj_s4);
	return (0);
}
