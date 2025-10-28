# Introdução a Técnicas de Programação - Unidade 1
**Aluno**: Maria Luiza de Araujo
**Matrícula**: 20250032627
**Período**: 2025.2
## 📁 Estrutura do Projeto
- `projeto/`: Projeto principal da unidade
- `listas/`: Soluções das listas de exercícios
- `README.md`: Este arquivo
## 🚀 Projeto: FinancasPro
**Descrição**: FinancasPro é um gerenciador de finanças pessoais e gerador de tabelas de investimento que permite ao usuário acompanhar seus rendimentos e despesas, exibindo o saldo atualizado. O programa também incentiva a poupar dinheiro por meio de metas e desafios de depósito, gerando tabelas de investimento adaptadas à realidade financeira de cada usuário.
**Repositório**: https://github.com/Luizaraujo6/Gerenciador-de-financas-pessoais-
**Vídeo de Demonstração**: https://youtu.be/ccYTFvPF198
### Funcionalidades Implementadas:
- Visualizar saldo atual do usuário
- Registrar rendimento diário e atualizar o saldo
- Registrar despesa diária e atualizar o saldo
- Criar tabela de investimento com valor objetivo e período em meses
- Consultar tabela de investimento criada
- Validação de entradas para impedir valores inválidos ou fora do intervalo esperado
- Navegação por menus e submenus com opção de retornar ou sair
### Conceitos da U1 Aplicados:
- Estruturas condicionais: Foram aplicadas em todos os menus e submenus do programa para decidir qual ação executar de acordo com a escolha do usuário, por exemplo, ao escolher entre acessar o gerenciador de finanças, as tabelas de investimento ou sair do programa, bem como dentro dos submenus para selecionar ações específicas como ver saldo, adicionar rendimento ou criar tabela.
- Estruturas de repetição: Foram utilizadas laços while para manter os menus ativos até que o usuário decida retornar ao menu principal ou sair, e laços for para percorrer os vetores da tabela de investimento e exibir os valores de cada mês.
- Vetores: O vetor tabelainvestimento foi utilizado para armazenar os valores mensais que o usuário precisa depositar para atingir o objetivo financeiro. Cada posição do vetor corresponde a um mês e permite que o programa registre, consulte e exiba a tabela completa.
- Funções: programa possui várias funções além da main, sendo pelo menos cinco principais: mostrarSaldo (exibe o saldo atual), atualizarRendimento (adiciona o rendimento diário ao saldo), atualizarDespesa (subtrai despesas do saldo), criarTabelaInvestimento (gera a tabela de valores mensais para atingir o objetivo) e mostrarTabelaInvestimento (exibe a tabela criada). Além disso, funções auxiliares lerInt e lerFloat foram implementadas para validar entradas numéricas, garantindo que o usuário não digite valores inválidos. Essas funções tornam o código mais organizado, modular e de fácil manutenção.
## 📚 Listas de Exercícios
### Semana 2 - Variáveis, Tipos e Operadores:
- ✅ Problema 1: Calculadora de IMC
- ✅ Problema 2: Conversão de temperatura
- ✅ Problema 3: Cálculo de juros compostos
- ✅ Problema 4: Operações aritméticas básicas
### Semana 3 - Condicionais:
- ✅ Problema 1: Classificação de IMC
- ✅ Problema 2: Calculadora de energia elétrica
- ✅ Problema 3: Sistema de notas
- ✅ Problema 4: Pedra, papel, tesoura
- ✅ Problema 5: Calculadora de desconto progressivo
- ✅ Problema 6: Diagnóstico médico simples
- ✅ Problema 7: Sistema de equações do 2º grau
- ✅ Problema 8: Validador de triângulos
### Semana 4A - Repetições:
- ✅ Problema 1: Dobrar folha
- ✅ Problema 2: Homem Aranha
- ✅ Problema 3: Números colegas
- ✅ Problema 4: Jogo de dardos
### Semana 4B - Análise e Padrões:
- ✅ Questões 1-4: Análise de código
- ✅ Questões 5-11: Implementações
### Semana 5 - Funções (Parte 1):
- ✅ Problema 1: Horários das rondas
- ✅ Problema 2: Primos triplos
- ✅ Problema 3: Pousando a sonda espacial
### Semana 6 - Vetores:
- ✅ Problema 1: MEC - Correção ENEM
- ✅ Problema 2: Álbum de figurinhas
- ✅ Problema 3: A construção da ponte
- ✅ Problema 4: Em busca do tesouro perdido
## 🎯 Principais Aprendizados
Aprendi a definir e utilizar variáveis com tipos bem-definidos, aplicando-as para armazenar valores de saldo, rendimentos, despesas e tabelas de investimento. A prática com operações aritméticas e relacionais permitiu calcular corretamente os valores de saldo e parcelas da tabela de investimento, garantindo que os resultados fossem coerentes com a lógica financeira do usuário. O uso de estruturas condicionais if/else foi essencial para controlar o fluxo do programa, permitindo que o sistema respondesse corretamente às escolhas do usuário em menus e submenus. A implementação de estruturas de repetição como while e for ajudou a manter os menus ativos até que o usuário decidisse sair, além de percorrer os vetores e exibir os valores da tabela de investimento de forma organizada. Também comecei a compreender melhor o conceito de vetores para armazenar sequências de valores mensais, possibilitando que o programa gerasse e mostrasse tabelas adaptadas ao objetivo do usuário. Por fim, a criação de funções trouxe organização ao código e permitiu separar responsabilidades, como mostrar saldo, atualizar rendimentos e despesas e criar ou exibir a tabela de investimento, tornando o programa modular e de mais fácil manutenção.
## 🔧 Ambiente de Desenvolvimento
- **SO**: Windows 11
- **Compilador**: GCC versão 8.1.0
- **Editor**: VisualCode