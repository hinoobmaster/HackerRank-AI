#include <iostream>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid){
    int mid = n/2;
    int pos[2] = {0,0};
    for(int x=0; x<n; x++){
        for(int y=0; y<n; y++){
            if(grid[y][x]=='p'){
                pos[0] = x;
                pos[1] = y;
                break;
            }
        }
    }
    if(pos[0]<mid){
        for(int i=mid; i>pos[0]; i--)printf("LEFT\n");
    }else{
        for(int i=mid; i<pos[0]; i++)printf("RIGHT\n");
    }
    
    if(pos[1]<mid){
        for(int i=mid; i>pos[1]; i--)printf("UP\n");
    }else{
        for(int i=mid; i<pos[1]; i++)printf("DOWN\n");
    }
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
