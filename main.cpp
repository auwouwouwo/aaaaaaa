#include <iostream>
#include <queue>

using namespace std;

int main(){
    cout << ("C++ ");
    
    queue<double> q;

    for(size_t i = 0; i < 10000000; i++){
        q.push((2.0f/3.0f)*(double)i);
    }

    cout << "total " << q.size() << endl;
    return 0;
}

