i = 1
soContem = set(("01"))
while True:
    if i % 9 == 0:
        s = str(i)
        validacao = set((s))
        if validacao.issubset(soContem):
            print("Achei:",s)
            break
    i += 1
