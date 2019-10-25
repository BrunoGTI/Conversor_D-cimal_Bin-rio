#include<stdlib.h>
#include<stdio.h>


main(){

int a;
int soma;
int cont;
int p=7;
char num[8]="";
int opcao;



do{
printf("\ndigite 1 para converte pra binario\n");
printf("digite 2 para sair\n");
printf("digite uma opcao: ");
scanf("%d" , &opcao);



switch(opcao){
case 1:
printf("\n\n<<<<<<<<<< Converte numero decimal para binario >>>>>>>>>>\n");
printf("Digite um numero: ");
scanf("%d",&a);
while(a>=1){
soma = a % 2;
a = a - soma;
a = a / 2;
num[p]=soma;
p--;
cont++;
}

for(int g=0;g<=7;g++){
printf("%d ",num[g]);	

}
break;

case 2:
exit(0);
default:
printf("opcao incorreta\n");	

}
}while(opcao != 2);
}
