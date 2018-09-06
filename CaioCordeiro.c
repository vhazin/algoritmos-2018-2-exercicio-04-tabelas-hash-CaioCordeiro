#include <stdio.h>
#include <math.h>
#include <malloc.h>
 int n,m,c,x,h;
 int i = 0;
 int s = 0;


int main(){
    scanf("%d",&n);
    while(i < n){ 
        scanf("%d %d",&m,&c);
        int array[m][c];
        for(int k=0;k<m;k++){
            for(int l=0;l<c;l++){
                array[k][l]=0;
            }
        }
        while(s < c){
            scanf("%d",&x);
            h =((x)%m); 
            for(int g = 0;g <c;g++){
                if(array[h][g]== 0){
                    array[h][g] = x;
                    break;
                }
            }
            s = s+1;                
        }
        for(int o=0 ; o < m ;o++){
            printf("%d",o);
            for(int j=0;j<=c;j++){
                if(array[o][j] != 0){
                    printf(" -> %d",array[o][j]);
                }
                else{
                    printf(" \\\n");
                    break;
                }
            
            }
        }
        if(i<=1){
            printf("\n");
        }
        
        s = 0;
        i = i+1;
    }
    return 0;
}
