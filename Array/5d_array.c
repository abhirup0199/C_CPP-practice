//5D array
#include<stdio.h>
#include<stdlib.h>

// main function for creating a 5d array and storing it and printing it

int main(){
    int a[2][3][3][3][2];
    int i,j,k,l,m;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                for(l=0;l<3;l++){
                    for(m=0;m<2;m++){
                        a[i][j][k][l][m]=i+j+k+l+m;
                    }
                }
            }
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                for(l=0;l<3;l++){
                    for(m=0;m<2;m++){
                        printf("%d\t",a[i][j][k][l][m]);
                    }
                    printf("\n");
                }
            }
        }
    }
}