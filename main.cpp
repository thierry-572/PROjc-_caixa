using namespace std;

int main() {
int opcao;
double saldo = 1000.0; // saldo inicial
double valor;

while (true) {
    cout << "\n===== CAIXA ELETRONICO =====\n";
    cout << "1 - Consultar saldo\n";
    cout << "2 - Depositar\n";
    cout << "3 - Sacar\n";
    cout << "4 - Sair\n";
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    switch (opcao) {

        case 1:
            cout << "Seu saldo atual eh: R$ " << saldo << endl;
            break;

        case 2:
            cout << "Digite o valor para depositar: ";
            cin >> valor;

            if (valor > 0) {
                saldo += valor;
                cout << "Deposito realizado com sucesso!\n";
            } else {
                cout << "Valor invalido!\n";
            }
            break;

        case 3:
            cout << "Digite o valor para sacar: ";
            cin >> valor;

            if (valor > 0 && valor <= saldo) {
                saldo -= valor;
                cout << "Saque realizado com sucesso!\n";
            } else {
                cout << "Saldo insuficiente ou valor invalido!\n";
            }
            break;

        case 4:
            cout << "Saindo... Obrigado por usar o sistema!\n";
            return 0;

        default:
            cout << "Opcao invalida!\n";
    }
}

return 0;
}
