#include "graph.h"
using namespace std;

#include<iostream>
#define CATCH_CONFIG_MAIN
#include "graph.h"
#include <vector>
#include "catch_amalgamated.hpp"
using namespace std;



TEST_CASE( "Pushing and popping to the AStack", "[AStack]" ) {
    Graph G;
    int tmp[][2] = {{0,1}, {0,2}, {0,4}, {1,4}, {2,3}, {2,5}, {3,4} , {3,5},
                    {3,6}, {4,7}, {4,8}, {5,6}, {6,7}, {6,9}, {7,8}, {7,9}};
    G.setNumberOfVertices(10);
    for (auto e: tmp) G.addEdge(e[0],e[1]);

    cout << G.toString() << endl;

    CHECK(G.isNeighboor(0,4) == true);
    CHECK(G.isNeighboor(0,3) == false);

    G.BFS(0);
}