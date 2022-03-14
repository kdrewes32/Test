
//  Test - March 7, 2022
#include <iostream>

class Español
{
private:
    std::string english;

public:
    void SetEspanol(std::string english)
    {
        this -> english = english;
    }
    
    std::string GetEspanol()
    {
        return english;
    }
    
    
}español;


int main()
{
    //Hola Munda
    
    español.SetEspanol("Hola");
    std::cout << español.GetEspanol() << std::endl;
    std::cout << "Hello Munda" << std::endl;
    
    
    return 0;
}
