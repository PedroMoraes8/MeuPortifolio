import fractions
import cmath

def somar_numeros(numeros):
    resultado = sum(numeros, 0)
    return resultado

def subtrair_numeros(numeros):
    resultado = numeros[0]
    for numero in numeros[1:]:
        resultado -= numero
    return resultado

def multiplicar_numeros(numeros):
    resultado = numeros[0]
    for numero in numeros[1:]:
        resultado *= numero
    return resultado

def dividir_numeros(numeros):
    resultado = numeros[0]
    for numero in numeros[1:]:
        if numero == 0:
            return "Erro: divisão por zero."
        resultado /= numero
    return resultado

def criar_numero(entrada):
    try:
        return int(entrada)
    except ValueError:
        try:
            return float(entrada)
        except ValueError:
            try:
                return complex(entrada)
            except ValueError:
                try:
                    return fractions.Fraction(entrada)
                except ValueError:
                    return None

while True:
    numeros = []
    while True:
        entrada = input("Digite um número (ou 0 para parar): ")
        if entrada == '0':
            break
        numero = criar_numero(entrada)
        if numero is not None:
            numeros.append(numero)
        else:
            print("Número inválido. Por favor, tente novamente.")
    
    if not numeros:
        print("Nenhum número para realizar a operação. Operação cancelada.")
    else:
        # Pergunta ao usuário qual operação deseja executar
        print("Escolha a operação que deseja executar:")
        print("1. Somar")
        print("2. Subtrair")
        print("3. Multiplicar")
        print("4. Dividir")
        opcao = int(input("Digite o número da opção desejada: "))
        
        if opcao == 1:
            resultado = somar_numeros(numeros)
            print(f"A soma dos números é igual a {resultado}")
        elif opcao == 2:
            resultado = subtrair_numeros(numeros)
            print(f"A subtração dos números é igual a {resultado}")
        elif opcao == 3:
            resultado = multiplicar_numeros(numeros)
            print(f"A multiplicação dos números é igual a {resultado}")
        elif opcao == 4:
            resultado = dividir_numeros(numeros)
            print(f"A divisão dos números é igual a {resultado}")
        else:
            print("Opção inválida. Por favor, escolha 1 para soma, 2 para subtração, 3 para multiplicação ou 4 para divisão.")

    continuar = input("Deseja realizar mais operações? (S/N): ")
    if continuar.upper() != "S":
        break
