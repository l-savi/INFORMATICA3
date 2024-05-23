//Creo script che poi viene eseguito con Google
const Button = document.getElementById("Button");    //alla costante andiamo ad avvolare l'id dell'elemento su quale andiamo a lavorare e tramite quel comando andiamo a prendere l'id su quale andiamo a lavorare

Button.addEventListener('mouseover', function(){                   //evento al bottone con mouse sul bottone
    Button.style.backgroundColor = "lightgreen";                   //prendiamo stile bottone e cambiamo sfondo 
});

Button.addEventListener('mouseout', function(){                     //evento al bottone con mouse non sul bottone 
    Button.style.backgroundColor = "white";                          //prendiamo stile bottone colore sfondo 
});
