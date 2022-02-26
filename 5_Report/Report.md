## Title : Water-Vendor system
Introduction In this project, we are going to make a Water vending system using ATMEGA328 microcontroller and coin validator .Coin validator we are using is GD100f.The GD100f is a three type coin accpetor.The coin validator  acts as a input it provides a pulse signal the to atmega 328.  The water pump is the output . Water pump will be mouted on top of water tank. The pump will dispense water from the tank once the pulse signal is given by the validator. For more accuracy water level sensor can be added to monitor the tank level
## Research

__Objectives:__

•	This project aims to simplify the task of reducing the usage of plastic water bottles by implementing water-vending machines .
•	To develop an well-designed circut using coin validation sensensor and water pump . 
•	Provides full functional vendor to commericial areas. 
•	The objective of this project is to provide a comprehensive water management and reduce the usage of many bottles.
____Requirements____
 
 __High level and and Low level Requirements__


__HIGH LEVEL REQUIREMENTS__


| ID    |                    DESCRPTION                                       | CATEGORY |   STATUS  |
|-------|---------------------------------------------------------------------|----------|-----------|
| HR01  |  Microcontroller                                                    |Atmega328 |IMPLEMENTED|   
| HR02  |  Coin validator                                                     |GD100f    |IMPLEMENTED|
| HR03  |  Sub missive waterpump                                              |240L/H    |IMPLEMENTED| 
| HR04  |  Voltage Regulator                                                  |L7805     |IMPLEMENTED|
| HR05  |  N-CHANNEL MOSFET                                                   |60V/30A   |IMPLEMENTED|     



__LOW LEVEL REQUIREMENTS__



| ID    |                    DESCRPTION                                                            | HLR ID |   STATUS  |
|-------|------------------------------------------------------------------------------------------|--------|-----------|
| HR01  |  Microcontroller                                                                         |  HR01  |IMPLEMENTED| 
                                                   
| HR02  |  Coin Validator                                                                          |  HR02  |IMPLEMENTED|
| HR03  |  Submissivve waterpump                                                                   |  HR03  |IMPLEMENTED| 
| HR04  |  Volage regulator                                                                        |  HR04  |IMPLEMENTED|
| HR05  |  N-CHANNEL Mosfet                                                                        |  HR05  |IMPLEMENTED|     
| LR01  |  Ceramic capacitor 100nF,22pf                                                            |        |IMPLEMENTED| 
| LR02  |  Electrolytic capacitor 1uf                                                              |        |IMPLEMENTED|
| LR03  |  Crystal Oscillator 16 MHZ                                                               |        |IMPLEMENTED|
| LR04  |  Resistor 10KΩ                                                                           |        |IMPLEMENTED|
