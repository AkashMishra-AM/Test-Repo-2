let secret = Math.floor(Math.random() * 20) + 1;
let attempts = 0;

alert("Guess a number between 1 and 20!");

while (true) {
  let guess = parseInt(prompt("Your guess:"));
  attempts++;
  if (guess === secret) { alert(`Correct! You guessed it in ${attempts} tries.`); break; }
  alert(guess < secret ? "Too low!" : "Too high!");
}
