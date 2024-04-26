const letters = "ABCDEFGHIJKLMNOPQRSTUVWXY";
let currentIndex = 0;

document.querySelector("h1").onmouseover = event => {
    currentIndex = 0; 
    const word = event.target.dataset.value;
    const wordLength = word.length;
    
    const interval = setInterval(() => {
        const currentLetters = word.slice(0, currentIndex);
        const remainingLength = wordLength - currentIndex;
        const randomLetters = Array.from({ length: remainingLength }, () => letters[Math.floor(Math.random() * 26)]);
        event.target.innerText = currentLetters + randomLetters.join("");

        currentIndex++;
        if (currentIndex > wordLength) clearInterval(interval);

    }, 50); 
};
