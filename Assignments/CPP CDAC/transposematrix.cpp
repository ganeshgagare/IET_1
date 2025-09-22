#include <iostream>
using namespace std;

int main(){
   int rows=2;
   int columns=3;

   int mat[2][3]={{1,2,3},{4,5,6}};
   int tran[3][2];

   //Transpose
   for (int i=0;i<rows;i++){
    for (int j=0;j<columns;j++){
        tran[j][i]=mat[i][j];
    }
   }


   cout<<"Original matrix:"<< endl;
   for (int i=0;i<rows;i++){
    for (int j=0;j<columns;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
   }

   cout<<"Transpose matrix:"<< endl;
   for (int i=0;i<columns;i++){
    for (int j=0;j<rows;j++){
        cout<<tran[i][j]<<" ";
    }
    cout<<endl;
   }


    return 0;
}