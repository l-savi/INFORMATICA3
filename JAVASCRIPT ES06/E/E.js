const password1 = document.getElementById("password1");
const password2 = document.getElementById("password2");

pass2.addEventListener("change", function() {        //EVENTO
    if(password1.value!== password2.value){         //NON UGUALI
        alert("Le passwords non sono uguali");      //avviso
    }    
});
