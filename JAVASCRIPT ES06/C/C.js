const text = document.getElementById("Input");

text.addEventListener("focus", function(){          //clicco dentro
    text.style.backgroundColor = "lightgreen";
});

text.addEventListener("blur", function(){       //clicco fuori
      text.style.backgroundColor = "white";
});
