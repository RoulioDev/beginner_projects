#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void main (){
    char caracters[] = "!,\",#,$,%,&,',(,),*,+,,,-,.,/,0,1,2,3,4,5,6,7,8,9,:,;,<,=,>,?,@,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,[,\\,],^,_,`,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,{,|,},~";
    int lenght;
    printf("What lenght do you want for your password ? ");
    scanf("%d",&lenght);
    
    srand(time(0));
    for(int i = 0; i < lenght; i++){
        int j = rand()%strlen(caracters);
        if (j % 2 == 1){
            j += 1;
        }
        printf("%c",caracters[j]);
    }
    printf("\n");
}
