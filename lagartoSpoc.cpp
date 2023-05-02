#include <iostream>

using namespace std;

int main () {
    
 int jogador1, jogador2;

    // Leitura das escolhas dos jogadores
    cout << "Jogador 1, Escolha um numero de 1 a 5 " << endl;
    cin >> jogador1;
    cout << "Jogador 2, Escolha um numero de 1 a 5 " << endl;
    cin >> jogador2;

    // Verificação e exibição do vencedor
    if (jogador1 == jogador2) {
        cout << "Empate!" << endl;
    } else if (
        (jogador1 == 1 && (jogador2 == 3 || jogador2 == 4)) ||
        (jogador1 == 2 && (jogador2 == 1 || jogador2 == 5)) ||
        (jogador1 == 3 && (jogador2 == 2 || jogador2 == 4)) ||
        (jogador1 == 4 && (jogador2 == 2 || jogador2 == 5)) ||
        (jogador1 == 5 && (jogador2 == 1 || jogador2 == 3))) {
        cout << "Jogador 1 venceu!" << endl;
    } else {
        cout << "Jogador 2 venceu!" << endl;
    }

    return 0;

}

 /*Tesoura corta papel = 3 corta 2 ok
Papel cobre pedra = 1 cobre 2 ok
Pedra esmaga lagarto = 1 esmaga 4
Lagarto envenena Spock = 4 evenena 5
Spock esmaga (ou derrete) tesoura = 5 esmaga (ou derrete) 3
Tesoura decapita lagarto = 3 decapita 4
Lagarto come papel = 4 come 2 ok
Papel contesta Spock = 2 contesta 5
Spock vaporiza pedra = 5 vaporiza 1 ok
Pedra quebra tesoura = 1 queba 3 ok
pedra = 1papel = 2
tesoura = 3lagarto = 4spock = 5*/