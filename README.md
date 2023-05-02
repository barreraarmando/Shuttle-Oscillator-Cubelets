# Shuttle Oscillator Cubelets
p8 (seconds) Life object shuttle oscillator on Cubelets

Created by Rodrigo Sánchez Torres ( rodrigosanchez315@yahoo.com.mx ) At Artificial Robotics Laboratory, Escuela Superior de Cómputo, Instituto Politécnico Nacional

Youtube: https://www.youtube.com/watch?v=jG7h_HnKF4g

This construction was inspired by an interesting Game of Life cellular automaton object known as "shuttle", where the oscillator (in this case, a little car made with Cubelets) changes its moving direction clockwise when it approaches to another object (in this case, a flashlight that increases its intensity when the car comes near). To reproduce this, upload the "Lampara.c" code to any desired number of Flashlight Cubelets and connect each pair to a Distance sense Cubelet. In the case of the car, connect four Drive Cubelets to a Brightness sense Cubelet and upload the "Rueda_derecha.c" code for the right Drive Cubelets and the "Rueda_izquierda.c" code for the left Drive Cubelets. Both codes make use of a parameter named "cuarto_vuelta", this is the time in milliseconds that takes the car to spin and could be adjusted according to the Drive Cubelets caracteristics such as wear or stability.
