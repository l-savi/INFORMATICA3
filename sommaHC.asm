.model small ;scelta modello
.stack 100h ; scelta stack
.data       ; inizio segmento dei dati
       N1 DB 4
       N2 DB 3   
       Somma DB ?
       
            
.code  
 .Start up
mov  ax, @data ;sposto .data in data segment
mov ds, ax

mov al, N1  ;somma di n1, n2
add al, N2     
          
          
mov somma, al  ;sposto risultato in somma    


add somma, 30h  ;aggiungo 30h alla somma

mov ah,02h
mov dl, somma  ;visualizzazione somma
int 21h   

mov ah, 4ch ;contrtollo SO
int 21h
end