#include <iostream>
#include <string>

struct Livro
{
    int ID;
    std::string Titulo;
    std::string Autor;
    std::string Editora;
};


int main()
{
    Livro livro[5];

    for (int i = 0; i < 5; i++)
    {
        std::cout << "******Cadastro de Livros******" << "\n";
        std::cout << "Digite ID do " << i+1 << "* Livro:" << std::endl;
        std::cin >> livro[i].ID;

        std::cout << "Digite o titulo do " << i+1 << "* Livro:" << std::endl;
        std::cin.ignore();
        std::getline(std::cin,livro[i].Titulo);

        std::cout << "Digite o Autor do " << i+1 << "* Livro:" << std::endl;
        std::getline(std::cin,livro[i].Autor);

        std::cout << "Digite a editora do " << i+1 << "* Livro:" << std::endl;
        std::getline(std::cin,livro[i].Editora);
        std::cout << "\n\n";
    }
    std::cout << "***********************DADOS DOS LIVROS**************************\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << "\n\nID: " << livro[i].ID << std::endl;
        std::cout << "Titulo: " << livro[i].Titulo << std::endl;
        std::cout << "Autor: " << livro[i].Autor << std::endl;
        std::cout << "Editora: " << livro[i].Editora << std::endl;
        std::cout << "_____________________________________________\n";
    }
    system("PAUSE");
    return 0;
}
