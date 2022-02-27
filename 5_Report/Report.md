# Water vending system
# Table of Contents
1.Project Description

2.Requirements

   2.1 High level Requirements
  
   2.2 Low Level Requirements
  
3.Block Diagram

4.Component Description

   4.1 Microcontroller
  
   4.2 Actuators
  
   4.3 Sensors
   

# 1.Project Description
In this project, we are going to make a Water vending system using ATMEGA328 microcontroller and coin validator .Coin validator we are using is GD100f.The GD100f is a three type coin accpetor.The coin validator acts as a input it provides a pulse signal the to atmega 328. The water pump is the output . Water pump will be mouted on top of water tank. The pump will dispense water from the tank once the pulse signal is given by the validator. For more accuracy water level sensor can be added to monitor the tank level
# 2. Requirements


| ID |High Level Requirements|
|----|-----------------------|
|HLR1|Accept coin as input from the user|
|HLR2|Indication to Fill the tank when the water is less in tank|
|HLR3|water should be given out in the user container |
|HLR4|Volatage and current in the input should be +5v and 1.5A |
|HLR5|waterflow from the pipe to tank should controlled|



| LLR ID |HLR ID| Low Level Requirements |
|--------|------|------------------------|
|LLR1    |HLR1  |GD100f coin validator shall be used to validate the coin depending on the values of validator input ,the output of vending water can be taken care of|
|LLR2    |HLR2  |Water level indicator shall be used to indicate the wter level in the tank|
|LLR3    |HLR3  |Submissive water pump with a tube outlet can be used to give water to the user|
|LLR4    |HLR4  |Voltage regulator L7805 is used for regulating the input|
|LLR5    |HLR5  |solenoid valve is used to control the waterflow from pipe to tank |


# 3.Block Diagram

![embeddedblockdiag](https://github.com/prabakaran-8bit/M2_Emsys_watervendor/blob/e3721a7776b40f54687dbe4ec3f690024426b644/5_Report/blockdiagram.png)

# 4.Component Description

## 4.1 Microcontroller
Microcontroller-Microcontroller used here is Atmega328.It is a 8 bit microcontroller with 28 pin and RISC Architecture.
It takes the Input from the Sensors and performs computation and drives the output.

## 4.2 Actuators
* Submissive pump-Here submissive pump with tube outlet is given 
* Motor Driver - Since the Microcontroller cannot drive the pump a motor driver is used

## 4.3 Sensors

* GD100f coin validator-it is a multi-coin Acceptor,Comparer,selector used in vending machines


* Water level sensor-it senses the level of water when in a container of water.



__Objectives:__

•	This project aims to simplify the task of reducing the usage of plastic water bottles by implementing water-vending machines .
•	To develop an well-designed circut using coin validation sensensor and water pump . 
•	Provides full functional vendor to commericial areas. 
•	The objective of this project is to provide a comprehensive water management and reduce the usage of many bottles.
__Cost and Features__

•	Previously separate bottle were bought for each litre of bottles.
•	bottles can be reused.
•	cost of expenditure spend on water bottles can be reduced.
•	coin vending machine implemented on water.
•	Easily dispense water.
•	Various Essential needs regarding water can be reduced.

## 4W's and 1'H

__Who:__

•	All the organisation who wants to reduce the usage of use throw water bottles aswell as who dont wanna waste water.

__What:__

•	Earlier Many Companies and commercial places were inefficient due to the wastage of water and usage of too much water bottles.	

__When:__

•	As the wastage decreases the expenses also decreses .
•	With the decrease of expenses the cost spend on that expenses can be used on the development of the commercial.

__Where:__

•	This problem is surfaced in all the organisation in the world.

__How:__

•	This project takes in a coin and then dispense the water in the the bottle.



