const password = document.getElementById("password");

password.addEventListener("change", function(){
    if(password.value.length < 8){
        password.style.backgroundColor = "red"; 
    }    
    else{
        password.style.backgroundColor = "green";
    }
});
