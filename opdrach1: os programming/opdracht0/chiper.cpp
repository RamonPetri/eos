string.size()/2
#include <iostream>
#include <string>

std::string translate(std::string variabele, std::string input)
{
    std::string new_string ="";
    int myasciival = 0;

    for(int i=0; i < input.size(); i++){
        myasciival = int(input[i]) + std::stoi(variabele);
        char newChar = myasciival;
        new_string.insert(i,1,newChar);}
   return new_string;
}

int main(int argc, char *argv[])
{
  std::string s;

  if(argc != 2)
  { std::cerr << "Deze functie heeft exact 1 argument nodig";
    return -1; }

  while(true)
  { std::cin >> s;
    if(std::cin.eof()){ return 0; }
  std::cout << translate(argv[1], s) << std::endl;
  }
}