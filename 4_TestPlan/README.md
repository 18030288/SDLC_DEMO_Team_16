## TestPlan
- Security Door Lock System 

| ID | Description | Status |
| --- | --- | --- |
| 1 | Simulation on Proteus | Implemented |
| 2 | 8051 Microcontroller  | Implemented |
| 3 | LCD | Implemented |
| 4 | Keypad | Implemented |
| 5 | Inputs  | Implemented |
| 6 |Output | Implemented |

## Test Plan
## High Level Test Plan
| Test_Id  |   Desciption                |  Expected_Input | Expected_output            | Actual_Output | Type_of_Test |
| -------- |   --------------            |  -------------- | ---------------            |  ------------- | -------------|
| HL01     |   Vehicle's Entry/ Gate open|  Sensor High    | Entry recorded             |  Pass          | Requirement |
| HL02     |   Entry Gate Closees        |  Sensor Low     | Counter Increases the count|  Pass          | Requirement |
| HL03     | Parking Light system    | Button ON       | Light ON                   |  Pass          | Requirement |
| HL04  | Parking Light System | Button OFF      | Lights OFF                 | Pass           | Requirement |
| HL05| Door Lock System | Correct Password | Door Opens | Pass | Requirement |
|HL06 | Obstacle Detection | Sensor detects Object | Buzzer alarm | Pass | Requirement |
|HL07| Billing Unit| Bill Generation | Vehicle Entry | Amount Calculation | Pass | Requirement|

## Low level test plan
 | Test ID |	Description	                          | Exp OUT	                  | Actual Out	| Type Of Test      |
|---------|---------------------------------------|---------------------------|-------------|-------------------|
| LL01	  | Checking the number of vehicles present	| Displaying updated stocks	| Matched	    | Requirement based |
| LL02   | Checking the motion of vehicles         |  Lights ON                | Matched     | Required Based    |
|LL03| Object Present other than Vehicle | Lights ON | Matched | Requirement Based |
|LL04| Door Lock system - Password Change Option | Present | Matched | Requirement Based|
|LL05| Billing Unit - Customer Details | Present | Matched | Requirement Based |

- Automated park lighting system

| ID | Description | Status |
| --- | --- | --- |
| 1 | Proteus Simulation | Implemented |
| 2 | 8051 Microcontroller  | Implemented |
| 3 | Lamp | Implemented |
| 4 | Button | Implemented |
| 5 | Inputs  | Implemented |
| 6 |Output | Implemented |

## Test Plan
## High Level Test Plan
| Test_Id  |   Desciption                |  Expected_Input | Expected_output            | Actual_Output | Type_of_Test |
| -------- |   --------------            |  -------------- | ---------------            |  ------------- | -------------|
| HL01     |   Detects Vehicle's Motion |  Button ON    | Lights ON             |  Pass          | Requirement |
| HL02     |   Vehicle motion not detected        |   Button OFF    | Lights OFF |  Pass          | Requirement |
## Low level test plan
 | Test ID |	Description	                          | Exp OUT	                  | Actual Out	| Type Of Test      |
|---------|---------------------------------------|---------------------------|-------------|-------------------|
| LL01	  | Checking the motion of vehicles	| Lights ON	| Matched	    | Requirement based |

