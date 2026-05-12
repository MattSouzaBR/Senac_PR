Atividade: Desenvolvimento de Sistema Web 
com HTML, CSS, Bootstrap e JavaScript


Você deverá desenvolver um sistema web completo, utilizando apenas:

HTML, CSS, Bootstrap e JavaScript puro.

O sistema deverá funcionar sem banco de dados real e sem backend. Todos os dados cadastrados deverão ser armazenados no navegador usando localStorage.

O objetivo é simular um sistema real, com cadastro, login, listagens, edição, exclusão, filtros e relacionamento entre informações.

Cada aluno ou grupo receberá um tema por sorteio e deverá desenvolver o sistema conforme as regras abaixo.

Regras obrigatórias do projeto

1. Estrutura mínima do sistema

O sistema deverá conter:

Telas obrigatórias gerais

Tela de login

Tela de cadastro de usuário

Tela inicial/dashboard após login

Menu de navegação entre as páginas

Opção de sair do sistema

O login deve validar usuários salvos no localStorage.



2. Telas de cadastro

Cada sistema deverá ter 5 telas de cadastro relacionadas ao tema sorteado.

Exemplo:

Cadastro de clientes

Cadastro de produtos

Cadastro de categorias

Cadastro de pedidos

Cadastro de pagamentos

Cada cadastro deverá conter pelo menos:

Formulário com campos obrigatórios

Validação com JavaScript

Botão salvar

Armazenamento no localStorage

Geração automática de ID

Mensagem de sucesso ou erro

3. Telas de listagem

Cada sistema deverá ter 5 telas de listagem, uma para cada cadastro criado.

Cada listagem deverá conter:

Exibição dos dados salvos no localStorage

Botão para editar

Botão para excluir

Campo de pesquisa

Pelo menos um filtro

Contador de registros

Mensagem quando não houver dados cadastrados

4. Uso obrigatório do localStorage

O sistema deverá usar o localStorage para:

Salvar usuários

Validar login

Salvar todos os cadastros

Carregar as listagens

Editar registros

Excluir registros

Manter os dados mesmo após atualizar a página

Não será aceito sistema que use apenas arrays fixos no JavaScript.



5. Relacionamento entre cadastros

Pelo menos 2 cadastros precisam se relacionar entre si.

Exemplo:

No cadastro de pedidos, o aluno deverá selecionar um cliente previamente cadastrado.

Ou seja, os dados de um cadastro devem aparecer em outro campo do sistema, normalmente em um <select>.

Exemplos de relacionamento:

Pedido vinculado a um cliente

Produto vinculado a uma categoria

Reserva vinculada a uma sala

Atendimento vinculado a um profissional

Serviço vinculado a um cliente

Funcionalidades obrigatórias

Cada sistema deverá conter:

Login funcional

Cadastro de usuário

Dashboard inicial

5 cadastros do tema

5 listagens do tema

Edição de registros

Exclusão com confirmação

Busca por texto

Filtros

Validação de campos

Uso de localStorage

Uso de Bootstrap

Layout responsivo

Menu de navegação

Botão de logout


# 6. Sistema de Gestão de Hotel/Pousada
*Cadastros obrigatórios:*
Hóspedes
Quartos
Reservas
Serviços adicionais
Funcionários

*Listagens obrigatórias:*
Lista de hóspedes
Lista de quartos
Lista de reservas
Lista de serviços adicionais
Lista de funcionários

Desafio extra: a reserva deve vincular hóspede, quarto e serviços adicionais.


Sistema de Gestão de Hotel/Pousada