from abc import ABC, abstractmethod


class FrequencyCounter(ABC):
    def __init__(self, address):
        self.address = address

    @abstractmethod
    def calculateFreqs(self):
        pass


class ListCount(FrequencyCounter):
    def calculateFreqs(self):
        letter_freqs = {}
        with open(self.address, 'r') as file:
            text = file.read().lower()
            for char in text:
                if char.isalpha():
                    letter_freqs[char] = letter_freqs.get(char, 0) + 1

        for letter, freq in letter_freqs.items():
            print(f"{letter} = {freq}")


class DictCount(FrequencyCounter):
    def calculateFreqs(self):
        letter_freqs = {}
        with open(self.address, 'r') as file:
            text = file.read().lower()
            for char in text:
                if char.isalpha():
                    letter_freqs[char] = letter_freqs.get(char, 0) + 1

        print(letter_freqs)

wordsFile = 'weirdWords.txt'
listCount = ListCount(wordsFile)
listCount.calculateFreqs()

dictCount = DictCount(wordsFile)
dictCount.calculateFreqs()