#include <stdio.h>

int main(void) {

  int conta, qtlesma, vel [100], duracao, limite, max;

  printf("Digite a quantidade de lesmas que irão correr: ");
  scanf("%d", &qtlesma);

  printf("Digite a duracao da corrida (max 3): ");
  scanf("%d", &duracao);

  if (duracao > 3){
    printf("--------A corrida n pode durar mais que 3 horas--------");
    return 0;
  }
  
  for (conta = 0; conta < qtlesma; conta++){
    printf("digite a velocidade da lesma %d (cm/h): ",conta + 1);
    scanf("%d", &vel[conta]);
  }
  
  if (duracao == 3){
    limite = 10;
  }else if (duracao == 2){
    limite = 20;
  }else if (duracao == 1){
    limite = 100;
  }

  max = 0;

  for (conta = 0; conta < qtlesma ; conta ++){
    if(vel[conta] > max && vel[conta] <= limite){
      max = vel[conta];
    }
  }
  printf("velocidade da lesma mais rapida capaz de competir: %dcm/s", max);
}