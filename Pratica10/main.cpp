/*
 * main.cpp
 *
 *  Created on: 20 de nov de 2017
 *      Author: ramide
 */

#include <iostream>
#include "list.h"
#include "graph.h"

using namespace std;

int main() {

//	Graph graph(6);
//	graph.edge(0, 1, 4);
//	graph.edge(0, 2, 2);
//	graph.edge(1, 2, 5);
//	graph.edge(1, 3, 10);
//	graph.edge(2, 4, 3);
//	graph.edge(4, 3, 4);
//	graph.edge(3, 5, 11);

	Graph graph(9);
	graph.edge(0, 1, 4);
	graph.edge(0, 7, 8);
	graph.edge(1, 2, 8);
	graph.edge(1, 7, 11);
	graph.edge(2, 3, 7);
	graph.edge(2, 8, 2);
	graph.edge(2, 5, 4);
	graph.edge(3, 4, 9);
	graph.edge(3, 5, 14);
	graph.edge(4, 5, 10);
	graph.edge(5, 6, 2);
	graph.edge(6, 7, 1);
	graph.edge(6, 8, 6);
	graph.edge(7, 8, 7);

	cout << "Graph: " << endl;
	graph.print();

	List<int> * dfs = graph.dfs(0);
	List<int> * bfs = graph.bfs(0);
	List<int> * spf = graph.spf(0, 5);

	cout << "DFS: "; dfs->print();
	cout << "BFS: "; bfs->print();
	cout << "SPF: "; spf->print();

	delete dfs;
	delete bfs;
	delete spf;

}


