#include<iostream>
using namespace std;
int main(){
    int i,j;
int a[3][3],b[3][3],c[3][3],d[3][3];
    cout <<"Enter the elements of the 1st matrix" <<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin >>a[i][j];
        }
    }
    cout <<"The 1st matrix is:" <<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout <<a[i][j]<<" ";
        }cout <<endl;
    }
    cout <<"Enter the elements of the 2nd matrix" <<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin >>b[i][j];
        }
    }
    cout <<"The 2nd matrix is:" <<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout <<b[i][j] <<" ";
        }cout <<endl;
    }
    int s1[3][3],s2[3][3];
    cout <<endl <<"The sum of the original matrices:"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          s1[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout <<s1[i][j] <<" ";
        }cout <<endl;
    }
    //Transpose of matrises
    cout <<"Traspose of the 1st matrix:" <<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        c[i][j]=a[j][i];
    }
}
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout <<c[i][j] <<" ";
        }cout <<endl;
    }
    cout <<"Traspose of the 2nd matrix:" <<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        d[i][j]=b[j][i];
    }
}
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout <<d[i][j] <<" ";
        }cout <<endl;
    }
    cout <<"The sum of the transposes of the matrices:"<< endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          s2[i][j]=c[i][j]+d[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout <<s2[i][j] <<" ";
        }cout <<endl;
    }
}