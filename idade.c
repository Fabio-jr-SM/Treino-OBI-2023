#include <stdio.h>

int main(void) {
  
    /*Mas nada disso interessa para esta tarefa: estamos interessados apenas nas 
    suas idades. Sabemos que Cibele nasceu antes de Camila e Celeste nasceu
    depois de Camila.
    (Cibele, Camila, Celeste)
    Dados três números inteiros indicando as idades das irmãs, escreva um
    programa para determinar a idade de Camila.


    Entrada
    A entrada é composta por três linhas, cada linha contendo um número inteiro 
    N, a idade de uma das irmãs.
    
    Saída
    Seu programa deve produzir uma única linha, contendo um único número 
    inteiro, a idade de Camila.
    Restrições
    • 5 ≤ N ≤ 100
    
    (Cibele, *Camila*, Celeste)*/
    
     int date1,date2,date3;
    
    scanf("%d%d%d",&date1,&date2,&date3);
    
    if(date1>=date2 && date1<=date3){
        printf("%d",date1);
    } else if(date1<=date2 && date1>=date3){
        printf("%d",date1);
        
        
    } else if(date2>=date1 && date2<=date3){
        printf("%d",date2);
    } else if(date2<=date1 && date2>=date3){
        printf("%d",date2);
        
        
        
    } else if(date3>=date1 && date3<=date2){
        printf("%d",date3);
    } else if(date3<=date1 && date3>=date2){
        printf("%d",date3);
    }

    
    return 0;
}
