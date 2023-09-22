#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    std::cout << '1-100 ertekek duplazasa' // Hiányzó idézőjelek és pontosvessző
    for (int i = 0;) // Nincs befejezve a kifejezés
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" // Hiányzó érték 
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // Nincs megadva a kezdeti érték
    for (int i = 0; i < N_ELEMENTS, i++) // Pontosvessző hiányzik
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    // Nincs memória felszabadítás
    return 0;
}



