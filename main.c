# Projeto-Jogo-Girotto

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    
    int opcao;
    int escolha;
    char resposta = ' '; 
   
    srand(time(NULL));
  
    while(1){
    
        printf("\n======JOGOS DISPONIVEIS======\n");
        printf("                                   \n ");
        printf("1.  perguntas e respostas\n");
        printf(" 2.  cobra na caixa!\n");
        printf(" 3.  gosmas war\n");
        printf(" 4.  SAIR DO JOGO\n");
        printf("\n escolha o jogo que deseja jogar: ");
        scanf("%i", &opcao);
         
        switch(opcao){ 
        
        case 1: 
            {
                system("cls || clear");
                char jogarNovamente = 's';
                char resposta;
                int voltarMenu = 0;
                
                while (jogarNovamente == 's' || jogarNovamente == 'S') {
                
                resposta = ' ';
                while(resposta != 'e' && resposta != 'E')
                {
                    printf("\nVOCE ESCOLHEU O JOGO: DE PERGUNTAS E RESPOSTAS>>>>>>\n\n");
                    printf("========================================================================================================================\n");
                    printf("baseado nos seus conhecimentos ate essas etapa do curso de ciencia da computacao, responda o quiz aceguir sobre algoritimos.\n\n");
                    printf("========Para que se serve a funcao PRINTF em C========\n\n");
                    printf("a) para ler dados digitados pelo usuario no teclado.\n");
                    printf("b) para realizar calculos matematicos automatico.\n");
                    printf("c) para armazenar valores dentro de variaveis.\n");
                    printf("d) para repetir um bloco de codigo varias vezes.\n");
                    printf("e) para exibir informacoes na tela (no console).\n\n"); 
                              
                    printf("0) Voltar ao Menu Principal\n");
                    scanf(" %c",&resposta);
                    
                    if (resposta == '0'){
                        voltarMenu = 1; 
                        break;
                    }
                    
                    printf("Digite a sua resposta: \n"); 
                    scanf(" %c",&resposta);
            
                    if(resposta=='e')
                    {
                        printf("\nParabens!!\n");
                        printf("\nPara a procima pergunta aperte =ENTER=>>>>\n");
                        getchar();
                        getchar();
                    }
                    else if(resposta=='a'||resposta=='b'||resposta=='c'||resposta=='d')
                    {
                        printf("Resposta errada, para tentar novamente aperte ==R + ENTER==");
                        scanf(" %c", &resposta);
                        getchar();
                    }
                }
                
                resposta = ' ';
                while(resposta != 'b' && resposta != 'B')
                {
                    if (voltarMenu == 1){
                        break;
                    }
                    
                    printf("\n=======para que serve a funcao SCANF na linguagem C=======\n\n");
                    printf("a) Para exibir mensagens na tela do computador.\n");
                    printf("b) Para ler dados digitados pelo usuario no teclado.\n");
                    printf("c) criar variaes altomatica.\n");
                    printf("d) apagar dados do progama.\n");
                    printf("e) repete comando varias vezes.\n\n");
                    printf("digite a sua resposta: \n");
                    scanf(" %c", &resposta);
                    
                    if(resposta=='b')
                    {
                        printf("\nParabens!!\n");
                        printf("\nPara a procima pergunta aperte =ENTER=>>>>\n");
                        getchar();
                        getchar();
                    }
                    else if(resposta=='a'||resposta=='c'||resposta=='d'||resposta=='e')
                    {
                        printf("\nResposta errada, para tentar novamente aperte ==R + ENTER==\n");
                        scanf(" %c", &resposta);
                        getchar(); 
                    }
                }
                
                resposta = ' ';
                while(resposta != 'd' && resposta != 'D')
                {
                    if (voltarMenu == 1) {
                        break; 
                    }
                      
                    printf("========Para que serve a estrutura if na linguagem C?========\n\n");
                    printf("a) Repetir um bloco de codigo varias vezes.\n");
                    printf("b) Declarar variaveis no programa.\n");
                    printf("c) Fazer calculos matematicos automaticamente.\n");
                    printf("d) Verificar uma condicao e executar um bloco de código se ela for verdadeira.\n");
                    printf("e) Criar funcoes dentro do programa.\n\n");        
                  
                    printf("Digente a sua resposta: \n"); 
                    scanf(" %c",&resposta);
                  
                    if(resposta=='d')
                    {
                        printf("\nParabens!!\n");
                        printf("\nPara a procima pergunta aperte =ENTER=>>>>\n");
                        getchar();
                        getchar();
                    }
                    else if(resposta=='a'||resposta=='b'||resposta=='c'||resposta=='e')
                    {
                        printf("Resposta errada, para tentar novamente aperte ==R + ENTER==");
                        scanf(" %c", &resposta);
                        getchar();
                    }
                }
                
                resposta = ' ';
                while(resposta != 'b' && resposta != 'B')
                {
                    if (voltarMenu == 1) {
                        break; 
                    }
                    
                    printf("\n=======Sobre a estrutura de repeticao while na linguagem C, qual alternativa esta correta?=======\n\n");
                    printf("a) O while executa o bloco de codigo pelo menos uma vez, mesmo que a condição seja falsa.\n");
                    printf("b) O while repete um bloco de codigo enquanto a condicao especificada for verdadeira. ?\n");
                    printf("c) O while so pode ser usado para repetir código exatamente 10 vezes.\n");
                    printf("d) O while serve apenas para comparar valores entre variaveis.\n");
                    printf("e) O while nao precisa de condicao logica para funcionar.\n\n");
                    printf("digite a sua resposta: \n");
                    scanf(" %c", &resposta);
                    
                    if(resposta=='b')
                    {
                        printf("\nParabens!!\n");
                        printf("\nJOGO FINALIZADO\n");
                        getchar();
                        getchar();
                    }
                    else if(resposta=='a'||resposta=='c'||resposta=='d'||resposta=='e')
                    {
                        printf("\nResposta errada, para tentar novamente aperte ==R + ENTER==\n");
                        scanf(" %c", &resposta);
                        getchar(); 
                    }
                }
                
                // --- OPÇÃO DE JOGAR DE NOVO ---
                printf("\n============================================\n");
                printf("Deseja jogar o quiz novamente? (s/n): ");
                scanf(" %c", &jogarNovamente);
                }    
                break;
            }
            
        case 2: 
        {
            system("cls || clear");
            char jogarNovamente = 's';
            char resposta;
            
            while (jogarNovamente == 's' || jogarNovamente == 'S') {
                    
                int escolhaJogador1, escolhaJogador2;
                int caixaBotao = 3; 
                int caixaCobra = 5;  
                
                int aberta1 = 0, aberta2 = 0, aberta3 = 0, aberta4 = 0, aberta5 = 0;
                int jogoAtivo = 1;
                int turno = 1; 

                printf("\n================== BEM-VINDO AO COBRA NA CAIXA ===================\n");
                printf("Regras: Encontre o BOTAO para vencer. Se encontrar a COBRA, perde!\n\n");

                while (jogoAtivo == 1) {
                    int escolha;
                    
                    printf("\n--- VEZ DO JOGADOR %d ---\n", turno);
                    printf("Status das Caixas:\n");
                    printf("1: %s | 2: %s | 3: %s | 4: %s | 5: %s\n", 
                        (aberta1 ? "ABERTA" : "FECHADA"), (aberta2 ? "ABERTA" : "FECHADA"),
                        (aberta3 ? "ABERTA" : "FECHADA"), (aberta4 ? "ABERTA" : "FECHADA"),
                        (aberta5 ? "ABERTA" : "FECHADA"));

                    printf("Escolha uma caixa (1-5) ou digite 0 para voltar ao menu: ");
                    scanf("%d", &escolha);
                    
                      if (escolha == 0) {
                        jogarNovamente = 'n'; 
                        break;                
                       }
                       
                    int jaAberta = 0;
                    if (escolha == 1 && aberta1 == 1) jaAberta = 1;
                    if (escolha == 2 && aberta2 == 1) jaAberta = 1;
                    if (escolha == 3 && aberta3 == 1) jaAberta = 1;
                    if (escolha == 4 && aberta4 == 1) jaAberta = 1;
                    if (escolha == 5 && aberta5 == 1) jaAberta = 1;

                    if (escolha < 1 || escolha > 5 || jaAberta == 1) {
                        printf("Jogada invalida! Tente outra caixa.\n");
                    } else {
                        if (escolha == 1) aberta1 = 1;
                        else if (escolha == 2) aberta2 = 1;
                        else if (escolha == 3) aberta3 = 1;
                        else if (escolha == 4) aberta4 = 1;
                        else if (escolha == 5) aberta5 = 1;

                        if (escolha == caixaBotao) {
                            printf("\n*** PARABENS! O JOGADOR %d ACHOU O BOTAO E ESCAPOU! ***\n", turno);
                            jogoAtivo = 0;
                        } 
                        else if (escolha == caixaCobra) {
                            printf("\n--- QUE AZAR! O JOGADOR %d ACHOU A COBRA! ---\n", turno);
                            if (turno == 1) printf("VITORIA DO JOGADOR 2!\n");
                            else printf("VITORIA DO JOGADOR 1!\n");
                            jogoAtivo = 0;
                        } 
                        else {
                            printf("Caixa vazia... a tumba continua silenciosa.\n");
                            if (turno == 1) turno = 2;
                            else turno = 1;
                        }
                    }
                }

                printf("\n============================================\n");
                printf("Deseja jogar o jogo novamente? (s/n): ");
                scanf(" %c", &jogarNovamente);
            }

            printf("Obrigado por jogar!\n");
            break;
        }   
        case 3:
            {
                system("cls || clear");
                
                printf("\n=================== BEM-VINDO AO GOUSMAS WAR =====================\n");
                printf("\n OBJETIVO>>>\n\n");
                printf("    >>destruir as duas gousmas do adversario. Uma gousma e destruida quando o valor dela ultrapassa 5.<<\n"); 
                getchar();
                getchar();
                  
                printf("\n REGRAS DO JOGO>>>\n\n");
                printf("     Inicio: Cada jogador começa com duas gousmas, ambas com valor 1.\n     Turnos: Os jogadores se alternam realizando uma acao por vez.\n\n     Acoes Possiveis:\n      Atacar: Voce escolhe uma das suas gousmas vivas e soma o valor dela ao valor de uma gousma do oponente.\n      Dividir: Voce tira pontos de uma gousma sua e passa para a outra (util para 'reviver' uma gousma ou equilibrar os valores).\n");
                getchar();
                
                printf("  >JOGAR...\n");  
                getchar();
                char jogarNovamente = 's';

                while (jogarNovamente == 's' || jogarNovamente == 'S') {
                    
                    int g[4] = {1, 1, 1, 1}; 
                    int turno = 1; 
                    int jogoAtivo = 1;

                    while (jogoAtivo == 1) {
                        
                        if (g[0] == -1 && g[1] == -1) {
                            printf("\nJogador 2 VENCEU!\n");
                            jogoAtivo = 0;
                        } else if (g[2] == -1 && g[3] == -1) {
                            printf("\nJogador 1 VENCEU!\n");
                            jogoAtivo = 0;
                        } else {
                            printf("\n--- TURNO JOGADOR %d ---\n", turno);
                            
                            int off = (turno == 1) ? 0 : 2;    
                            int alvoOff = (turno == 1) ? 2 : 0; 

                            printf("Gousma 1: %d | Gousma 2: %d\n", g[off], g[off+1]);
                            
                            // AQUI A MUDANÇA: Adicionamos o 0 no menu
                            printf("\n1 - Atacar | 2 - Dividir | 0 - Voltar ao Menu\nEscolha: \n");
                            
                            int acao;
                            scanf("%d", &acao);

                            // AQUI A MUDANÇA: O if que interrompe o jogo 3
                            if (acao == 0) {
                                jogarNovamente = 'n';
                                break; 
                            }

                            if (acao == 1) {
                                int minha, alvo;
                                printf("Sua gousma (1 ou 2) no alvo (1 ou 2): ");
                                scanf("%d %d", &minha, &alvo);
                                minha--; alvo--; 

                                if (g[off + minha] != -1 && g[alvoOff + alvo] != -1) {
                                    g[alvoOff + alvo] += g[off + minha];
                                    
                                    if (g[alvoOff + alvo] > 5) {
                                        printf("Gousma inimiga estourou!\n");
                                        g[alvoOff + alvo] = -1;
                                    }
                                    if (turno == 1) turno = 2; else turno = 1;
                                } else {
                                    printf("Movimento invalido! Gousma destruida nao ataca.\n");
                                }
                            } 
                            else if (acao == 2) {
                                int minha, quant;
                                printf("Qual gousma dividir (1 ou 2) e quanto passar: ");
                                scanf("%d %d", &minha, &quant);
                                minha--;
                                int outra = (minha == 0) ? 1 : 0;

                                if (g[off + minha] > quant && quant > 0) {
                                    g[off + minha] -= quant;
                                    
                                    if (g[off + outra] == -1) g[off + outra] = quant;
                                    else g[off + outra] += quant;

                                    if (g[off + outra] > 5) g[off + outra] = -1;
                                    
                                    if (turno == 1) turno = 2; else turno = 1;
                                } else {
                                    printf("Quantidade invalida!\n");
                                }
                            }
                        }
                    }

                    if (jogarNovamente != 'n') {
                        printf("\nJogar novamente? (s/n): ");
                        scanf(" %c", &jogarNovamente);
                    }
                }

                printf("Fim de jogo!\n");
                break;
            }
            
        case 4:
            system("cls || clear");
            printf("\n============================================\n");
            printf("       OBRIGADO POR JOGAR O ARCADE!         \n");
            printf("             ATE A PROXIMA!                 \n");
            printf("============================================\n");
            exit(0); 
            break;

        default:
            printf("\nOpcao invalida! Por favor, escolha um numero de 1 a 4.\n");
            break;
        } 
    }
    return 0;
}
