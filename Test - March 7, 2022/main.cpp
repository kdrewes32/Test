
//  Test - March 7, 2022
#include <iostream>

class Español
{
private:
    std::string spanish;

public:
    void SetEspanol(std::string spanish)
    {
        this -> spanish = spanish;
    }
    
    std::string GetEspanol()
    {
        return spanish;
    }
    
    
}español;


int main()
{
    //Hola Munda
    
    español.SetEspanol("Hola");
    std::cout << español.GetEspanol() << std::endl;
    std::cout << "Hola Munda" << std::endl;
    
    
    return 0;
}
