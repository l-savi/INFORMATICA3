m = parseInt(prompt("inserisci il coefficiente m della retta y=mx+c"));
c = parseInt(prompt("inserisci il coefficiente c della retta y=mx+c"));

calcolaY = function (x) {
    return (m * x) + c;
}

intersezioneAsseX = (0 - c) / m;

console.log("Coordinata Y per ascissa -1 = " + calcolaY(-1));
console.log("Coordinata Y per ascissa 10 = " + calcolaY(10));
console.log("Punto di intersezione con l'asse Y = " + calcolaY(0));
console.log("Punto di intersezione con l'asse X = " + intersezioneAsseX);
