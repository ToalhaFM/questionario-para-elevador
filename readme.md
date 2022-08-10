Trabalho de faculdade.

Linguagem C++, puro, no caso executando no console log, pra dificultar um pouco na sintaxe resolvir não adiciona a extersão "using namespace std;" no qual se eu executasse só o cout por exemplo 
não funcionaria.

Objetivo: Criar um sistema de questionario para elevador, que perguntaria qual elevador mais utilizado, e
em qual turno mais utiliza o elevador, e teria também opção para ver as estatiticas do questionario onde 
qualquer um poderia ver, e também saida do programa para fecha.

O que se pede no trabalho: 

Em um prédio há dois elevadores denominados: A e B. Para otimizar o sistema de controle dos elevadores foi proposto um questionário no qual cada morador deve responder: o elevador que utiliza com mais frequência e o período que mais o utiliza (“M” = matutino; “V” = vespertino; “N” = noturno). Sendo assim, faça uma aplicação que realize a coleta dos dados e apresente as seguintes estatísticas:  
    a) Total de questionários respondidos; 
    b) Elevador mais utilizado; 
    c) Elevador menos utilizado; 
    d) Período mais frequentado; 
    e) Período menos frequentado; 
    f) Porcentagem de utilização de cada período em relação ao total de questionários respondidos.

Para organizar a dinâmica da aplicação, deverá conter um menu com as seguintes opções:  
    1 – Informar Questionário  
    2 – Mostrar Estatísticas   
    3 – Sair  

Após mostrar as opções deverá solicitar ao usuário que informe uma das disponíveis, no caso: 1, 2 ou 3. Deve ser validado se o valor corresponde a uma das opções (1, 2 ou 3), caso contrário solicitar novamente. Sempre que o usuário entrar em uma respectiva opção deverá limpar a tela com o comando system(“cls”). Seguem os requisitos de cada opção:  
Opção 1 - Informar Questionário  
 O usuário deverá informar o elevador que mais utiliza (A ou B) e o período que o mais utiliza (M, V ou N). Nas duas entradas devem ser validadas se foi informada uma das letras correspondentes e em ambas podem ser letras maiúsculas ou minúsculas. Depois de confirmado o cadastro deverá mostrar a seguinte mensagem: “Questionário cadastrado com sucesso” e pausar a tela, utilizar o comando: system(“pause”). Quando o usuário clicar em qualquer tecla, limpar a tela e mostrar o menu principal.  

Opção 2 - Mostrar Estatísticas  
 Deverá mostrar as seis estatísticas, apresentadas inicialmente nas letras de A a F e pausar a tela para o usuário ver os resultados. Quando o usuário clicar em qualquer tecla, limpar a tela e mostrar o menu principal. Nas saídas das letras B e C devem mostrar o elevador mais e menos utilizado, em caso de empate mostrar nas duas saídas que houve empate. Nas saídas D e E fazer o mesmo em caso de empate nos três turnos, entretanto se o empate ocorrer em apenas dois turnos, mostrar as duas opções que empataram na respectiva saída. Exemplos: Período mais frequentado: Matutino e Vespertino. Período menos frequentado: Noturno.

Opção 3 - Sair  
 Deverá perguntar ao usuário se realmente deseja sair com a seguinte pergunta: “Deseja realmente sair?        (1-Sim/2-Não): “. Se informar 1 o sistema deverá ser finalizado e caso informar 2 limpar a tela e voltar ao menu principal. Deve ser validado se o valor corresponde a uma das opções (1 ou 2), caso contrário solicitar novamente. 