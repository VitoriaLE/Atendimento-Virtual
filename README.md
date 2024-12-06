# 📚 **Sobre o Projeto**
Este projeto tem como objetivo realizar um atendimento virtual, no qual o método de atendimento é baseado em prioridades, atendendo primeiro os mais idosos e, em seguida, os mais jovens. Ele implementa uma **estrutura de dados do tipo Fila** em **C**, seguindo o princípio **FIFO** (First In, First Out). A implementação inclui as operações básicas de uma fila, como **inserção**, **remoção**, **impressão**, **ordenação** e **liberação de memória**.

## 🚀 **Funcionalidades**

- **Inserção** de elementos.
- **Remoção** de elementos.
- **Impressão** dos elementos da fila.
- **Ordenação** dos elementos de forma **descrescente** (maior para menor).
- **Liberação de memória** utilizada pela fila.

## 📁 **Estrutura do Projeto**
├── fila.h         # Arquivo de cabeçalho com definições e protótipos  
├── fila.c         # Implementação das funções da fila  
└── vitoria_luz_edwards.c  # Arquivo principal com função main e testes

## 🛠️ **Tecnologias Utilizadas**
- Linguagem C
- Estrutura de Dados - Fila
- Alocação Dinâmica de Memória

## ⚙️ **Compilar e Executar**
1. Compilar arquivos
- gcc -o programa fila.c vitoria_luz_edwards.c -fila
2. Execute o programa: 
- ./fila

## 📖 **Como Usar**
O projeto implementa uma fila com as seguintes operações principais:

- Fila* criar_fila() // Criar uma nova 
- void insirir_final(Fila* f, int idade); // Inserir elemento no final da fila 
- void ordenar(Fila* f); // Ordena a fila do decrescente (maior para menor) 
- void retira_inicio(Fila*f); //Remover elemento da fila ate que fique vazia  
- void liberar_memoria(Fila* f) // Liberar memória da fila ;

## ✍️ **Autores**
Vitória Luz Edwards - @VitoriaLE

## 📫 **Contato**
Para dúvidas ou sugestões, entre em contato:
- Email: vitoria.edwards@icomp.ufam.be
- LinkedIn: linkedin.com/in/vitoria-luz-edwards

