# Microcomputers_lab5
## Introduction 

The primary purpose of this lab is to construct a modest water level regulating system for a water tank using the knowledge of interrupts and other programming techniques of PIC16f877A. PIC16F877A is a pic microcontroller that is utilized in a variety of tasks. This microcontroller also has a significant amount of use in the circuits of digital electronics. 

The PIC16F877A features 256 bytes of EEPROM data memory, an ICD, 2 Comparators, 8 channels of 10-bit Analog-to-Digital converter, 2 capture/compare/PWM functions, and the synchronous serial port can be configured as either 3-wire Serial Peripheral Interface (SPI) or the 2-wire Inter-Integrated Circuit (I²C) bus and a Universal Asynchronous Receiver Transmitter (USART). PIC16f877A is utilized in an extremely extensive variety of different kinds of electronics in the industry. It finds use in things like home automation, remote sensors, safety and security equipment, and a wide variety of industrial instruments.

Knowledge of making PCB is also applied to this project for a better output. A printed circuit board, or PCB, is used to hold electronic components mechanically and link them electrically via conductive channels carved from copper bonded over an insulative substrate. PCBs may have one side, two sides, or more layers, depending on their design.

The designed electronic circuit is able to control the water level of a tank with the help of two water pumps. One water pump is to control the water inlet of the tank and the other one is for the water outlet. To detect the water level of the tank, three digital water detecting sensors were utilized. The microcontroller has programmed to read the sensor signals and operate the water pumps according to a given operation table.

## The PCB design

<div style="width:40px ; height:40px">
  ![The PCB design](https://github.com/Brownbear2222/Microcomputers_lab5/blob/ad16d36bf75f88d35d954a3c9ce42b28f0ade424/LAB4_pcb.png "LAB4_pcb.png")
<div>


## Procedure


The lab activity was done in two steps.
The first one was software simulation. This was done in proteus. For the simulation first we built the code in MP lab x ide. After that, the circuit was built in proteus. Then the code was uploaded to the proteus as hex file. Next, we checked the outputs and verified the code.
As the second step the hardware imputation, this was done in a printed circuit board. This step had to be done in two steps.
First, the circuit was built on a bread board and it was checked on to see whether the components were working properly, and if the circuit was working under practical scenarios. After these, the PCB was made. 

PCB making process-

There were three basic methods to make a PCB,
1.  Iron on Glossy paper method.
2.  Circuit by hand on PCB.
3.  Laser cutting edge etching.

Since laser method was the industrial method to make PCBs,  we used the first- iron on glossy paper method,

To start with this, we made the circuit design using proteus PCB design tool. Then took a printout of the circuit design using a laser printer on a glossy paper. Then cut the copper board according to the size of the layout using a hacksaw or a cutter. Next- steel wool, soft sandpaper, or abrasive sponge washes were used to scrub the copper side of the PCB to remove both the top copper oxide layer and the photoresist layer. Sanded surfaces also made it easier for the image from the paper to stick. Then cleaned the Copper clad board using alcohol. Then to transfer the printed design from the photo paper to the board (using a laser printer), it was made sure that the top layer was horizontally flipped. Next we placed the board's copper surface on the printed plan. It was ensured that the board was perfectly oriented along the printed layout's boundaries, then tape was used to keep the board and printed paper in place. After heating the electric iron to the highest temperature, we arranged the board and picture paper on a clean hardwood table with the back of the photo paper facing top. Then ironed the photo paper all the way along with the tip with a little pressure for 10 to 20 minutes. Then the iron's heat transferred the ink from the glossy paper to the copper plate. Next, the printed plate was kept in room temperature in some water for around 10 minutes after ironing. The paper was dissolved, and then it was carefully removed. Then we checked if there were any disconnections and corrected them using a permanent marker. After that, the printed board was etched in ferric chloride to remove any unwanted copper. Then, the ink was cleaned using thinner and the holes were drilled.
Finally, after the making of PCB, the components were soldered into the board.

## An image of the real implementation 
## Results
## Discussion & Conclusion

In this experiment, mainly we were able to know how to use the knowledge of interrupts and other programming techniques of PIC16F877A to develop a small water leveling controlling system of a water tank. Before manufacturing the PCB we check the circuit by simulating on proteus. As there are no sensors in proteus we used active latched switches instead. Then made it on PCB. However, the task made easy with lecture notes and did well with the help of group members. 


## The code
