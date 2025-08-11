import random

secret = random.randint(1, 20)
attempts = 0

print("Guess a number between 1 and 20!")

while True:
    guess = int(input("Your guess: "))
    attempts += 1
    if guess == secret:
        print(f"Correct! You guessed it in {attempts} tries.")
        break
    print("Too low!" if guess < secret else "Too high!")
