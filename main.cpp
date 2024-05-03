#include <iostream>
#include <string>

/*
        exercisios Arrays and Strings

*/
void printNome(std::string nome){
    std::cout<<"Olá "<<nome<<"."<< std::endl;
}

void printVogais(){
    char vogal[] = {'a', 'e', 'i', 'o', 'u'};
    int i = 0;

    while (i != 5)
    {
        std::cout<<vogal[i]<<std::endl;
        i++;
    }
}

void letraConsoanteOUBogal(std::string letra){    
    std::cout<<"digite uma letra"<<std::endl; 
    std::cin>>letra;
    if(letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u" ){
        std::cout<<"sua letra "<<letra<<" é uma BOGAL"<<std::endl; 
    }else{
        std::cout<<"sua letra "<<letra<<" é uma consoante"<<std::endl; 
    }

}

void printPalavra(char palavra[]){;
    std::cout<<"sua palabra é "<<palavra<<"."<< std::endl;
}

void printFrase(char frase[]){
    std::cout<<frase<<std::endl;
}

void printnumbers(){
    int numero[10];

    numero[0] = 1;
    numero[1] = 2;
    numero[2] = 3;
    numero[3] = 4;
    numero[4] = 5;
    numero[5] = 6;
    numero[6] = 7;
    numero[7] = 8;
    numero[8] = 9;
    numero[9] = 10;

    std::cout<<numero[0]<<std::endl<<numero[2]<<std::endl<<numero[3]<<std::endl<<numero[4]<<std::endl<<numero[5]<<std::endl<<numero[6]<<std::endl<<numero[7]<<std::endl<<numero[8]<<std::endl<<numero[9]<<std::endl;

}

void frutas(int n){
    std::string frutas[] = {"laranga", "maça", "melancia", "uva", "morango"};
    std::cout<<frutas[n-1]<<std::endl;
}

void cores(int n){
    std::string cores[] = {"laranja", "verde", "vermelho", "lilas", "roxo", "blak", "white"};
    std::cout<<cores[n-1]<<std::endl;
}

void letraDeAnimal(char letra){
    std::string animais[10];

    animais[0] = "tucano";
    animais[1] = "aguia";
    animais[2] = "lobo";
    animais[3] = "cachoro";
    animais[4] = "beija-flor";
    animais[5] = "gato";
    animais[6]= "papagaio";
    animais[7] = "formiga";
    animais[8]= "cavalo";
    animais[9]= "chacal";

    if (letra == 't' || letra == 'a' || letra == 'l' || letra == 'c' || letra == 'b' || letra == 'g' || letra == 'p' || letra == 'f') {
    std::cout << "Animal: ";
    switch(letra) {
        case 't':
            std::cout << animais[0]<<std::endl;
            break;
        case 'a':
            std::cout << animais[1]<<std::endl;
            break;
        case 'l':
            std::cout << animais[2]<<std::endl;
            break;
        case 'c':
            std::cout << animais[3]<<std::endl;
            std::cout << animais[8]<<std::endl;
            std::cout << animais[9]<<std::endl;
            break;
        case 'b':
            std::cout << animais[4]<<std::endl;
            break;
        case 'g':
            std::cout << animais[5]<<std::endl;
            break;
        case 'p':
            std::cout << animais[6]<<std::endl;
            break;
        case 'f':
            std::cout << animais[7]<<std::endl;
            break;
        }
        
    }else{
        std::cout << "Não tem nenhum animal com essa letra salvo"<<std::endl;
    }
}



int main(){
    std::string nome, letra;
    char palavra[10], frase[20], letrachar;
    int numeros[10], numero;

    //1/1 imprime nome
    //std::cout<<"digite um nome \n";
    // std::cin>>nome;
    //printNome(nome);

    //1/2 printar as vogais
    //printVogais();

    //1/3 e vogal ou consoante
    //letraConsoanteOUBogal(letra);

    //1/4 imprime palabra
    // std::cout<<"Digite uma palavra: \n";
    // std::cin>>palavra;
    // printPalavra(palavra);

    //1/5 imprime frase
    // std::cout<<"digite uma frase"<<std::endl;
    // std::cin.getline(frase, 20);
    // printFrase(frase);

    //1/6 imprime de 1 a 10
    //printnumbers();

    //1/7 escolher fruta
    // std::cout<<"digite um numero de 1 a 5: \n";
    // std::cin>>numero;
    // frutas(numero);

    //1/8 escolha cor
    // std::cout<<"digite um numero de 1 a 7: \n";
    // std::cin>>numero;
    // cores(numero);

    //1/9 
    // std::cout<<"digite uma letra"<<std::endl;
    // std::cin>>letrachar;
    // letraDeAnimal(letrachar);

    


    




    
    

    return 0;
}