# 📚 **Sobre o Projeto**
Este projeto implementa uma **estrutura de dados do tipo Fila** em **C**, seguindo o princípio **FIFO** (First In, First Out). A implementação inclui as operações básicas de uma fila, como **inserção**, **remoção**, **impressão**, **ordenação** e **liberação de memória**.

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
-./fila

## 📖 **Como Usar**
O projeto implementa uma fila com as seguintes operações principais:

- // Criar uma nova fila Fila* criar_fila(); ```
```c // Inserir elemento no final da fila void insirir_final(Fila* f, int idade );
- void ordenar(Fila* f); // Ordena a fila do decrescente (maior para menor) 
-  Remover elemento da fila ate que fique vazia void retira_inicio(Fila*f); 
- void liberar_memoria(Fila* f)c // Liberar memória da fila ;

## ✍️ **Autores**
Vitória Luz Edwards - @VitoriaLE

## 📫 **Contato**
Para dúvidas ou sugestões, entre em contato:
Email: vitoria.edwards@icomp.ufam.be
LinkedIn: linkedin.com/in/vitoria-luz-edwards

