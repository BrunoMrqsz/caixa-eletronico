# Caixa Eletrônico

Projetos em C feitos para estudo de lógica de programação. O repositório reúne:

- **Caixa eletrônico**: simula um saque e calcula quais notas devem ser entregues.


## Sumário

- [Estrutura do repositório](#estrutura-do-repositório)
- [Requisitos](#requisitos)
- [Caixa eletrônico](#caixa-eletrônico-1)


## Estrutura do repositório

```
caixa-eletronico/
├── src/
│   ├── caixa_eletronico.c   # simulador de saque com contagem de notas
│  
├── .gitignore               # ignora executáveis compilados
└── README.md
```

## Requisitos

- Compilador C, por exemplo o [GCC](https://gcc.gnu.org/)

## Caixa eletrônico

Arquivo: [`src/caixa_eletronico.c`](src/caixa_eletronico.c)

### Como funciona

O programa começa com um saldo fixo de **R$ 1.000,00** e pede o valor do saque. Em seguida, valida o valor e, se estiver tudo certo, entrega o saque usando o **menor número possível de notas**, começando pelas maiores.

Notas disponíveis: **R$ 100, R$ 50, R$ 20, R$ 10 e R$ 5**.

### Regras de validação

| Situação                         | Resultado                                          |
|----------------------------------|----------------------------------------------------|
| Valor menor ou igual a zero      | Erro: o valor deve ser maior que zero              |
| Valor maior que o saldo          | Erro: saldo insuficiente                           |
| Valor não múltiplo de R$ 5,00    | Erro: o valor deve ser múltiplo de R$ 5,00         |
| Qualquer outro valor             | Saque autorizado e saldo atualizado                |

### Compilar e executar

```bash
gcc -Wall -o caixa_eletronico src/caixa_eletronico.c
./caixa_eletronico
```

No Windows, o executável gerado será `caixa_eletronico.exe`.

### Exemplo

```
=== CAIXA ELETRONICO ===
Saldo disponivel: R$ 1000,00

Digite o valor que deseja sacar: R$ 380

Saque autorizado!
Valor do saque: R$ 380,00

Notas entregues:
3 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
1 nota(s) de R$ 20,00
1 nota(s) de R$ 10,00

Saldo restante: R$ 620,00
```

### Limitações conhecidas

- O saldo é fixo no código e não é guardado entre execuções.
- Só realiza um saque por execução.
- Não há autenticação, como cartão ou senha.



- Um `SHIFT` negativo pode gerar resultados incorretos, pois o operador `%` em C pode devolver valores negativos.
- Só criptografa; não há opção de descriptografar.
