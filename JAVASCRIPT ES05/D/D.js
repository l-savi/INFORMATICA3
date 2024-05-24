const text = document.getElementById("Input");

text.addEventListener("Input", function() {
    text.value = text.value.toUpperCase()
});
