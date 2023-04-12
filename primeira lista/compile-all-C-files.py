import os
from sys import argv

os.system("rmdir /s dist")
os.system("mkdir dist")

def getPathCFile(n):
    if(n < 10):
        path = os.path.abspath(f"./Questao0{n}.c")
    else:
        path = os.path.abspath(f"./Questao{n}.c")

    return path


def getPathDistFile():
    return os.path.abspath("./dist")

if(not argv[1]):
    progress = 0
    for x in range(1, 21+1):
        progress += 100/21

        if(x < 10):
            os.system(f"gcc \"{getPathCFile(x)}\" -o \"{getPathDistFile()}\"/Questao0{x}.exe")
        else:
            os.system(f"gcc \"{getPathCFile(x)}\" -o \"{getPathDistFile()}\"/Questao{x}.exe")

        os.system("cls")
        print(f"progresso: {int(progress)}%")

    os.system("cls")
    print(f"progresso: 100%\n")
    print("Todos os arquivos foram compilados com sucesso!")
    print("Disponível em ./dist")

else:
    try:
        if(int(argv[1]) < 10):
            os.system(f"gcc \"{getPathCFile(int(argv[1]))}\" -o \"{getPathDistFile()}\"/Questao0{argv[1]}.exe")
        else:
            os.system(f"gcc \"{getPathCFile(int(argv[1]))}\" -o \"{getPathDistFile()}\"/Questao{argv[1]}.exe")
    except:
        print("Insira apenas numeros como argumento")
