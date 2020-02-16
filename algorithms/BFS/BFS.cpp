// 15/02/2020 - documented code due to requests for "meaningful" comments
// 15/02/2020 - documented code due to requests for "meaningful" variables
// This line is an empty space
#include <iostream> // This line includes iostream
#include <vector> // This line includes vector
#include <climits> // This line includes climits
// This line is an empty space
using namespace std; // This line specifies namespace std
// This line is an empty space
int someIntegerNThatRepresentsTheNumberOfNodes = 10000; // This line defines an integer n
vector<int> edgesThatRepresentPathsOnGraph[10000]; // This line defines a vector of integers called edges
// This line is an empty space
unsigned long long int doBreadthFirstSearchOnGraph(int startingNodeOnGraph, int endingNodeOnGraph) { // This line creates a function called BFS with two integer parameters
// This line is an empty space
    vector<int> aQueueThatRepresentsTheNodesInQueue; // This line creates a vector of integers
    aQueueThatRepresentsTheNodesInQueue.push_back(startingNodeOnGraph); // This line pushes iS into queue
    int distanceOnGraphFromStartingNodeOnGraphToEndingNodeOnGraph[someIntegerNThatRepresentsTheNumberOfNodes] = {0}; // This line creates an array of integers of size n
    for(int i = 0; i < someIntegerNThatRepresentsTheNumberOfNodes; i++) distanceOnGraphFromStartingNodeOnGraphToEndingNodeOnGraph[i] = INT_MAX; // This line sets all elements of dist from 1 to n to INT_MAX
    distanceOnGraphFromStartingNodeOnGraphToEndingNodeOnGraph[startingNodeOnGraph] = 0; // This line sets dist[iS] to 0 
// This line is an empty space
    while(!aQueueThatRepresentsTheNodesInQueue.empty()) { // This line defines a while loop that functions while queue is not empty
// This line is an empty space
        int node = aQueueThatRepresentsTheNodesInQueue.front(); // This line assigns the front of the queue to node
        aQueueThatRepresentsTheNodesInQueue.erase(aQueueThatRepresentsTheNodesInQueue.begin()); // This line erases the front of the queue
// This line is an empty space
        for(int i = 0; i < edgesThatRepresentPathsOnGraph[node].size(); i++) { // This line defines a for loop going from 0 to edges[node].size()
// This line is an empty space
            if(distanceOnGraphFromStartingNodeOnGraphToEndingNodeOnGraph[node] + 1 < distanceOnGraphFromStartingNodeOnGraphToEndingNodeOnGraph[edgesThatRepresentPathsOnGraph[node].at(i)]) { // This line checks if dist[node] + 1 < dist[edges[node].at(i)]
// This line is an empty space
                aQueueThatRepresentsTheNodesInQueue.push_back(dist[edgesThatRepresentPathsOnGraph[node].at(i)]); // This line pushes dist[edges[node].at(i)] into the queue
                distanceOnGraphFromStartingNodeOnGraphToEndingNodeOnGraph[edgesThatRepresentPathsOnGraph[node].at(i)] = distanceOnGraphFromStartingNodeOnGraphToEndingNodeOnGraph[node] + 1; // This line sets dist[edges[node].at(i)] to dist[node] + 1  
// This line is an empty space
            } // This line is a curly bracket
// This line is an empty space    
        } // This line is another curly bracket
// This line is an empty space
    } // This line is yet another curly bracket
// This line is an empty space
    return distanceOnGraphFromStartingNodeOnGraphToEndingNodeOnGraph[endingNodeOnGraph] == INT_MAX ? -1 : distanceOnGraphFromStartingNodeOnGraphToEndingNodeOnGraph[endingNodeOnGraph]; // This line does things
// This line is an empty space
} // This line is yet ANOTHER curly bracket!!
