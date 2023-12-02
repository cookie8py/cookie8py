import random

myHeart = ["love", "miss", "like", "adore", "trust"]
saveHeart = random.choice(myHeart)

guess = input("Guess what I want to say to you \"I (  ) you!\": ")
if guess == saveHeart:
  print("You guessed it!")
else:
  print("Sorry, try again.")
  print(f"The correct answer was \"{saveHeart}\".")
