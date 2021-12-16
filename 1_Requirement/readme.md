# **INTRODUCTION**

It's a advanced parking management system. This project is divided into 4 different parts.
- Security Door Lock System
- Parking System
- Automatic parking light system
- Distance Calculator System
- Billing System

## **Security Door Lock System**

## **Introduction:**

- Nowadays most of the systems are automated in order to face new challenges and present day requirements to achieve good results.
  Automated systems have less manual operations, so that the flexibility, reliabilities are high and accurate.
 
 ## **Principle Behind The Circuit:**

- The main component in the circuit is 8051 controller. In this project 4×3 keypad is used to enter the password. The password which is entered is compared with the predefined     password. If the entered password is correct then the system opens the door by rotating door motor and displays the status of door on LCD. If the password is wrong then door     is remain closed and a sound alarm is triggered and displays “Password is wrong” on LCD.

**Hardware Requirements:**

- 80C51 Microcontroller
- Programming cable
- 4 * 3 Matrix Keypad
- 16 *2 LCD
- DC Motor
- Capacitor
- Crystal
- L293D-Push-Pull Four Chanel Driver with Diodes
- Sounder
- Power
- Ground

**Software requirements**

- Proteus (for circuit diagram and simulation)
- Keil uVision5 IDE (for c code)


## **Parking System**

This system is purely a part of automation sector. In this mechanism we can operate a parking system without any human surveillance. By using some essential componets we can automate our parking area.

**Motivation**
The main motivation is to reduce the traffic jam that occurs in the urban areas which are caused by vehicles searching for parking.

**Hardware Requirements**

- Microcontroller 8051 (AT89C51)
- 7 seg Display 2 Digits 
- Push Button
- Ground
- Connecting Wires

**Software requirements**

- Keil uvisoin C51
- Proteus


**Features**
- To keep count of vehicles present in the area
- It shows ENTER & EXIT status

**Advantages**
- Enhanced User Experience.
- Optimized parking.
- Reduced traffic.
- Real-Time Data and Trend Insight.


- ## **Automatic parking light system**

**Motivation**
This Automatic parking light systeam is very useful in parking places to avoid current wastage by turn on the light when the vehicles are arrived at the destination.
Generally, in many areas, parking light control is done manually. That means, some person turns on the light at evening time and turns them off in the morning time. However,
there are few drawbacks to this manual method of controlling the light.  Also if the street lights are not turned off in the morning then it causes electricity wastage. Also if we implement a time-based light controlling system, then it will cause a problem since the  evening start time is different in winter and summer. This project of automatic street light control can be used to overcome all these drawbacks. The lights are turned on at night time because the light intensity is low at night. And the street lights are turned on in the daytime since the light intensity is sufficient in the daytime.


 **Hardware Requirements:**

- 80C51 Microcontroller(AT89C51)
- push button
- relay
- lamp
- BC47  
                                  
**Software requirements**

- Keil uvisoin C51
- Proteus

**How to setup**  
1.  Open keil and setup to 8051 or AT89S52 microcontroller  
2.  Compile the file  
3.  Burn file to microcontroller  
4.  Generate a Hex code for proteus for simulation  

**Features of LDR are as follows:**

 -  High reliability.
-  Light weight.
-  Wide spectral response.
-  Wide ambient temperature range.

 **State of art/Research**

 ![](https://www.projectsof8051.com/project-photos/5126-iot-vehicle-fuel-theft-detection-system-using-arduino-21.jpg)
 
  
**Strength**

 - Increase road safety

 - Improves traffic flow
 
 - This project has the main application in parking system control.

**Weakness**

 - The automatic parking system requires a higher initial investment in comparison to conventional parking.

 - Risk of theft of the automatic parking system is relatively higher since they are non-wired & are much expensive.

 - Rechargeable batteries of the automatic parking system are required to be replaced a few times.

 **Opportunities**

 - Business strategy: You will better understand how a smart parkig system solution enables you to successfully meet your business outcomes

 - Technology decisions: You will learn how a smart street lighting solution works to deliver IT and business value

**Threats**

- The absence of those parking system and even others that are not functioning properly pose danger to pedestrians, drivers and cars parking

# Distance Calculator System
The ultrasonic sensor emits a high-frequency sound pulse and calculates the distance depending upon the time taken by the echo signal to travel back after reflecting from the desired target. This system maintains the distance between two cars in parking area. 

**Features**
*This avoids accidents and prevents the cars from getting damaged
*AT89S52 interface with ultrasonic sensor HC-SR04 and 16X2 LCD to display distance

### Project Requirements  
1.  8051   
2.  16X2 LCD  
3.  HC-SR04 Ultrasonic Sensor  
4.  10K POT  
5.  Few Jumper wires  
6.  Keil IDE  

### How to setup   
1.  Open keil and setup to 8051     
2.  Compile the file  
3.  Burn file to microcontroller  
4.  Generate a Hex code for proteus for simulation  


## **Billing System**

**Features**

The main aim of using this System is to maintain the information and payment history of the customer while paying for parking bill. It has the capacity to illustrate and analyze the basic billing system and the main functionalities that surround the billing system from a business prospective and explains how each interacts to complete the billing cycle.
It capable of billing more quickly, accurately and update customer record and enables customer to view bill information.

**Services Offered to the Customers**
* A customer can create an account for his own and give his details such as address to be stored.
* The billing history of the customer is maintained.
* The customer can maintain some amount as balance to pay cash less.
* The customer can edit the information in his account as and when required.

**Accounts**

The customer account includes customer contact, profile information, account number, city and balance amount in the account.

**Payments**

Each customer in the system has an account balance, which affects any invoices requested by the customer and any payments done by the customer.

**Features Provided in the Program**
* To create New Account
* To update the existing account
* To print information of all the customers
* To search for an account
* Adding Amount to Existing Customer's Wallet


# Defining Our System:-

 Ultrasonic sensors work by sending out a wave at a frequency above the range of human hearing. The transducer of the sensor acts as a microphone to receive and send the ultrasonic sound. Our ultrasonic sensors, like many others, use a single transducer to send a pulse and to receive the echo. This sensors module includes ultrasonic transmitter, ultrasonic receiver and control circuit.

# SWOT ANALYSIS:-

 ## d) Strength:
 1. We can secure our entire system by using Security door lock system.
 
 2.The main motivation is to reduce the traffic jam that occurs in the urban areas which are caused by vehicles searching for parking.
 
 3.The distance to an obstacle can be measured with the low cost ultrasonic sensor.
 
 4.Aim of using billing system is to maintain the information and payment history of the customer while paying for parking bill.It capable of billing more quickly, accurately and update customer record and enables customer to view bill information.



 ## b) Weakness:
1.This system depends on interconnected system and works on only limited edition.

2.Although we fully believe in the capability of our sensors, we understand that ultrasonics are not suited for every application. 

3.Focuses of low thickness, similar to froth and fabric, have a tendency to assimilate sound vitality; these materials may be hard to sense at long range

4.This needs the maintainance.


 ## c) Opportunity:
1.This project can be used as parking assistance systems in vehicles.
2.This Project can be used as burglar alarm with suitable additional software for homes and offices.
3.This project can be used to reduce the business cost.

 ## d) Threats :
1.If any complication occurs in any one module then it will affect the entire system.
2.Sensors must view a surface (particularly a hard, level surface) unequivocally (oppositely) to get adequate sound reverberation.
3. Additionally, solid detecting requires a base target surface range, which is indicated for every sensor sort.
4.If connection is wrong there might be chances of short-circuit.


# 4W's an 1H :-

- # What:
We have made a advanced parking system by using various modules.

- # Where:
We can implement this system in any area according to few conditions
It measures accurate distance using a non-contact technology - A technology that involves no physical contact between sensor and object.

-3 When:
In 1959, Satomura created an ultrasonic flowmeter that used doppler technology.

-# Why:
I am developing this project for ease life of people i.e it optimizes parking space and make processes efficient. This is cost effective solution system because system works automatically. It provides safety as well as security.

- # How:
By using 8051, an ultrasonic sensor mainly used to determine the distance of the target object. 


# Detail requirements :-



## High Level Requirements

| ID             | Description                                                           |
| ----------------- | ------------------------------------------------------------------ |
| HLR1 | Used to avoid and detect obstacles with robots like biped robot, obstacle avoider robot, path finding robot etc.  |
| HLR2 |Used to measure the distance within a wide range of 2cm to 400cm   |
| HLR3 |Depth of certain places like wells, pits etc can be measured since the waves can penetrate through water   |

## Low Level Requirements

| ID             | Description                                                           |
| ----------------- | ------------------------------------------------------------------ |
|           |• Power Supply :+5V DC.  |
| LLR_1_HLR1|• Measuring Angle: 30 degree.  |                                                                                                                                                  |
|           |• Trigger Input Pulse width: 10uS TTL pulse.  |
| LLR_1_HRL1|• Depth of certain places like wells, pits etc can be measured since the waves can penetrate through water.  |

