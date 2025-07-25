#include<iostream>
using namespace std;

int main(){

        int r1,c1,r2,c2;

        cout<<"what will be the row number of the 1st matrix : ";
        cin>>r1;
         cout<<"what will be the column number of the 1st matrix : ";
        cin>>c1;
         cout<<"what will be the row number of the 2nd matrix : ";
        cin>>r2;
         cout<<"what will be the column number of the 2nd matrix : ";
        cin>>c2;

        if(c1==r2){

        int matrix1[r1][c1];
        int matrix2[r2][c2];
        int matrix3[r1][c2];
        int k;

       cout<<"Enter the elements of Matrix 1 : ";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cin>>matrix1[i][j];
            }
        }

        cout<<"Matrix 1"<<endl;
        cout<<"----------"<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cout<<matrix1[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"Enter the elements of Matrix 2 : ";
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cin>>matrix2[i][j];
            }
        }

         cout<<"Matrix 2"<<endl;
        cout<<"----------"<<endl;
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cout<<matrix2[i][j]<<" ";
            }
            cout<<endl;
        }

       cout<<"Matrix 3"<<endl;
        cout<<"----------"<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                    int sum=0;
                for( k=0;k<c1;k++){

                    sum=sum+(matrix1[i][k]*matrix2[k][j]);

                }
                matrix3[i][j]=sum;

                cout<<matrix3[i][j]<<" ";
            }
            cout<<endl;
        }

        }
        else{
            cout<<"multiplication cant be possible";
        }
}
