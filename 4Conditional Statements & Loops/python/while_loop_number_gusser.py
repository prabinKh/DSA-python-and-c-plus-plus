secret_num = 7

guess = int(input("Guess a number between 1 to 10: "))

while guess != secret_num:
    print("Wrong guess. Try again: ", end="")
    guess = int(input())

print("Congratulations, you guessed the number!")
