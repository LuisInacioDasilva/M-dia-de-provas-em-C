#include<stdio.h>
#include<locale.h>



int main (){
setlocale(LC_ALL,"Portuguese_Brazil");
double alunos_provas [3][3];



int contador = 1;
int contador2 = 1;
int contador3 = 1;
double mediaaluno[2];
double mediaprova[1];



for(int contadorP1 = 0; contadorP1 <= 2; contadorP1++){
printf("Digite a nota da P1 do %d° aluno:\n", contador);
scanf("%lf",&alunos_provas[contadorP1][0]);
mediaprova[0] = mediaprova[0] + alunos_provas[contadorP1][0];
contador++;



}
printf("\n");



for(int contadorP2 = 0; contadorP2 <= 2; contadorP2++){
printf("Digite a nota da P2 do %d° aluno:\n", contador2);
scanf("%lf",&alunos_provas[contadorP2][1]);
mediaprova[1] = mediaprova[1] + alunos_provas[contadorP2][1];
contador2++;



}
mediaaluno[0] = (alunos_provas[0][0] + alunos_provas[0][1])/2;
mediaaluno[1] = (alunos_provas[1][0] + alunos_provas[1][1])/2;
mediaaluno[2] = (alunos_provas[2][0] + alunos_provas[2][1])/2;



for(int i = 0; i <= 2; i++){
printf("\nA média do %d° aluno é: %lf", contador3, mediaaluno[i]);
contador3++;



}
mediaprova[0] = mediaprova[0] / 3;
mediaprova[1] = mediaprova[1] / 3;



printf("\nA média da P1 é: %lf ",mediaprova[0]);
printf("\nA média da P2 é: %lf ",mediaprova[1]);





return(0);
}

