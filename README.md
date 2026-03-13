Como executar o projeto dev c++
# 1. Requisitos

Para executar este projeto é necessário ter instalado:

 Dev-C++ (ou outro compilador C)
 Sistema operacional Windows ou compatível

O projeto foi desenvolvido utilizando a linguagem **C**.



# 2. Estrutura do projeto

O projeto é dividido em três arquivos principais:

main.c → responsável pelo menu e controle do sistema
contatos.c → contém as funções que manipulam os contatos
contatos.h → define a estrutura de dados e os protótipos das funções

Estrutura da pasta:


/projeto-contatos
   main.c
   contatos.c
   contatos.h
   README.md




# 3. Criando o projeto no Dev-C++

1. Abra o **Dev-C++**
2. Clique em **File → New → Project**
3. Escolha **Console Application**
4. Selecione a linguagem **C**
5. Escolha um nome para o projeto
6. Salve em uma pasta de sua preferência



# 4. Adicionando os arquivos do projeto

Depois que o projeto estiver criado:

1. Clique com o botão direito no projeto
2. Selecione "Add to Project"
3. Adicione os seguintes arquivos:

* main.c
* contatos.c
* contatos.h

Caso esteja criando manualmente:

File → New → Source File
Salve como:

main.c
contatos.c

Depois:

File → New → Header File
Salve como:

contatos.h


# 5. Compilando o projeto

Para compilar o programa:

Execute o atalho:


F11


Ou vá em:


Execute → Compile & Run


O Dev-C++ irá:

1. Compilar o código
2. Gerar o executável
3. Abrir o terminal para execução



# 6. Utilizando o sistema

Após executar o programa, aparecerá o menu principal:


===== GERENCIADOR DE CONTATOS =====

1 - Cadastrar
2 - Listar
3 - Buscar
4 - Editar
5 - Excluir
6 - Estatísticas
7 - Sair


O usuário deve digitar o número da opção desejada.

Exemplo:


Escolha: 1


Isso abrirá a tela de cadastro de contato.



# 7. Funcionalidades do sistema

O sistema possui as seguintes funcionalidades:

1 → Cadastrar novo contato
2 → Listar todos os contatos cadastrados
3 → Buscar contato pelo nome
4 → Editar informações de um contato
5 → Remover um contato
6 → Exibir estatística de contatos (utilizando recursão)
7 → Encerrar o programa



# 8. Observações

* O sistema utiliza um **array de estruturas** para armazenar os contatos.
* O limite máximo de contatos é definido pela constante `MAX`.
* Algumas funções utilizam **ponteiros** para alterar valores diretamente na memória.
* A função de estatística utiliza **recursão**.


