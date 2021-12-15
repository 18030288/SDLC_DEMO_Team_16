# **INTRODUCTION**

It's a advanced parking management system. This project is divided into 4 different parts.
- Security Door Lock System
- Parking System
- Ultrasonic Detection System
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
- 
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

# Ultrasonic-distance-calculator  
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
7.  Basic microcontroller understanding  

### How to setup   
1.  Open keil and setup to 8051 or AT89S52 microcontroller  
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
