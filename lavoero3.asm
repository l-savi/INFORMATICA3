;scelta del modello
.MODEL small       
;scelta dello stack
.STACK 30h

.DATA
N1 DB ?
N2 DB ?
Somma DB ?
dom1 db 'inserisci il primo numero',,13,10,'$'
dom2 db 'inserisci il secondo numero',,13,10,'$'
output db 'la somma e',,13,10,'$'
capo db ,,13,10,'$'


.CODE
.STARTUP

mov ax,@data  ;sposto .data in data segment
mov ds,ax  

mov ah, 09h
mov dx, offset dom1  ;scrivo input
int 21h   

mov ah, 01h
int 21h            ;lettura valore N1
mov n1, al 

mov ah, 09h
mov dx, offset capo  ;formattazione
int 21h

mov ah, 09h
mov dx, offset dom2  ;stringa input
int 21h

mov ah, 01h
int 21h            ;lettura valore N2
mov n2, al

mov ah, 09h
mov dx, offset capo  ;formattazione
int 21h

mov al,n1      ;somma di N1, N2
add al,n2

mov somma, al   ;sposto risultato in somma

sub somma, 30h  ;aggiungo 30h alla somma
            
mov ah, 09h
mov dx, offset output  ;scrivo stringa output
int 21h
            
mov ah,02h
mov dl,somma   ;visualizzazione somma
int 21h

mov ah,4ch     ;contrtollo SO
int 21h

end
