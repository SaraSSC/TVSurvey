#include <iostream>
using namespace std;

int main() {
    int casas_pesquisadas = 0;
    int total_pessoas = 0;
    int pessoas_por_canal[5] = {0}; // Índices representam os canais (0 - não utilizado)

    // Entrada de dados
    while (true) {
        int canal, pessoas;

        cout << "Digite o número do canal (-1 para encerrar e mostrar resultados): ";
        cin >> canal;

        if (canal == -1) {
            break;
        }

        // Verifica se o canal é válido
        if (canal >= 1 && canal <= 4) {
            cout << "Digite o número de pessoas assistindo: ";
            cin >> pessoas;

            // Verifica se o número de pessoas é válido


            if (pessoas >= 0) {
                casas_pesquisadas++; // Contador
                total_pessoas += pessoas;
                pessoas_por_canal[canal] += pessoas;
            } else {
                cout << "Número inválido de pessoas." << endl;
            }
        } else {
            cout << "Canal inválido." << endl;
        }
    }

    cout << "Total de casas pesquisadas com TV ligada: " << casas_pesquisadas << endl;

    // Cálculo das percentagens
    
    for (int i = 1; i <= 4; i++) {
        if (pessoas_por_canal[i] > 0) {
            float percentual_audiencia = (float)pessoas_por_canal[i] / total_pessoas * 100;
            float percentual_sintonizacao = (float)pessoas_por_canal[i] / casas_pesquisadas * 100;

            cout << "Canal " << i << ": " << percentual_audiencia << "% de audiência, " << percentual_sintonizacao << "% de sintonização." << endl;
        }
    }

    return 0;
}

     
    
    
    
    
    
    
    
    
    
    
    
    
    