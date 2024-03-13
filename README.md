## Esses são os enunciados de cada script conforme sua numeração

1. Ler um conjunto de números reais, armazenando-o em vetor, enviar porá uma função e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.

2. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer, utilizando uma função procure se eles estão no vetor, com o uso de ponteiros para acessar cada posição. Ao final seu programa deverá escrever a soma dos valores encontrados, se encontrados, e quais as respectivas posições X e Y.

3. Leia um vetor de 10 posições, utilizando uma função contar e escrever quantos valores pares e ímpares ele possui.
   
4. Faça um programa que receba do usuário um vetor com 10 posições, utilizando uma função deverá ser impresso o maior, o menor elemento do vetor e quais posições estão os elementos. A busca dos elementos deve ser feita por meio de ponteiros.

5. Leia um vetor com 20 números inteiros. Usando uma função e por meio de ponteiros, 
acesse os elementos do vetor e imprima-os na tela, eliminando elementos repetidos.

6. Faça um programa que leia um vetor de 10 posições para números reais e, depois, um 
código inteiro. Por meio de uma função, se o código for zero, finalize o programa; se for 1, 
mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso, o código for 
diferente de 1 e 2 escreva uma mensagem informando que o código é inválido.

7. Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 ∗ i)%(i+ 1), sendo 
i a posição do elemento no vetor. Em seguida imprima o vetor na tela.

8. Faça um programa que leia dois vetores de 10 posições e, em uma função e com uso 
de ponteiro para acessar as posições, calcule outro vetor contendo, nas posições pares os 
valores do primeiro e nas posições ímpares os valores do segundo.

9. Ler dois conjuntos de números reais, utilizando a função armazena(), armazenando-os 
em vetores e, utilizando a função escalar(), calcular o produto escalar entre eles. Os conjuntos 
têm 15 elementos cada. Utilizando a função imprimir() imprimir os dois conjuntos e o produto 
escalar, use ponteiro para fazer acesso às posições do vetor em todas as funções. O produto 
escalar e dado por: x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn.

10. Faça um programa que leia dez conjuntos de dois valores, utilizando matriz, o primeiro 
representando o número do aluno e o segundo representando a sua altura em metros. Em 
uma função busca() encontre o aluno mais baixo e o mais alto. Mostre o número do aluno 
mais baixo e do mais alto, juntamente com suas alturas. Utilize ponteiro para manipular os 
dados da matriz na função busca().

11. Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros 
naturais que não são múltiplos de 7 ou que terminam com 7.

12. Faça um programa que calcule o desvio padrão de um vetor v contendo n=10 números, 
onde m e a média do vetor.

13. Leia 10 números inteiros e armazene em um vetor. Por meio da função primo() 
imprima na tela os elementos que são primos e suas respectivas posições no vetor.

14. Faça um programa que receba 20 números inteiros e, utilizando a função exibir(), 
mostre: Os números pares digitados; A soma dos números pares digitados; Os números 
ímpares digitados; A quantidade de números ímpares digitados.

15. Faça um programa que leia dois vetores de 10 elementos. Crie um terceiro vetor, ainda 
no main(), que seja a intersecção entre os 2 vetores anteriores, ou seja, que contêm apenas os 
números que estão em ambos os vetores, não devendo conter números repetidos. A 
verificação da intersecção e armazenamento no vetor deve ser feito por meio da função 
intersecção().

16. Leia dois vetores de inteiros x e y, cada um com 10 elementos (verifique e não permita 
que o usuário informe elementos repetidos). Calcule e mostre os vetores resultantes em cada 
caso abaixo, utilize uma função menu() para chamar cada função: Soma() -> soma de cada 
elemento de x com o elemento da mesma posição em y. Produto() -> multiplicação de cada 
elemento de x com o elemento da mesma posição em y. Diferença() -> todos os elementos de 
x que não existam em y. Interseção() -> apenas os elementos que aparecem nos dois vetores.
Uniao() -> todos os elementos de x, e todos os elementos de y que não estão em x.

17. Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elimine as 
posições com valor zero. Para isso, todos os elementos a frente do valor zero, devem ser 
movidos uma posição para trás no vetor por meio da função compacta() utilizando ponteiros 
para acessar as posições.

18. Implemente um programa que faça o cálculo da média e da variância de um conjunto 
de 10 números reais. Implementação: Os valores são lidos e armazenados em um vetor de 10 
posições. Os cálculos da média e da variância são efetuados sobre o conjunto de valores 
armazenados no vetor. O vetor deve ser passado para a função media(), o parâmetro do vetor 
deve ser recebido como ponteiro, onde será calculado a média e retornará o valor da mesma.
Após os valores são também passados para a função variância(). Ex: O treinador registrou em 
uma tabela os tempos de três atletas após realizarem o mesmo percurso em 5 dias diferentes. 
A variância é uma medida de dispersão que permite identificar a distância em que os tempos 
de cada atleta estão de um valor médio.

19. Implemente um programa para gerenciamento de uma Locadora (utilizando funções e 
vetores). Deve-se usar ponteiros para uso dos vetores (nos parâmetros, na manipulação). 
Funções a serem criadas: cadastro de produtos, controle de estoque, venda, renda mensal. 
Verifique no início do programa: Quantos produtos serão cadastrados. Os produtos podem ser 
referenciados pelo índice, mas deve ter cadastrado o código do mesmo. Dados do produto: 
nome, quantidade, valor.

20. Construa um programa que receba da linha de comando, com a qual o programa é 
executado, um número natural. E retorne seu fatorial na saída padrão, o qual é calculado por 
uma função.

21. Faça um programa que receba a entrada utilizando argc argv. Por exemplo, dada uma 
entrada no formato (Dia Mês Ano) 28 08 2018 retorne 28 de agosto de 2018. Faça verificação 
de erros para o número de parâmetros e para datas não válidas (28 13 2018).

22. Construa um programa que receba da linha de comando, com a qual o programa é 
executado, três valores em ponto flutuante, verifique por meio de uma função chamada 
triangulo() qual seu tipo, e informe na saída padrão se estes podem ou não formar os lados de 
um triângulo e qual tipo seria: Equilátero, Isósceles ou Escaleno. Os valores devem ser 
passados para a função triangulo() por meio de ponteiros.

23. Leia um vetor com 10 números reais, ordene os elementos deste vetor utilizando a 
função ordena() e no final escreva os elementos do vetor ordenado com o uso da função 
imprima(). Utilize ponteiros para acessar os elementos do vetor nas funções.

24. Considere um vetor A com 11 elementos onde A1 < A2 < · · · < A6 > A7 > A8 > · · · > A11, 
ou seja, está ordenado em ordem crescente até o sexto elemento e a partir desse elemento 
está ordenado em ordem decrescente. Dado o vetor da questão anterior, faça uma função 
para ordenar os elementos, acesse o vetor por meio de ponteiros.

25. Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescente 
esses valores, guardando-os num vetor. Por meio da função ordena() e com o uso de ponteiros 
ordene o número assim que ele for digitado. Mostre ao final na tela os valores em ordem, por 
meio da função imprime().

26. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n
linhas do chamado Triângulo de Pascal.

27. Declare uma matriz 5 x 5. Utilizando a função preenche() e com uso de ponteiros para 
manipulação da matriz, preencha com 1 a diagonal principal e com 0 os demais elementos. 
Escreva ao final a matriz obtida.

28. Dado uma matriz 4x4 e por meio de uma função chamada menu() acesse as demais 
funções que fazem: Função preenche() -> preenche, com o uso de ponteiro, a matriz com o 
produto do valor da linha e da coluna de cada elemento. Função imprime() -> imprima, com o 
uso de ponteiro, na tela a matriz. Função elementos() -> retorna, por meio do uso de return
com retorno do ponteiro, a localização (linha e a coluna) do maior valor da matriz, então envia 
para a função main() que imprime na tela a posição. Função buscaElemento() -> Leia um valor 
X(no main() e envie à função que busca esse valor na matriz, com o uso de ponteiro. Ao final, 
retorna a localização (linha e coluna) por meio de ponteiro ao main() que imprime na tela a 
localização ou uma mensagem de “não encontrado”.

29. Fazer um programa que gera e imprimi uma matriz de tamanho 10 x 10, onde seus 
elementos são da forma.

30. Leia uma matriz de 3 x 3 elementos, por meio da manipulação da matriz com ponteiro,
faça uma função que: Calcule a soma dos elementos que estão acima da diagonal principal.
Calcule a soma dos elementos que estão abaixo da diagonal principal. Calcule a soma dos 
elementos que estão na diagonal principal. Calcule a soma dos elementos que estão na 
diagonal secundaria. Calcule e imprima a sua transposta. Imprima cada um dos resultados com 
sua mensagem equivalente.

31. Gere uma matriz 4x4 com valores no intervalo [1, 20]. Escreva uma função 
triangularInferior() que transforme a matriz gerada numa matriz triangular inferior, ou seja, 
atribuindo zero a todos os elementos acima da diagonal principal. Imprima, utilizando 
ponteiros e por meio da função imprime(), a matriz original e a matriz transformada.

32. Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela 
de bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, com o uso da função 
gerarDados(), gere estes dados de modo a não ter números repetidos dentro das cartelas. O 
programa deve exibir na tela a cartela gerada, por meio da função imprime() e utilizando 
ponteiros para acessar os dados da “cartela”.

33. Leia uma matriz 5x10 que se refere a respostas de 10 questões de múltipla escolha, 
referentes a 5 alunos. Leia também um vetor de 10 posições contendo o gabarito de respostas 
que podem ser a, b, c ou d. Com o uso da função verifica(), seu programa tem que comparar as 
respostas de cada candidato com o gabarito e emitir um vetor denominado resultado, 
contendo a pontuação correspondente a cada aluno. O vetor resultado tem que ser retornado 
e enviado à função imprime() que mostra as respostas na tela.

34. Faça um programa para corrigir uma prova com 10 questões de múltipla escolha (a, b, 
c, d ou e) em uma turma com 5 alunos. Cada questão vale 1 ponto. Leia um vetor de 10 
posições contendo o gabarito. Para cada aluno leia sua matricula (número inteiro) e suas 
respostas. Com o uso da função verifica(), compare as respostas de cada candidato com o 
gabarito e emitir um vetor denominado resultado, contendo a pontuação correspondente a 
cada aluno. O vetor resultado tem que ser retornado e enviado à função imprime() que 
mostra as respostas na tela, onde para cada aluno deve ser mostrado sua matrícula, suas 
respostas e sua média final. Ao final mostre o percentual de aprovação, assumindo média 6.0.

35. Faça um programa que permita ao usuário entrar com uma matriz de 3x3 de números 
inteiros. Crie a função cadastra() para inserir os números no vetor, usando ponteiro para 
acesso a cada posição da matriz. Por meio da função soma() gere um array unidimensional 
pela soma dos números de cada coluna da matriz, envie, utilizando ponteiro, esse array à 
função imprime() que mostra na tela as informações. Por exemplo, a matriz vai gerar um vetor, 
onde cada posição é a soma das colunas da matriz. A primeira posição será 5 + 1 + 25.

36. Faça um programa que leia uma matriz de 5x4 contendo as seguintes informações 
sobre alunos de uma disciplina, sendo todas as do tipo inteiro: 1ª coluna: número de matrícula 
(use um inteiro); 2ª coluna: média das provas; 3ª coluna: média dos trabalhos; 4ª coluna: nota 
final. Faça funções para: (a) Ler as 3 primeiras informações de cada aluno; (b) Calcular a nota 
final como sendo a soma da média das provas e da média dos trabalhos; (c) Imprimir a 
matrícula do aluno que obteve a maior nota final (assuma que só existe uma maior nota); (d) 
Imprimir a média aritmética das notas finais. Use de ponteiro para acesso às posições.

37. Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A ∗ B.
    
38. Faça um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A²
