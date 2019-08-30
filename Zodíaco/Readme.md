--------------------------
## Signos Zodiacais
--------------------------

#### Este é um projeto que tem como objetivo:

O programa é sobre os signos zodiacais e possui um menu inicial onde uma das opções é a criação de um arquivo com frases motivacionais associadas aos signos. Após criadas, qualquer usuário pode informar o seu signo para conhecer a sua frase motivacional. Na dúvida sobre o signo, existe também uma opção que solicita o dia e o mês de aniversário e informa o signo correspondente.

A astrologia se baseia na posição em que se encontram os astros no céu no momento do nascimento de uma pessoa, podendo influenciar o seu modo de ser. Para isso, existem doze signos do zodíaco: Capricórnio, Peixes, Aquário, Áries, Touro, Gêmeos, Câncer, Leão, Virgem, Libra, Escorpião e Sagitário. Cada um destes signos está associado a um período do ano, bastando saber o dia e mês de nascimento para conhecer a que signo a pessoa pertence.


Deverá apresentar as funcionalidades: 
- Criar um arquivo com frases motivacionais
- Analisar dia e mês de aniversário e informar a qual signo a pessoas pertence
- Mostrar uma frase motivacional baseada no arquivo que foi criado

Essas funcionalidades devem ser mostradas em um menu inicial que terá como última opção sair do programa.


I) Criar o seguinte menu:

![Exibição do menu com as opções](https://raw.githubusercontent.com/ildaemanoely/Projects-C/master/Zod%C3%ADaco/menu0.png)

Sempre limpar a tela antes de exibir o menu.

- O programa só sairá do menu quando o usuário teclar 0, 1, 2 ou 3.
- Quando o usuário teclar 3 o programa terminará.
- Este menu deverá ser escrito como uma função.

II) Cria arquivo com frases motivacionais:

![Exibição do item de menu responsável por exibir a escrita da frase motivacional](https://raw.githubusercontent.com/ildaemanoely/Projects-C/master/Zod%C3%ADaco/menu01.png)

- Criar um arquivo de nome “horoscopo.txt” que deverá ser aberto com a opção “w”.
- Utilizar a tela acima e criar uma frase para cada signo do zodíaco, totalizando 12 frases.
- Cada frase deverá ter no máximo 100 caracteres.
- O programa deverá controlar esse tamanho, não deixando gravar frases maiores que 100 caracteres.
- O programa deverá acrescentar uma identificação numérica em cada frase, variando de 11 a 22, começando pelo signo de capricórnio, conforme exemplo a seguir:

11cccccccccccccccccccc...ccccccccccccccccccccccccccc

12aaaaaaaaaaaaaaaaaaaa...aaaaaaaaaaaaaaaaaaaaa

13ppppppppppppppppppp....pppppppppppppppppppp

...

c, a e p representam respectivamente as frases que devem ser escritas para os signos de capricórnio, aquário e peixes.

- Criar uma estrutura com um campo numérico para as duas posições iniciais e um campo caractere para as 100 posições da frase.

➔    CUIDADO COM O TAMANHO DO CAMPO int PORQUE O NÚMERO DE BYTES DO CAMPO PODE VARIAR  DE COMPUTADOR PARA COMPUTADOR.
➔    NÃO ESQUECER DE ACRESCENTAR OS BYTES DE CONTROLE.

- Criar um array numérico inteiro para identificar os 12 signos (11, 12, 13, …, 20, 21, 22).
-  Criar um array caractere para descrever cada signo e o respectivo período do ano (CAPRICORNIO - 22/12 a 19/01, AQUARIO     - 20/01 a 18/02, PEIXES      - 19/02 a 20/03, …, LIBRA       - 23/09 A 22/10, ESCORPIAO   - 23/10 A 21/11, SAGITARIO   - 22/11 A 21/12.
- Gravar a frase.
- Após ser incluída a última frase, o programa deverá fechar o arquivo.
- Voltar para o menu inicial.

III) 1 - Saber qual é o signo:

![Exibição do item de menu responsável por descobrir o signo do usuário](https://raw.githubusercontent.com/ildaemanoely/Projects-C/master/Zod%C3%ADaco/menu02.png)

- O usuário deverá informar o dia e o mês em que nasceu. O formato deve ser DDMM, onde DD significa o dia e MM o mês.
- Utilizar o array de signos que foi criado e mostrar na tela o signo correspondente ao aniversário, conforme tela abaixo.

![Exibição do item de menu responsável por informar o signo do usuário](https://raw.githubusercontent.com/ildaemanoely/Projects-C/master/Zod%C3%ADaco/menu03.png)

- Voltar para o menu inicial.

III) Frase motivacional do signo:

![Exibição do item de menu responsável por exibir as opções para o usuário escolher a frase motivacional de um signo específico](https://raw.githubusercontent.com/ildaemanoely/Projects-C/master/Zod%C3%ADaco/menu04.png)

- Abrir o arquivo “horoscopo.txt” com a opção “r”.
- O usuário deverá entrar com uma opção de signo.
- Ler frase do arquivo. Lembrar que o arquivo é sequencial e que deve ser lida cada frase até encontrar a frase que está sendo procurada.
- Desmembrar a frase da sua identificação (tirar o campo numérico).
- A frase motivacional que foi criada na opção 0 (zero) do menu deverá ser mostrada na tela, conforme a seguir.

![Exibição do item de menu responsável por exibir a frase motivacional do signo escolhido](https://raw.githubusercontent.com/ildaemanoely/Projects-C/master/Zod%C3%ADaco/menu05.png)

- Fechar o arquivo.
- Voltar ao menu principal.

IV) Sair:

- Limpar tela.
- Mostrar mensagem que saiu do programa.
- Sair do programa.

#### Autora:
- [Ilda E. Silva](https://linkedin.com/in/ilda-silva-neta/)

#### Linguagem:
- C













