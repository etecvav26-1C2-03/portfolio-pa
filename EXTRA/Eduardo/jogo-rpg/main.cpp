#include <iostream>
#include <random>
#include <ctime>

// ATENCAO: Este codigo exige C++11 ou superior. Use programas como Programiz para testar o código.

std::mt19937 gen(time(0));

int GarraJerimum(){
    std::uniform_int_distribution<> distrib(10, 30);
    return distrib(gen);
}

int DanoInimigo(){
    std::uniform_int_distribution<> distrib(3, 20);
    return distrib(gen);
}

int DanoKevin(){
    std::uniform_int_distribution<> distrib(1, 20);
    return distrib(gen);
}

int DanoBarbarini(){
    std::uniform_int_distribution<> distrib(7, 20);
    return distrib(gen);
}

int DanoFelipe(){
    std::uniform_int_distribution<> distrib(4, 20);
    return distrib(gen);
}

void batalhaF(){
    int escolha;
    int hpFelipe = 100;
    int hpInimigo = 150;
    
    std::cout << " (Loading...)\n====================================================\n\nFORMIGUINHA_CURSED apareceu!\n(Seu HP: " << hpFelipe << ")\n\n1 - ATACAR     2 - POUPAR\n\n>>> ";
    std::cin >> escolha;
    
    if(escolha == 1){
        int danoFelipe = DanoFelipe();
        hpInimigo -= danoFelipe;
        std::cout << "\nVoce atacou a FORMIGUINHA_CURSED e causou " << danoFelipe << " de dano.";
    }
    else if(escolha == 2){
        std::cout << "\nFORMIGUINHA_CURSED foi poupada...";
    }
    std::cout << "\n\nFORMIGUINHA_CURSED canta uma melodia assustadora... (buff: +15 de dano)";
    
    std::cout << "\n\n========== TURNO 2: ==========\n\n(Seu HP: " << hpFelipe << ")\n\n1 - ATACAR     2 - POUPAR\n\n>>> ";
    std::cin >> escolha;
    
    if(escolha == 1){
        int danoFelipe = DanoFelipe();
        hpInimigo -= danoFelipe;
        std::cout << "\nVoce atacou a FORMIGUINHA_CURSED e causou " << danoFelipe << " de dano.\n\n";
    }
    else if(escolha == 2){
        std::cout << "\nFORMIGUINHA_CURSED foi poupada...";
    }
    
    int danoGarraJerimum = GarraJerimum() + 15;
    hpFelipe -= danoGarraJerimum;
    
    std::cout << "FORMIGUINHA_CURSED usou GARRA DO JERIMUM e causou " << danoGarraJerimum << " de dano.";
    
    system("cls");
    std::cout << "========== TURNO 3: ==========\n\n(Seu HP: " << hpFelipe << ")";
}

void batalhaB(){
    int escolha;
    int hpBarbarini = 200;
    int hpInimigo = 150;
    
    std::cout << " (Loading...)\n====================================================\n\nFORMIGUINHA_CURSED apareceu!\n(Seu HP: " << hpBarbarini << ")\n\n1 - ATACAR     2 - POUPAR\n\n>>> ";
    std::cin >> escolha;
    
    if(escolha == 1){
        int danoBarbarini = DanoBarbarini();
        hpInimigo -= danoBarbarini;
        
        std::cout << "\nVoce atacou a FORMIGUINHA_CURSED e causou " << danoBarbarini << " de dano.";
    }
    else if(escolha == 2){
        std::cout << "\nFORMIGUINHA_CURSED foi poupada...";
    }
    std::cout << "\nFORMIGUINHA_CURSED canta uma melodia assustadora... (buff: +15 de dano)";
    
    std::cout << "\n\n========== TURNO 2: ==========\n\n(Seu HP: " << hpBarbarini << ")\n\n1 - ATACAR     2 - POUPAR\n\n>>> ";
    std::cin >> escolha;
    
    if(escolha == 1){
        int danoBarbarini = DanoBarbarini();
        hpInimigo -= danoBarbarini;
        
        std::cout << "\nVoce atacou a FORMIGUINHA_CURSED e causou " << danoBarbarini << " de dano.";
    }
    else if(escolha == 2){
        std::cout << "\nFORMIGUINHA_CURSED foi poupada...";
    }
    
    int danoGarraJerimum = GarraJerimum() + 15;
    hpBarbarini -= danoGarraJerimum;
    
    std::cout << "\nFORMIGUINHA_CURSED usou GARRA DO JERIMUM e causou " << danoGarraJerimum << " de dano.";
    
    system("cls");
    std::cout << "========== TURNO 3: ==========\n\n(Seu HP: " << hpBarbarini << ")";
}

void batalhaK(){
    int escolha;
    int hpKevin = 50;
    int hpInimigo = 150;
    
    std::cout << " (Loading...)\n====================================================\n\nFORMIGUINHA_CURSED apareceu!\n(Seu HP: " << hpKevin << ")\n\n1 - ATACAR     2 - POUPAR\n\n>>> ";
    std::cin >> escolha;
    
    if(escolha == 1){
        int danoKevin = DanoKevin();
        hpInimigo -= danoKevin;
        
        std::cout << "\nVoce atacou a FORMIGUINHA_CURSED e causou " << danoKevin << " de dano.";
    }
    else if(escolha == 2){
        std::cout << "\nFORMIGUINHA_CURSED foi poupada...";
    }
    std::cout << "\nFORMIGUINHA_CURSED canta uma melodia assustadora... (buff: +15 de dano)";
    
    std::cout << "\n\n========== TURNO 2: ==========\n\n(Seu HP: " << hpKevin << ")\n\n1 - ATACAR     2 - POUPAR\n\n>>> ";
    std::cin >> escolha;
    
    if(escolha == 1){
        int danoKevin = DanoKevin();
        hpInimigo -= danoKevin;
        
        std::cout << "\nVoce atacou a FORMIGUINHA_CURSED e causou " << danoKevin << " de dano.";
    }
    else if(escolha == 2){
        std::cout << "\nFORMIGUINHA_CURSED foi poupada...";
    }
    
    int danoGarraJerimum = GarraJerimum() + 15;
    hpKevin -= danoGarraJerimum;
    
    std::cout << "\nFORMIGUINHA_CURSED usou GARRA DO JERIMUM e causou " << danoGarraJerimum << " de dano.";
    
    system("cls");
    std::cout << "========== TURNO 3: ==========\n\n(Seu HP: " << hpKevin << ")";
}

int main(int argc, char** argv) {
    int escolha;
    
    std::cout << "Escolha o avatar(ISSO AFETA OS STATUS):\n\n\n1 - FELIPE     2 - BARBARINI     3 - KEVIN\n\n(ESCREVA DO 1 AO 3)\n\n>>> ";
    std::cin >> escolha;
    
    if(escolha == 1){
        std::cout << "\nEscolheu o FELIPE!";
        batalhaF();
    }
    else if(escolha == 2){
        std::cout << "\nEscolheu o BARBARINI!";
        batalhaB();
    }
    else if(escolha == 3){
        std::cout << "\nEscolheu o KEVIN!";
        batalhaK();
    }
    else{
        std::cout << "\nTente novamente...";
    }    
    
    return 0;
}
