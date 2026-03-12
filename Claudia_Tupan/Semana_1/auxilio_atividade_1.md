## Atividade em Sala: **Agendamento de Consultas e Serviços**

Direto ao ponto: você precisa transformar isso em **modelo mental + estrutura técnica**. Não é só “marcar horário”. É regra, requisito e fluxo.

---

# 1️⃣ Contexto do Sistema

**Problema:**
Gerenciar marcação, alteração e cancelamento de consultas/serviços, considerando:

* Horários disponíveis
* Limite de cancelamentos
* Regras de confirmação

---

# 2️⃣ Regras de Negócio

### 📌 Operacionais

* Cliente só pode agendar em horários disponíveis.
* Não pode haver dois agendamentos no mesmo horário para o mesmo profissional.
* Cancelamento permitido até 24h antes da consulta.

### 📌 De Restrição

* Cliente só pode ter **3 cancelamentos por mês**.
* Horários são definidos pelo estabelecimento (ex: 08h–18h).

### 📌 De Gatilho

* Após agendamento → enviar confirmação automática.
* Se não confirmar em 12h → cancelar automaticamente.

### 📌 Derivadas

* Se cliente faltar 2 vezes sem avisar → bloquear novos agendamentos por 30 dias.

---

# 3️⃣ Requisitos de Software

## 🔹 Requisitos Funcionais (O que faz)

* Cadastrar cliente
* Listar horários disponíveis
* Agendar consulta
* Cancelar agendamento
* Alterar agendamento
* Enviar confirmação automática

## 🔹 Requisitos Não Funcionais (Como deve ser)

* Sistema deve responder em até 2 segundos
* Acesso protegido por login
* Dados criptografados
* Backup automático diário

## 🔹 Regra de Negócio

Define **as condições** que o sistema deve respeitar.

---

# 4️⃣ Fluxo do Processo

```
Entrada → Processamento → Saída
```

### Entrada

* Nome do cliente
* Serviço
* Data
* Horário

### Processamento

* Verificar disponibilidade
* Validar regras (cancelamento, bloqueios)
* Registrar no banco

### Saída

* Confirmação de agendamento
  ou
* Mensagem de erro

---

# 5️⃣ Estrutura Lógica (Pseudoalgoritmo)

```
Se horário estiver disponível então
    Se cliente não estiver bloqueado então
        Agendar consulta
        Enviar confirmação
    Senão
        Informar bloqueio
Senão
    Informar horário indisponível
```

---

# 6️⃣ Estruturas de Programação Envolvidas

* Variáveis (cliente, data, horário)
* Vetor (lista de horários disponíveis)
* Condicional (if/else)
* Repetição (para listar horários)
* Matriz (agenda semanal)

---

# 7️⃣ Possível Atividade Prática com Wellington

Dividir em 3 etapas:

### Parte 1 – Modelagem

* Definir regras no quadro
* Criar fluxograma

### Parte 2 – Lógica

* Escrever pseudocódigo

### Parte 3 – Simulação

* Criar cenário:

  * Cliente tenta cancelar 4 vezes
  * Cliente tenta agendar horário já ocupado
  * Cliente não confirma consulta

---

# 8️⃣ Casos de Teste (Isso impressiona professor)

| Cenário         | Entrada   | Resultado Esperado   |
| --------------- | --------- | -------------------- |
| Horário livre   | 10h terça | Agendado             |
| Horário ocupado | 10h terça | Erro                 |
| 4º cancelamento | Cliente X | Bloqueado            |
| Não confirmou   | 12h após  | Cancelado automático |

---

# Estratégia para você dominar a apresentação

Não explique “como usuário”.
Explique como **analista de sistema**:

> “A regra de negócio define o comportamento. O requisito funcional implementa a ação. O requisito não funcional define a qualidade.”

Isso separa aluno comum de aluno que pensa como arquiteto.

Se quiser, eu estruturo isso em formato pronto de slide para você só copiar e colar.
