#include <iostream>

int main(){

    int password;
    const int PASSWORD = 2002;

    while (true)
    {
        std::cin >> password;

        if (password == PASSWORD)
        {
            std::cout << "Acesso Permitido\n";
            break;
        }
        else
        {
            std::cout << "Senha Invalida\n";
        }
    }
    return 0;
}
