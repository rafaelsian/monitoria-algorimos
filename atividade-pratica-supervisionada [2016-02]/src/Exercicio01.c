#include <stdio.h>
#include <string.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    char animais[25][20] = {"avestruz", "aguia", "burro", "borboleta", "cachorro", "cabra", "carneiro", "camelo", "cobra", "coelho", "cavalo", "elefante", "galo", "gato", "jacare", "leao", "macaco", "porco", "pavao", "peru", "touro", "tigre", "urso", "veado", "vaca"};
    int numeroEscolhido, numeroSorteado, i, vetorNumeroEscolhido[8], vetorNumeroSorteado[8], tamanhoNumeroEscolhido, tamanhoNumeroSorteado;
    int aux, submodo, dezena, centena, milhar;
    float valorAposta, premio = 0.0;

    while(1)
    {
        do
        {
            printf("Informe o valor da aposta: ");
            scanf("%f", &valorAposta);
        }
        while (valorAposta <= 0.0 && valorAposta != -1.0);

        if (valorAposta == -1.0)
        {
            printf("Encerrou o programa");
            break;
        }

        do
        {
            printf("Digite o numero escolhido: ");
            scanf("%d", &numeroEscolhido);
        }
        while (numeroEscolhido < 0 || numeroEscolhido > 1000000);

        do
        {
            printf("Digite o submodo escolhido: ");
            scanf("%d", &submodo);
        }
        while (submodo < 1 || submodo > 4);


        //Preenchendo os vetores com zeros
        for (i = 0; i < 8; i++)
        {
            vetorNumeroEscolhido[i] = 0;
            vetorNumeroSorteado[i] = 0;
        }

        //Preenchendo o vetor com o numero escolhido
        aux = numeroEscolhido;
        tamanhoNumeroEscolhido = 0;
        while (aux > 0)
        {
            vetorNumeroEscolhido[tamanhoNumeroEscolhido] = aux % 10;
            tamanhoNumeroEscolhido++;
            aux /= 10;
        }

        //Gerando o número aleatório
        numeroSorteado = rand()%1000000;
        numeroSorteado = 5640;

        //Preenchendo o vetor com o numero gerado
        aux = numeroSorteado;
        tamanhoNumeroSorteado = 0;
        while (aux > 0)
        {
            vetorNumeroSorteado[tamanhoNumeroSorteado] = aux % 10;
            tamanhoNumeroSorteado++;
            aux /= 10;
        }

        //printf("\nnumero sorteado: %d\n", numeroSorteado);

        /*printf ("\nvetor escolhido: \n");
        for (i = 0; i < 8; i++)
        {
            printf ("%d ", vetorNumeroEscolhido[i]);
        }

        printf ("\nvetor sorteado: \n");
        for (i = 0; i < 8; i++)
        {
            printf ("%d ", vetorNumeroSorteado[i]);
        }*/

        //Pega o grupo escolhido
        int grupoEscolhido = vetorNumeroEscolhido[1] * 10 + vetorNumeroEscolhido[0]; /*(tamanhoNumeroEscolhido == 1 ? 0 : (vetorNumeroEscolhido[tamanhoNumeroEscolhido - 2])) * 10 + vetorNumeroEscolhido[tamanhoNumeroEscolhido - 1];*/
        int grupoSorteado = vetorNumeroSorteado[1] * 10 + vetorNumeroSorteado[0]; /*(tamanhoNumeroSorteado == 1 ? 0 : (vetorNumeroSorteado[tamanhoNumeroSorteado - 2])) * 10 + vetorNumeroSorteado[tamanhoNumeroSorteado - 1];*/

        //Verificação para quando ocorre numero com final 00 que é o grupo da vaca
        grupoEscolhido = grupoEscolhido == 0 ? 100 : grupoEscolhido;
        grupoSorteado = grupoSorteado == 0 ? 100 : grupoSorteado;

        //Pega o indice do grupo
        int indiceEscolhido = (grupoEscolhido) % 4 == 0 ? (grupoEscolhido/4) - 1 : (grupoEscolhido/4);
        int indiceSorteado = (grupoSorteado) % 4 == 0 ? (grupoSorteado/4) - 1 : (grupoSorteado/4);

        //printf ("\n Ind escolhido: %d\tInd sorteado: %d", indiceEscolhido, indiceSorteado);
        //submodo grupo
        printf("\nValor da aposta: %.2f", valorAposta);
        printf("\nNumero escolhido: %d", numeroEscolhido);
        printf("\nNumero sorteado: %d", numeroSorteado);
        switch (submodo)
        {
            //Aposta de grupo
            case 1:
                /*printf("\ntam1: %d tam2: %d", tamanhoNumeroEscolhido, tamanhoNumeroSorteado);
                printf ("\Grupo escolhido: %d\Grupo sorteado: %d", (int)(grupoEscolhido), (int)(grupoSorteado));
                printf ("\nAnimal escolhido: %s\nAnimal sorteado: %s", animais[indiceEscolhido], animais[indiceSorteado]);*/
                printf("\nSub-modo: grupo");
                if (animais[indiceEscolhido] == animais[indiceSorteado])
                {
                    premio = 18.0 * valorAposta;
                }
                break;

            //Aposta de dezena
            case 2:
                dezena = vetorNumeroSorteado[1] * 10 + vetorNumeroSorteado[0];
                printf("\nSub-modo: dezena");
                if (dezena == numeroEscolhido)
                {
                    premio = 60.0 * valorAposta;
                }
                break;

            //Aposta de centena
            case 3:
                centena = vetorNumeroSorteado[2] * 100 + vetorNumeroSorteado[1] * 10 + vetorNumeroSorteado[0];
                printf("\nSub-modo: centena");
                if (centena == numeroEscolhido)
                {
                    premio = 600.0 * valorAposta;
                }
                break;

            //Aposta de milhar
            case 4:
                milhar = vetorNumeroSorteado[3] * 1000 + vetorNumeroSorteado[2] * 100 + vetorNumeroSorteado[1] * 10 + vetorNumeroSorteado[0];
                printf("\nSub-modo: milhar");
                if (milhar == numeroEscolhido)
                {
                    premio = 4000.0 * valorAposta;
                }
                break;
        }
        printf("\nPremio: %.2f", premio);
        printf("\nBicho: %s\n\n", animais[indiceSorteado]);
    }

    return 0;
}
