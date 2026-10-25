# &#x20; **C PROGRAMMING AND DATA STRUCTURES LAB PROJECT TEST REPORT**

## &#x20;  

### &#x20;  **\*PROJECT NAME: Text Editor with Undo/Redo Using Stack** 

### &#x20;  **\*NAME: SHARANYA DESAI**

### &#x20;  **\*ROLL NO:20251ECE0132**

### &#x20;  **\*PLATFORM :Online GBD**

### 

### **━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━**

### **1. OBJECTIVE**

### **━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━**

##### The objective of this project is to develop a simple text editor using the C programming language and the stack data structure. The program allows users to insert text, delete characters, display and clear the document, and perform undo and redo operations. It demonstrates how stacks can be used to store previous document states and manage changes efficiently. 



### **━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━**

### **2. TESTING METHOD**

### **━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━**

##### The program was tested using its menu options in Online GDB.

##### Different operations were performed to check whether the

##### document content and messages matched the expected results.

#### 

#### ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

#### **3. TEST CASES**

#### ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━



###### TEST CASE 01 — INSERT TEXT

###### Input          : Enter "Hello".

###### Expected Result: Text should be added to the document.

###### Actual Result  : "Hello" was displayed.

###### Status         : PASS

###### 

###### TEST CASE 02 — INSERT ADDITIONAL TEXT

###### Input          : Add " World" after "Hello".

###### Expected Result: The document should display "Hello World".

###### Actual Result  : The document displayed "Hello World".

###### Status         : PASS



###### TEST CASE 03 — DISPLAY DOCUMENT

###### Input          : Select option 5.

###### Expected Result: The current document should be displayed.

###### Actual Result  : The document content was displayed.

###### Status         : PASS

###### 

###### TEST CASE 04 — UNDO OPERATION

###### Input          : Select option 3 after making a change.

###### Expected Result: The last change should be reversed.

###### Actual Result  : The previous document content was restored.

###### Status         : PASS

###### 

###### TEST CASE 05 — REDO OPERATION

###### Input          : Select option 4 after undoing a change.

###### Expected Result: The undone change should be restored.

###### Actual Result  : The change was restored.

###### Status         : PASS

###### 

###### TEST CASE 06 — DELETE CHARACTERS

###### Input          : Select option 2 and delete 5 characters.

###### Expected Result: The last 5 characters should be removed.

###### Actual Result  : The program confirmed successful deletion.

###### Status         : PASS

###### 

###### TEST CASE 07 — CLEAR DOCUMENT

###### Input          : Select option 6.

###### Expected Result: The document should become empty.

###### Actual Result  : The document was cleared.

###### Status         : PASS

###### 

###### TEST CASE 08 — UNDO WHEN NO ACTION IS AVAILABLE

###### Input          : Start a fresh run and select option 3.

###### Expected Result: The program should display a suitable message.

###### Actual Result  : "Nothing to undo."

###### Status         : PASS

###### 

###### TEST CASE 09 — REDO WHEN NO ACTION IS AVAILABLE

###### Input          : Start a fresh run and select option 4.

###### Expected Result: The program should display a suitable message.

###### Actual Result  : "Nothing to redo."

###### Status         : PASS

###### 

###### ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

##### **4. OBSERVATION**

###### ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

##### The tests checked the main text-editing functions of the

##### program. The undo and redo operations helped restore earlier

##### and later document states. The program also displayed suitable

##### messages when there was no action available to undo or redo.

###### 

###### ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

##### **5. CONCLUSION**

###### ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

###### 

##### Through this project, I learned how the stack data structure

##### can be used to manage changes in a text editor. Implementing

##### and testing the program helped me understand the working of

##### undo and redo operations and the importance of testing

##### different situations.

##### 

###### &#x20;                          ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

### &#x20;                              **END OF REPORT**

&#x20;                                          ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

###### &#x20;      

