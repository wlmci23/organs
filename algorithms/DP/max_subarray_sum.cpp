#include <iostream>
#include <climits>
#include <vector>

using namespace std;

vector<int> arr;

int doKadane() {
    
    int gMax = INT_MIN;
    int cMax = 0;
    
    for(int i : arr) {
        
        cMax += i;
        gMax = max(gMax,cMax);
        if(cMax < 0) {
            
            cMax = 0;
            
        }
        
    }
    
    return gMax;
    
}
