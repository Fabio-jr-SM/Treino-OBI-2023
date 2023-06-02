/******************************************************************************
Entrada
A primeira linha da entrada contém dois números inteiros M e N, indicando respectivamente o
número de tipos e o número de tamanhos de peças de roupa no estoque. Tipos são identificados
por inteiros de 1 a M e tamanhos são identificados por inteiros de 1 a N. Cada uma das M linhas
seguintes contém N inteiros Xi,j , indicando a quantidade de roupas do tipo i e tamanho j, para
1 ≤ i ≤ M e 1 ≤ j ≤ N. A seguir a entrada contém uma linha com um número inteiro P, o
número de pedidos recebidos pela loja. Cada uma das P linhas seguintes contém dois inteiros I e
J representando respectivamente o tipo e o tamanho da peça de roupa de um pedido. Os pedidos
são dados na ordem em que foram feitos.
Saída
Seu programa deve produzir uma única linha, contendo um único inteiro, o número total de peças
de roupas efetivamente vendidas.
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,j,N,M,Vendas,cont=0;
    scanf("%d%d",&M,&N);
    
    if((N>=1 && N<=500) && (M>=1 && M<=500) && (M+N<=10)){
        int matriz[M][N];
        
        for(i=1;i<=M;i++){
            for(j=1;j<=N;j++){
                scanf("%d",&matriz[i][j]);
            }
        }
        
        scanf("%d",&Vendas);
        if(Vendas>=1 && Vendas<=1000){    
            int estoque1,estoque2;
            
            for(j=1;j<=Vendas;j++){
                scanf("%d%d",&estoque1,&estoque2);
                if((estoque1>=1 && estoque1<=M) && (estoque2>=1 && estoque2<=N)){
                    if(matriz[estoque1][estoque2]>0){
                        cont++;
                        matriz[estoque1][estoque2]=(matriz[estoque1][estoque2])-1;
                    }
                }
            }
            
            printf("%d",cont);
        }
    }
    return 0;
}
