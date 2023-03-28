import os

os.system("mkdir dist")

def getPathCFile(n):
    if(n < 10):
        path = os.path.abspath(f"./Questao0{n}.c")
    else:
        path = os.path.abspath(f"./Questao{n}.c")

    return path


def getPathDistFile():
    return os.path.abspath("./dist")


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