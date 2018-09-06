#include <stdio.h>
#include <math.h>
#include <malloc.h>
 long int n,m,c,x,h;
 long int i = 0;
 long int s = 0;
 long int* aux1= 0;
 long int aux2 =0;

int main(){
    scanf("%ld",&n);
    while(i <= n){ 
        scanf("%ld %ld",&m,&c);
        long int array[m][c];
        for(int k=0;k<m;k++){
            for(int l=0;l<c;l++){
                array[k][l]=0;
            }
        }
        while(s <= c){
            scanf("%ld ",&x);
            h =((x)%m); 
            array[h][s] = x;
            s = s+1;
                
        }
        printf("\n");
        for(long int o=0 ; o <= m ;o++){
            printf("%ld",o);
            for(long int j=0;j<=c;j++){
                if(array[o][j] != 0){
                    printf(" -> %ld",array[o][j]);
                }
                else{
                    printf(" \\\n");
                    break;
                }
            
            }
        }
        if(i>=1)
            printf("\n");
        
        s = 0;
        i = i+1;
    }
    i=0;
    return 0;
}








