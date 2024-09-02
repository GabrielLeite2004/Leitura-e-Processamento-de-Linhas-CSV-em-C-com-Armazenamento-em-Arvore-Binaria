# Leitura e Processamento de Linhas CSV em C com Armazenamento em Árvore Binária

## Descrição
Este projeto em C implementa a leitura e processamento de dados de linhas de um arquivo CSV, com o objetivo de armazenar esses dados em uma estrutura de árvore binária. O código é capaz de interpretar diferentes campos presentes na linha, realizando as devidas conversões e ajustes antes de armazenar os dados.

## Funcionalidades
- **Leitura de Linhas CSV**: Processa cada linha do arquivo CSV, extraindo e convertendo os dados dos diferentes campos.
- **Armazenamento em Árvore Binária**: Armazena os dados processados em uma árvore binária para fácil acesso e manipulação posterior.
- **Tratamento de Strings e Números**: Converte strings em números onde necessário, e realiza ajustes em dados textuais para garantir a correta formatação.

## Como Usar
1. Compile o código utilizando um compilador C. Exemplo:
   ```bash
   gcc -o processa_csv processa_csv.c
   ```
2. Execute o programa:
   ```bash
   ./processa_csv
   ```
3. O programa irá processar as linhas do arquivo CSV especificado e armazenar os dados em uma árvore binária.

## Estrutura de Dados
O projeto utiliza estruturas `elemento1` e `elemento` para armazenar os dados processados de cada linha do CSV. Esses elementos são inseridos em uma árvore binária (`tree`) para permitir operações eficientes de busca e manipulação.

## Funções Principais
- **lerArquivo(char linha[MAX_LINHA], tree tr)**: Lê e processa uma linha do arquivo CSV, extraindo os dados relevantes e armazenando-os na árvore binária.
- **adicionaUmElemento(tree *tr, elemento dados)**: Insere um novo elemento na árvore binária.
- **Conversão de Dados**: Converte strings numéricas e formatações específicas dentro dos campos do CSV para o formato correto antes de armazenar.

## Considerações
- O código inclui tratamento especial para eliminar espaços duplos, ajustar formatação de números decimais, e tratar strings vazias de forma apropriada.
- O programa utiliza a função `setlocale` para suportar caracteres especiais e acentos, garantindo compatibilidade com diferentes línguas.

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
