import os
import sys


def main():
    atv = int(input('Numero da Atividade: '))
    total_questoes = int(input('Quantidade de Questões: '))

    # diretorio_atual = os.getcwd()
    novo_diretorio = f'./Fabio0{atv}'

    os.makedirs(f'{novo_diretorio}')


    codigo_inicial = '#include <stdio.h>\n#include <stdlib.h>\n\nint main(){\n    \n\n    return 0;\n}'

    for i in range(1, total_questoes+1):
        num = ''
        if i < 10:
            num = f'0{str(i)}'
        else:
            num = str(i)
        nome = f'fabio0{atv}_q{num}.c'

        arquivo = open(f'{novo_diretorio}/{nome}', 'w')
        arquivo.write(codigo_inicial)

        arquivo.close()


main()
