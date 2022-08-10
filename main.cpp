//Jeovan Gomes
#include <iostream>

int main(){
	int a = 0, b = 0, exit; 
	char Turno, menu, elevador;
	int cont = 0, TurnoManha = 0, TurnoVespetino = 0, TurnoNoturno = 0;
	int MaisUsado, MenosUsado, PeriodoMaior, PeriodoMenor;
	float PorctManha, PorctTarde, PorctNoite;
	
	setlocale(LC_ALL,"Portuguese");
	while(true){
		//Menu
		system("cls");
		std::cout << "------------Menu------------\n";
		std::cout << "1 - Informar Questionario\n";
		std::cout << "2 - Mostrar Estatisticas\n";
		std::cout << "3 - Sair\n";
		std::cin >> menu;
		system("cls");
		
		//Opção 1 sugerida
		if(menu == '1'){
				//Elevador mais utilizado
				while(elevador != 'a' || elevador != 'A' || elevador != 'b' || elevador != 'B'){
					std::cout << "Informe o elevador mais utilizado A ou B: ";
					std::cin >> elevador;
					if(elevador == 'A' || elevador == 'a'){
						a += 1;
						break;
					}else if(elevador == 'B' || elevador == 'b'){
						b += 1;
						break;
					}else{
						std::cout << "Desculpe! elevador não existente.\n";
						system("pause");
						system("cls");
					}	
					system("cls");
			}
			//Turno que mais utilizou o elevador
			while(Turno != 'M' || Turno != 'm' || Turno != 'V' || Turno != 'v' || Turno != 'N' || Turno != 'n'){
				std::cout << "Informe o periodo que mais utiliza o elevador M, V, N: ";
				std::cin >> Turno;
				if(Turno == 'M' || Turno == 'm'){
					TurnoManha += 1;
					system("cls");
					std::cout << "Usuario cadastrado com sucesso!\n";
					cont += 1;
					system("pause");
					break;
				}else if(Turno == 'V' || Turno == 'v'){
					TurnoVespetino += 1;
					system("cls");
					std::cout << "Usuario cadastrado com sucesso!\n";
					cont += 1;
					system("pause");
					break;
				}else if(Turno == 'N' || Turno == 'n'){
					TurnoNoturno += 1;
					system("cls");
					std::cout << "Usuario cadastrado com sucesso!\n";
					cont += 1;
					system("pause");
					break;
				}else{
					std::cout << "Desculpe! turno nao existente.\n";
					system("pause");
					system("cls");
				}
			}
		}else if(menu == '2'){ //Opção 2 surgerida
			std::cout << "Total de votos: " << cont << "\n"; //Total de votos
			
			//Elevador mais utilizado
			if(a > b){
				std::cout << "Elevador A mais utilizado: " << a << "\n";
			}else if(a < b){
				std::cout << "Elevador B mais utilizado: " << b << "\n";
			}else{
				std::cout << "Ambos empatados todos foram usados " << a << " vezes\n";
			}
			
			//Elevador menos utilizado
			if(a < b){
				std::cout << "Elevador A menos utilizado: " << a << "\n";
			}else if(a > b){
				std::cout << "Elevador B menos utilizado: " << b << "\n";
			}else{
				std::cout << "Ambos empatados todos foram usados " << a << " vezes\n";
			}
			
			//Turno mais frenquentado
			if(TurnoManha > TurnoVespetino && TurnoManha > TurnoNoturno){
				std::cout << "Periodo mais frequentado: Matutino " << TurnoManha << " vezes\n";
			}else if(TurnoVespetino > TurnoManha && TurnoVespetino > TurnoNoturno){
				std::cout << "Periodo mais frequentado: Vespetino " << TurnoVespetino << " vezes\n";
			}else if(TurnoNoturno > TurnoManha && TurnoNoturno > TurnoVespetino){
				std::cout << "Periodo mais frequentado: Noturno " << TurnoNoturno << " vezes\n";
			}else if(TurnoManha == TurnoVespetino && TurnoManha > TurnoNoturno){
				std::cout << "Periodo mais frequentado: Matutino e Vespetino ambos " << TurnoManha << " vezes\n";
			}else if(TurnoManha == TurnoNoturno && TurnoManha > TurnoVespetino){
				std::cout << "Periodo mais frequentado: Matutino e Noturno ambos " << TurnoManha << " vezes\n";
			}else{
				std::cout << "Periodo mais frequentado: Matutino, Vespetino e Noturno ambos " << TurnoVespetino << " vezes\n";
			}
			
			//Turno menos frenquentado
			if(TurnoManha < TurnoVespetino && TurnoManha < TurnoNoturno){
				std::cout << "Periodo menos frequentado: Matutino " << TurnoManha << " vezes\n";
			}else if(TurnoVespetino < TurnoManha && TurnoVespetino < TurnoNoturno){
				std::cout << "Periodo menos frequentado: Vespetino " << TurnoVespetino << " vezes\n";
			}else if(TurnoNoturno < TurnoManha && TurnoNoturno < TurnoVespetino){
				std::cout << "Periodo menos frequentado: Noturno " << TurnoNoturno << " vezes\n";
			}else if(TurnoManha == TurnoVespetino && TurnoManha < TurnoNoturno){
				std::cout << "Periodo menos frequentado: Matutino e Vespetino ambos " << TurnoManha << " vezes\n";
			}else if(TurnoManha == TurnoNoturno && TurnoManha < TurnoVespetino){
				std::cout << "Periodo menos frequentado: Matutino e Noturno ambos " << TurnoManha << " vezes\n";
			}else{
				std::cout << "Periodo menos frequentado: Matutino, Vespetino e Noturno ambos " << TurnoVespetino << " vezes\n";
			}
			
			//Porcentagem de utilização dos periodos
			PorctManha = TurnoManha * 100 / cont;
			PorctTarde = TurnoVespetino * 100 / cont;
			PorctNoite = TurnoNoturno * 100 / cont;
			std::cout << "___Porcetagem___\n";
			std::cout << "Manha: " << PorctManha << "%\n";
			std::cout << "Tarde: " << PorctTarde << "%\n";
			std::cout << "Noite: " << PorctNoite << "%\n";
			
			system("pause");
		}else if(menu == '3'){
			while(exit != 1 || exit != 2){
				std::cout << "Realmente deseja sair? \n1 - Sim \n2 - Não.\n";
				std::cin >> exit;
				if(exit == 1){
					return false;
				}else if(exit == 2){
					system("cls");
					break;	
				}else{
					std::cout << "Desculpe! \nMas só aceitamos 1 para Sim e 2 para Não\n";
					system("pause");
					system("cls");
				}
			}
		}
	}
}
