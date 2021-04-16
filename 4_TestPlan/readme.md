# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Account number exists	| (1). Struct pointer (2). Account number |	SUCCESS |	SUCCESS	| Technical|
|  H_02   	  |Account number doesn't exist |	(1). Struct Pointer (2). Account number |	NO_EXISTING_ACC |	NO_EXISTING_ACC |	Technical |
|  H_03       | Deposit amount | (1). Struct pointer (2). Account number (3). Amount to be deposited| Success | Success | Requirement based  |
|  H_04       | Withdraw amount| (1). Struct pointers (2). Account number | Success | Success | Technical |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | Addition | (1). Struct Pointer (2). Account number	| SUCCESS |	SUCCESS |Requirement based |
|  L_02       |Account number during addition doesn't exist| (1). Struct Pointer (2). Account number|	NO_ACC_EXISTS |	NO_ACC_EXISTS |Scenario based    |
|  L_03       |Deposit, Withdraw	|  Account number	| SUCCESS	| SUCCESS	| Technical|
|  L_04       | Account number doesn't exist | (1). Account number (2). Flag |	NO_ACC_EXIST | NO_ACC_EXIST |	Technical|
