#include <iostream>
#include <random>
#include <ctime>

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
    int turno = 1;
    int buff = 0;

    std::cout << " (Loading...)\n====================================================\n\nFORMIGUINHA_CURSED apareceu!\n";

    while(hpFelipe > 0 && hpInimigo > 0){
        std::cout << "\n\n========== TURNO " << turno << ": ==========\n\n(Seu HP: " << hpFelipe << ")\n(HP da FORMIGUINHA_CURSED: " << hpInimigo << ")\n\n1 - ATACAR     2 - POUPAR\n\n>>> ";
        std::cin >> escolha;

        if(escolha == 1){
            int danoFelipe = DanoFelipe();
            hpInimigo -= danoFelipe;
            std::cout << "\nVoce atacou a FORMIGUINHA_CURSED e causou " << danoFelipe << " de dano.";
        }
        else if(escolha == 2){
            std::cout << "\nFORMIGUINHA_CURSED foi poupada...";
        }

        if(hpInimigo <= 0){
            break;
        }

        if(turno % 3 == 0){
            std::cout << "\n\nFORMIGUINHA_CURSED canta uma melodia assustadora... (buff: +15 de dano)";
            buff += 15;
        }
        else if(turno % 5 == 0){
            int danoGarraJerimum = GarraJerimum() + buff;
            hpFelipe -= danoGarraJerimum;
            std::cout << "\n\nFORMIGUINHA_CURSED usou GARRA DO JERIMUM e causou " << danoGarraJerimum << " de dano.";
        }
        else{
            int danoInimigo = DanoInimigo() + buff;
            hpFelipe -= danoInimigo;
            std::cout << "\n\nFORMIGUINHA_CURSED atacou e causou " << danoInimigo << " de dano.";
        }

        turno++;
    }

    system("cls");

    if(hpInimigo <= 0){
        std::cout << "\nVoce derrotou a FORMIGUINHA_CURSED! Voce venceu!";
    }
    else{
        std::cout << "\nVoce foi derrotado pela FORMIGUINHA_CURSED...";
    }
}

void batalhaB(){
    int escolha;
    int hpBarbarini = 200;
    int hpInimigo = 150;
    int turno = 1;
    int buff = 0;

    std::cout << " (Loading...)\n====================================================\n\nFORMIGUINHA_CURSED apareceu!\n";

    while(hpBarbarini > 0 && hpInimigo > 0){
        std::cout << "\n\n========== TURNO " << turno << ": ==========\n\n(Seu HP: " << hpBarbarini << ")\n(HP da FORMIGUINHA_CURSED: " << hpInimigo << ")\n\n1 - ATACAR     2 - POUPAR\n\n>>> ";
        std::cin >> escolha;

        if(escolha == 1){
            int danoBarbarini = DanoBarbarini();
            hpInimigo -= danoBarbarini;
            std::cout << "\nVoce atacou a FORMIGUINHA_CURSED e causou " << danoBarbarini << " de dano.";
        }
        else if(escolha == 2){
            std::cout << "\nFORMIGUINHA_CURSED foi poupada...";
        }

        if(hpInimigo <= 0){
            break;
        }

        if(turno % 3 == 0){
            std::cout << "\n\nFORMIGUINHA_CURSED canta uma melodia assustadora... (buff: +15 de dano)";
            buff += 15;
        }
        else if(turno % 5 == 0){
            int danoGarraJerimum = GarraJerimum() + buff;
            hpBarbarini -= danoGarraJerimum;
            std::cout << "\n\nFORMIGUINHA_CURSED usou GARRA DO JERIMUM e causou " << danoGarraJerimum << " de dano.";
        }
        else{
            int danoInimigo = DanoInimigo() + buff;
            hpBarbarini -= danoInimigo;
            std::cout << "\n\nFORMIGUINHA_CURSED atacou e causou " << danoInimigo << " de dano.";
        }

        turno++;
    }

    system("cls");

    if(hpInimigo <= 0){
        std::cout << "\nVoce derrotou a FORMIGUINHA_CURSED! Voce venceu!";
    }
    else{
        std::cout << "\nVoce foi derrotado pela FORMIGUINHA_CURSED...";
    }
}

void batalhaK(){
    int escolha;
    int hpKevin = 50;
    int hpInimigo = 150;
    int turno = 1;
    int buff = 0;

    std::cout << " (Loading...)\n====================================================\n\nFORMIGUINHA_CURSED apareceu!\n";

    while(hpKevin > 0 && hpInimigo > 0){
        std::cout << "\n\n========== TURNO " << turno << ": ==========\n\n(Seu HP: " << hpKevin << ")\n(HP da FORMIGUINHA_CURSED: " << hpInimigo << ")\n\n1 - ATACAR     2 - POUPAR\n\n>>> ";
        std::cin >> escolha;

        if(escolha == 1){
            int danoKevin = DanoKevin();
            hpInimigo -= danoKevin;
            std::cout << "\nVoce atacou a FORMIGUINHA_CURSED e causou " << danoKevin << " de dano.";
        }
        else if(escolha == 2){
            std::cout << "\nFORMIGUINHA_CURSED foi poupada...";
        }

        if(hpInimigo <= 0){
            break;
        }

        if(turno % 3 == 0){
            std::cout << "\n\nFORMIGUINHA_CURSED canta uma melodia assustadora... (buff: +15 de dano)";
            buff += 15;
        }
        else if(turno % 5 == 0){
            int danoGarraJerimum = GarraJerimum() + buff;
            hpKevin -= danoGarraJerimum;
            std::cout << "\n\nFORMIGUINHA_CURSED usou GARRA DO JERIMUM e causou " << danoGarraJerimum << " de dano.";
        }
        else{
            int danoInimigo = DanoInimigo() + buff;
            hpKevin -= danoInimigo;
            std::cout << "\n\nFORMIGUINHA_CURSED atacou e causou " << danoInimigo << " de dano.";
        }

        turno++;
    }

    system("cls");

    if(hpInimigo <= 0){
        std::cout << "\nVoce derrotou a FORMIGUINHA_CURSED! Voce venceu!";
    }
    else{
        std::cout << "\nVoce foi derrotado pela FORMIGUINHA_CURSED...";
    }
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
