#include<iostream>
#include<string>



std::string encrypt(std::string encrypt_string, int rotate){
    std::string new_string = "";
    
    int myasciival = 0;
    
    for(int i=0; i < encrypt_string.size(); i++){
        myasciival = int(encrypt_string[i]) + rotate;
        char newChar = myasciival;
        new_string.insert(i,1,newChar);
    }
   return new_string;
    
}


int main(){
    std::string To_encrypt_string = "";
    int num_of_rot = 0;
    std::cout<<"Geef een woord om te versleutelen:  "<<std::endl;
    std::cout<<"Woord of zin: ";
    std::getline (std::cin,To_encrypt_string);
    std::cout<<"Geef het aantal rotaties: "<<std::endl;
    std::cout<<"Rotaties: ";
    std::cin>>num_of_rot;
    std::string encrypt_string = encrypt(To_encrypt_string, num_of_rot);
    std::cout<<"Het versleutelde woord is: "<<encrypt_string<<std::endl;



}