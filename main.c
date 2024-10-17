#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void senhaGerada(int tamanho, char *senha, const char *caracters){
  for(int i = 0; i < tamanho; i++){
    int indice = rand() % strlen(caracters);
    senha[i] = caracters[indice];
  }
  senha[tamanho] = '\0';
}

int main() {
  int tamanho;
  char senha[100];
  char caracteres[] = "abcdefghijklmnopqrstuvxwyz";

  srand(time(NULL));

  printf("---BEM VINDO AO GERADOR DE SENHAS---\n");
  printf("Digite o tamanho da sua senha: ");
  scanf("%d", &tamanho);

  senhaGerada(tamanho, senha, caracteres);

  printf(" a sua senha gerada foi: %s", senha);
  
  
  
  
  
  
  return 0;
}