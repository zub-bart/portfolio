class Zadanie:
    def __init__(self, nazwa: str):
        self.nazwa = nazwa
        self.czy_zrobione = False

    def wypisz(self):
        if self.czy_zrobione:
            znak = 'V'
        else:
            znak = 'X'

        return f'{self.nazwa}\t{znak}'

    def ustaw_jako_zrobione(self):
        self.czy_zrobione = True