# Documento de Especificação de Produto (PRD): Conversor de Unidades C

---

## 1. Visão Geral

Este PRD detalha o **Conversor de Unidades**, um utilitário de linha de comando (CLI) desenvolvido em linguagem C. O objetivo principal é fornecer uma ferramenta rápida, precisa e modular para a conversão de diversas grandezas físicas, servindo tanto como utilitário prático quanto como base de estudo para estruturas de dados em C.

## 2. Objetivos e Público-Alvo

* **Objetivo:** Consolidar lógicas de conversão matemática em um único executável leve.
* **Público-Alvo:** Estudantes, engenheiros e entusiastas de programação que necessitam de conversões rápidas sem interface gráfica pesada.

---

## 3. Requisitos Funcionais

### 3.1 Categorias de Conversão

O sistema deve suportar, no mínimo, as seguintes categorias de conversão:

* **Área:** Conversão entre metros ao quadrado (m²) e centímetros ao quadrado (cm²).
* **Capacidade:** Conversão entre litros (l) e minilitros (ml).
* **Comprimento:** Conversão entre milímetros (mm), centímetros (cm), metros (m) e quilômetros (km).
* **Massa:** Conversão entre miligramas (mg), gramas (g) e quilogramas (kg).
* **Temperatura:** Suporte para Celsius (°C), Fahrenheit (°F) e Kelvin (K).
* **Velocidade:** Conversão entre quilômetros por hora (km/h) e metros por segundo (m/s).

### 3.2 Interface com o Usuário (CLI)

* **Menu de Navegação:** O software deve apresentar um menu principal numerado para seleção da grandeza desejada.
* **Entrada de Dados:** O usuário deve ser capaz de inserir o valor numérico e selecionar as unidades de origem e destino através do teclado.
* **Saída de Dados:** O resultado deve ser exibido de forma clara com a unidade correspondente.
* **Persistência de Ciclo:** O programa deve permitir que o usuário realize múltiplas conversões em uma única sessão até que escolha a opção de saída.

---

## 4. Requisitos Não Funcionais

* **Portabilidade:** O código deve ser compatível com compiladores GCC e MSVC (Windows/Linux).
* **Modularidade:** Uso de arquivos de cabeçalho (`.h`) para separar as definições das lógicas de cálculo.
* **Desempenho:** Resposta instantânea aos cálculos matemáticos simples.
* **Baixo Footprint:** O executável final deve ter tamanho reduzido.

---

## 5. Arquitetura Técnica

### 5.1 Estrutura de Arquivos

A solução é dividida em módulos para facilitar a manutenção:

| Arquivo | Função |
| --- | --- |
| `conversor-de-unidades-02.c` | Ponto de entrada (`main`), gerenciamento de menus e controle de fluxo. |
| `conversor.h` / `converter.h` | Protótipos de funções e definições de constantes matemáticas para conversão. |
| `conversor-de-unidades-02.exe` | Artefato binário compilado para execução direta em ambientes Windows. |

### 5.2 Lógica de Cálculo

As fórmulas aplicadas seguem padrões físicos internacionais:

1. **Linear:** Multiplicação/divisão por fatores de potência de 10 para métricas de distância e peso.
2. **Afim:** Soma/subtração de constantes para escalas de temperatura (ex: $+273.15$ para Kelvin).

---

## 6. Fluxo do Usuário (User Flow)

1. **Início:** O usuário executa o programa.
2. **Seleção:** Escolha da grandeza física (Ex: "5 - Temperatura").
3. **Configuração:** Escolha da unidade de origem (Ex: "Celsius") e destino (Ex: "Fahrenheit").
4. **Input:** Entrada do valor numérico.
5. **Processamento:** O sistema executa a função específica definida nos headers.
6. **Resultado:** Exibição do valor convertido.
7. **Loop:** Retorno ao menu principal ou encerramento.

---

## 7. Roadmap de Melhorias

* **v1.1:** Adicionar o básico para fazê-lo funcionar.
* **v1.2:** Adicionar melhorias no design.
* **v1.3:** Adicionar melhorias no design e implementar a opção de fazer funcionar em ambiente Linux.
* **v2.0:** Adicionar a opção de converter as unidades em Inglês.
