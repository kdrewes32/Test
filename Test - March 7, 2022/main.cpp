
//  Test - March 7, 2022
#include <iostream>

class English
{
private:
    std::string english;

public:
    void SetEnglish(std::string english)
    {
        this -> english = english;
    }
    
    std::string GetEnglish()
    {
        return english;
    }
    
    
}english;


int main()
{
    //Hi World
    
    english.SetEnglish("Hi");
    std::cout << english.GetEnglish() << std::endl;
    std::cout << "Hi World" << std::endl;
    
    return 0;
}
