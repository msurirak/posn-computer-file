#include <iostream>
using namespace std;
int main(){
    int rows,cols,nuke;
    cin>>rows>>cols;     
    cin>> nuke;            
    char grid[rows][cols];
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            grid[i][j] = '0';
    for(int i=0;i<nuke;i++) {
        int r,c;
        cin>>r>>c;
        grid[r][c] = 'x';
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 'x') continue;

            int count = 0;
            for (int dx=-1;dx<=1;dx++) {
                for (int dy = -1;dy <= 1; dy++) {
                    int ni = i+dx;
                    int nj = j+dy;
                    if (ni >= 0 && ni < rows && nj >= 0 && nj < cols) {
                        if (grid[ni][nj] == 'x')
                            count++;
                    }
                }
            }
            grid[i][j]='0'+count;
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<grid[i][j]<<" ";
        }
        cout << "\n";
    }

}
