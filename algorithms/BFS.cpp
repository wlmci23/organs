// 15/02/2020 - documented code due to requests for "meaningful" comments

#include <iostream> // This line includes iostream
#include <vector> // This line includes vector
#include <climits> // This line includes climits

using namespace std; // This line specifies namespace std

int n = 10000; // This line defines an integer n
vector<int> edges[10000]; // This line defines a vector of integers called edges
// This line is an empty space
int BFS(int iS, int iE) { // This line creates a function called BFS with two integer parameters
// This line is an empty space
    vector<int> queue; // This line creates a vector of integers
    queue.push_back(iS); // This line pushes iS into queue
    int dist[n] = {0}; // This line creates an array of integers of size n
    for(int i = 1; i < n; i++) dist[i] = INT_MAX; // This line sets all elements of dist from 1 to n to INT_MAX
// This line is an empty space
    while(!queue.empty()) { // This line defines a while loop that functions while queue is not empty
// This line is an empty space
        int node = queue.front(); // This line assigns the front of the queue to node
        queue.erase(queue.begin()); // This line erases the front of the queue
// This line is an empty space
        for(int i = 0; i < edges[node].size(); i++) { // This line defines a for loop going from 0 to edges[node].size()
// This line is an empty space
            if(dist[node] + 1 < dist[edges[node].at(i)]) { // This line checks if dist[node] + 1 < dist[edges[node].at(i)]
// This line is an empty space
                queue.push_back(dist[edges[node].at(i)]); // This line pushes dist[edges[node].at(i)] into the queue
                dist[edges[node].at(i)] = dist[node] + 1; // This line sets dist[edges[node].at(i)] to dist[node] + 1  
// This line is an empty space
            } // This line is a curly bracket
// This line is an empty space    
        } // This line is another curly bracket
// This line is an empty space
    } // This line is yet another curly bracket
// This line is an empty space
    return dist[iE] == INT_MAX ? -1 : dist[iE]; // This line does things
// This line is an empty space
} // This line is yet ANOTHER curly bracket
