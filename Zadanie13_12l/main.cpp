#include <iostream>

enum Stan
{
    connected,
    disconnected,
    connecting
};

class Komputer
{
public:
    char *nazwa;
    char *ip;
    Stan stan;

    Komputer(char *nazwa, char *ip, Stan stan)
    {
        this->nazwa = nazwa;
        this->ip = ip;
        this->stan = stan;
    }
};

void print(const Komputer &komputer)
{
    printf("nazwa komputera - %s\nip komputera - %s\n", komputer.nazwa, komputer.ip);
    switch (komputer.stan)
    {
    case 0:
        std::cout << "stan polaczenia - connected\n";
        break;
    case 1:
        std::cout << "stan polaczenia - disconnected\n";
        break;
    case 2:
        std::cout << "stan polaczenia - connecting\n";
        break;
    }
}

int main()
{
    Komputer komp("Wiktor_Laptop", "192.168.1.100", connected);

    print(komp);

    return 0;
}