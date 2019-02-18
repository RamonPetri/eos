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


int main(int argc, char * argv[]){
    std::string To_encrypt_string = "";
    int rotate = (*argv[2] - '0'); 
    std::cout<<rotate<<std::endl;
    std::string encrypt_string = encrypt(argv[1], rotate);
    std::cout<<"Het versleutelde woord is: "<<encrypt_string<<std::endl;



}