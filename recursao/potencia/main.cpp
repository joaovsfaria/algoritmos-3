#include <iostream>

using namespace std;

double pow(int a, int n) {
    if(p==0){
        return 1;
    } else {
        return n * pow(n, p-1);
    } 
}

int main() {
    
    int n;
    int expoente;
    cin >> n >> expoente;
    int res =  pow(n, expoente);
    cout << res;
    
    
    
    return 0;
}