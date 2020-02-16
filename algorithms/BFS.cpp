#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int n = 10000;
vector<int> edges[10000];

int BFS(int iS, int iE) {
    
    vector<int> queue;
    queue.push_back(iS);
    int dist[n] = {0};
    for(int i = 1; i < n; i++) dist[i] = INT_MAX;
    
    while(!queue.empty()) {
        
        int node = queue.front();
        queue.erase(queue.begin());
        
        for(int i = 0; i < edges[node].size(); i++) {
            
            if(dist[node] + 1 < dist[edges[node].at(i)]) {
                
                queue.push_back(dist[edges[node].at(i)]);
                dist[edges[node].at(i)] = dist[node] + 1;
                
            }
            
        }
        
    }
    
    return dist[iE] == INT_MAX ? -1 : dist[iE];
    
}
