# Cowsay em C

Uma implementação simples do clássico comando `cowsay` feita em C.

## Descrição

Este projeto exibe uma vaca ASCII dizendo uma mensagem fornecida pelo usuário através da linha de comando.

## Como Compilar e Executar

Este projeto utiliza CMake para gerenciar a compilação. Certifique-se de ter o CMake e um compilador C (como GCC no Linux ou MinGW/MSVC no Windows) instalados.

### Linux

1.  **Clone o repositório (se ainda não o fez):**
    ```bash
    git clone https://github.com/MonitoriaPI/cowsay
    cd cowsay
    ```

2.  **Crie um diretório de build e entre nele:**
    ```bash
    mkdir build
    cd build
    ```

3.  **Execute o CMake para configurar o projeto:**
    ```bash
    cmake ..
    ```

4.  **Compile o projeto:**
    ```bash
    make
    ```

5.  **Execute o programa:**
    O executável `cowsay` estará dentro do diretório `build`.
    ```bash
    ./cowsay Sua mensagem aqui
    ```
    Exemplo:
    ```bash
    ./cowsay Olá, mundo!
    ```

### Windows

Os passos são semelhantes aos do Linux, mas você pode precisar usar um gerador CMake diferente (como "MinGW Makefiles" ou "Visual Studio") e usar o compilador apropriado.

1.  **Clone o repositório (se ainda não o fez):**
    ```bash
    git clone https://github.com/MonitoriaPI/cowsay
    cd cowsay
    ```

2.  **Crie um diretório de build e entre nele:**
    ```bash
    mkdir build
    cd build
    ```

3.  **Execute o CMake para configurar o projeto:**
    *   **Usando MinGW:**
        ```bash
        cmake .. -G "MinGW Makefiles"
        ```
    *   **Usando Visual Studio (ajuste a versão conforme necessário):**
        ```bash
        cmake .. -G "Visual Studio 17 2022"
        ```

4.  **Compile o projeto:**
    *   **Usando MinGW:**
        ```bash
        mingw32-make
        ```
    *   **Usando Visual Studio (no Prompt de Comando do Desenvolvedor):**
        ```bash
        cmake --build .
        ```

5.  **Execute o programa:**
    O executável `cowsay.exe` estará dentro do diretório `build` (ou em um subdiretório como `Debug` ou `Release` se usar Visual Studio).
    ```bash
    ./cowsay.exe Sua mensagem aqui
    ```
    ou (no caso do Visual Studio, dentro do diretório de build apropriado):
    ```bash
    ./Debug/cowsay.exe Olá, mundo!
    ```

## Exemplo de Saída

```bash
./cowsay Hello, World
```

```
Hello, World
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
```
