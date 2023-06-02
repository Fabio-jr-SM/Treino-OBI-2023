/******************************************************************************
Entrada
A entrada contém quatro linhas. A primeira linha contém um inteiro V , o valor que Vô João tem
disponível para pagar as contas. A segunda linha contém um inteiro A, o valor da conta do Açougue.
A terceira linha contém um inteiro F, o valor da conta da Farmácia. A quarta linha contém um
inteiro P, o valor da conta da Padaria.
Saída
Seu programa deve produzir uma única linha, contendo um único inteiro, o maior número de contas
que Vô João consegue pagar.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int Vdis,A,F,P,num0=0,num1=1,num2=2,num3=3;
    scanf("%d%d%d%d",&Vdis,&A,&F,&P);

    if((Vdis>=0 && Vdis<=2000) && (A>=1 && A<=1000) && (F>=1 && F<=1000) && (P>=1 && P<=1000)){
        if(Vdis>= (A+F+P)){
            printf("%d",num3);
        } else if(Vdis>=A+F){
            printf("%d",num2);
        } else if(Vdis>=A+P){
            printf("%d",num2);
        } else if(Vdis>=P+F){
            printf("%d",num2);
            
            
        } else if(Vdis>=A){
            printf("%d",num1);
        } else if(Vdis>=P){
            printf("%d",num1);
        } else if(Vdis>=F){
            printf("%d",num1);
        } else{
            printf("%d",num0);
        }
    }
    return 0;
}
