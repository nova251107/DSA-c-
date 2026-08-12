"use strict";
// treat all JS code as newer virsion 

/* 
old javascript and new java script have so mnay diiffrent in their syntax
old J.S dont have class and object 
so both are imp thats why we do "use string" 
it mean we are telling J.S that its new style code 
 */

// print something to the console 
console.log("Hello World");
console.log(10);
console.log(20+30);

// variable 
/*  
    let   == value can be changed 
    const == value cannot be reassign 
    var   == older way of declare variables 

    For modern JavaScript:
    Prefer let and const; avoid var unless you specifically need its legacy behavior.
    
 */

    // declare a variable in 4 way 
const AccountId = 1234323
let AccountEmail = "gadoyavatsalya@gmail.com"
let AccountState;
var AccountPassword = "12345"
//AccountCity = "Jaypur"        // not recoomended

// modify varibale 
// AccountId = 8393839 ** we cant change a constant varibale **
AccountEmail = "hahah@gmail.com"
AccountPassword = "bbhsvtvs"
//AccountCity = "surat" error in new 
// for print one by one :- console.log(var_name);
console.log(AccountId);
console.log(AccountPassword);
console.log(AccountEmail);
//console.log(AccountCity); error in new J.S
console.log(AccountState);

// for print all var in one time :- console.table([var1,var2,var3...])
// its print like table formate 


console.table([AccountEmail,AccountId,AccountPassword,AccountState]);
/*  output
┌─────────┬───────────────────┐
│ (index) │ Values            │
├─────────┼───────────────────┤
│ 0       │ 'hahah@gmail.com' │
│ 1       │ 1234323           │
│ 2       │ 'bbhsvtvs'        │
│ 3       │ undefine          │
└─────────┴───────────────────┘ 
*/
// never use var in your code , because of issue of functional scope 
/* 
if we just declare a var and not define it then its print undefine 

example :- with out use scrict 
no error in :- AccountCity = "Jaypur"   

but with use scrict give error 
AccountCity = "Jaypur"   error 

so we add comment on that 
 */
//alert (3+3) ** we are using node J.S not broweser 
// in broweser no error in node errror 

// code must redeable 
// ECMA is official web docs for J.S

let name = "hietsh"
let age = 18 
let isLoggedIn = false
let temp = null
let stamp;
/* DATA TYPES AND VARIBLES  */
// number 2 to opwer 53
// bigint (for larger data number)
// string ==> true/false
// null ==> standalone value 
// undefine ==> not define 
// symbol (use in react and unique ness)

// object 

// cheack data type       -  output
console.log(typeof age); // number 
console.log(typeof null); //object 
console.log(typeof undefined); //undefined  





