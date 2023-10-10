#include<iostream>
using namespace std;

/*
    direction east = 0
        south = 1
        west= 2
        north = 3

*/

int main()
{
    int m,n;
    cin>>m>>n;
    int ** arr = new int*[m];

    for(int i=0; i<m; i++){
        arr[i] = new int[n];
        for(int j=0; j<n ; j++){
            cin>>arr[i][j];
        }
    }
   int dir = 0;
   int i = 0;
   int j = 0;

    while(true){
      dir = (dir + arr[i][j]) % 4;

      if(dir == 0){
        j++;
      }
      else if(dir == 1){
        i++;
      }
      else if(dir == 2){
        j--;
      }
      else if(dir == 3){
        i--;
      }

      if(i < 0){
        break;
      }
      else if(j < 0){
        break;
      }
      else if(i == m){
        i--;
        break;
      }

      else if(j == n){
        j--;
        break;
      }
    }

    cout<<i<<" "<<j;
    return 0;
}