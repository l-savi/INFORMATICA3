const text = document.getElementById("Input");

text.addEventListener("focus", function(){  
    text.style.backgroundColor = "lightgreen";
});

text.addEventListener("blur", function(){ 
      text.style.backgroundColor = "white";
});
