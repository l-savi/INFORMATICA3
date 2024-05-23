const text = document.getElementById("Input");       //alla costante andiamo ad avvolare l'id dell'elemento su quale andiamo a lavorare e tramite quel comando andiamo a prendere l'id su quale andiamo a lavorare

text.addEventListener("input", function(){           //evento al testo
    text.value = text.value.toUpperCase()            //il testo diventa maiuscolo, con quella funzione
});
