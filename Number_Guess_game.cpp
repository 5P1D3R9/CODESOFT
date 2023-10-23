//Number guessing game using cpp by prem khater

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    std::srand((unsigned int)time(NULL));
    int randomNumber = 0;
    int guessNumber;
    randomNumber = (rand()%100)+1;
   // std::cout<<randomNumber;
    do{
        std::cout<<"Guess The Number between 0 to 100"<<std::endl;
        std::cin>>guessNumber;
        if(randomNumber<guessNumber){
            std::cout<<"Lower Number Please!!"<<std::endl;
        }else if(randomNumber>guessNumber){
            std::cout<<"Higher Number Please!!"<<std::endl;
        }else{
            std::cout<<"Congrats you guessed correct number"<<std::endl;
        }
    }while(randomNumber!=guessNumber);
}