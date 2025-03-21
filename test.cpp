#include <iostream>
using namespace std;
const int MAX = 1000;
char a[MAX][MAX];
int main (){
    int m , n; cin >> m >> n ;
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            if (a[i][j] == '#')
            count ++;
        }
    }   
    cout << count ;
    
    return 0;
}