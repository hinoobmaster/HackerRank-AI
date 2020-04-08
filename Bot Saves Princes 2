#include <iostream>
#include <vector>
using namespace std;

void nextMove(int n, int r, int c, vector <string> grid){
    int pos[2] = {0,0};

    //pencarian putri
    for(int x=0; x<n; x++){
        for(int y=0; y<n; y++){
            if(grid[y][x]=='p'){
                pos[0] = x;
                pos[1] = y;
                break;
            }
        }
    }
    
    //pencarian bot
    int jarakX = abs(c-pos[0]);
    int jarakY = abs(r-pos[1]);
    
    if(jarakX<jarakY){
        if(pos[1]<r){
            printf("UP\n"); //putri ada di posisi sebelah atas bot
        }else{
            printf("DOWN\n"); //putri ada di posisi sebelah bawah bot
        }
    }else{
        if(pos[0]<c){
            printf("LEFT\n"); //putri ada di sebelah kiri bot
        }else{
            printf("RIGHT\n"); //putri ada di posisi sebelah kanan bot
        }        
    }
    
}

int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
