"use strict";
// treat all JS code as newer virsion 

/* 
old javascript and new java script have so mnay diiffrent in their syntax
old J.S dont have class and object 
so both are imp thats why we do "use string" 
it mean we are telling J.S that its new style code 
 */

// print something to the console 
/* console.log("Hello World");
console.log(10);
console.log(20+30);
 */
// variable 
/*  
    let   == value can be changed 
    const == value cannot be reassign 
    var   == older way of declare variables 

    For modern JavaScript:
    Prefer let and const; avoid var unless you specifically need its legacy behavior.
    
 */

    // declare a variable in 4 way 
/* const AccountId = 1234323
let AccountEmail = "gadoyavatsalya@gmail.com"
let AccountState;
var AccountPassword = "12345" */
//AccountCity = "Jaypur"        // not recoomended

/* // modify varibale 
// AccountId = 8393839 ** we cant change a constant varibale **
AccountEmail = "hahah@gmail.com"
AccountPassword = "bbhsvtvs"
//AccountCity = "surat" error in new 
// for print one by one :- console.log(var_name);
console.log(AccountId);
console.log(AccountPassword);
console.log(AccountEmail);
//console.log(AccountCity); error in new J.S
console.log(AccountState); */

// for print all var in one time :- console.table([var1,var2,var3...])
// its print like table formate 


//console.table([AccountEmail,AccountId,AccountPassword,AccountState]);
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
// code redeability that should be high 
// ECMA is official web docs for J.S
// ecma is official documentataion for javascript 

/* let name = "hietsh"
let age = 18 
let isLoggedIn = false
let temp = null
let stamp;
let id = Symbol("id") */

/* DATA TYPES AND VARIBLES  */
// number 2 to opwer 53
// bigint (for larger data number)
// string ==> true/false
// null ==> standalone value 
// undefine ==> not define 
// symbol (use in react and unique ness)

// null ===> is object 
// undefined ==> undefined type 

// cheack data type       -  output
/* console.log(typeof age); // number 
console.log(typeof null); //object 
console.log(typeof undefined); //undefined   */

//==============================================================
// data type conversion 
//==============================================================
/* 
let score1 = "33";
console.log(score1) // 33
console.log(typeof score1)// string 
let valueInNum1 = Number(score1)
console.log(valueInNum1) // 33
console.log(typeof valueInNum1)// NUmber */

/* let score2 = "33abc";
console.log(score2) // 33abc
console.log(typeof score2)// string 
let valueInNum2 = Number(score2)
console.log(valueInNum2) // NaN
console.log(typeof valueInNum2)// NUmber */

// they converted 33abc into num but if we print then its show NaN 
/* let score3 = null;
console.log(score3) //null
console.log(typeof score3)// object 
let valueInNum3 = Number(score3)
console.log(valueInNum3) // 0
console.log(typeof valueInNum3)// NUmber */

// if we convert null to num then its show 0 (zero) in number 
/* let score3 = undefined;
console.log(score3) //undefined
console.log(typeof score3)// undefined 
let valueInNum3 = Number(score3)
console.log(valueInNum3) // NaN
console.log(typeof valueInNum3)// NUmber */
// same as if we write undefined then its print in num ==> undefined 
/* let score3 = true;
console.log(score3) //true
console.log(typeof score3)// boolean 
let valueInNum3 = Number(score3)
console.log(valueInNum3) // 1
console.log(typeof valueInNum3)// NUmber */
// same as if we write true then its print in num ==> 1 
/* let score3 = false;
console.log(score3) //false
console.log(typeof score3)// boolean 
let valueInNum3 = Number(score3)
console.log(valueInNum3) // 0
console.log(typeof valueInNum3)// NUmber */
// same as if we write false  then its print in num ==> 0 

/* let isbool = 1
console.log(isbool)
let isconvert = Boolean(isbool)
console.log(isconvert)
console.log(typeof isconvert) */

// "" empty string is ==> false
// " " with out empty string ==> true 
// 1==> true and 0==> false 

// trusty ==> which is not falsy 
// falsy ==> NaN , empty string , 
// operation 
/* let value = 3 
let negValue = - value  */
/* 
console.log(negValue);//-3
console.log(2+3);//5
console.log(2-3);//-1
console.log(2*3);//6
console.log(2**3);//8
console.log(3%2);//1
console.log(2/3);//0.66666666666
 */

/* let str1 = "hello"
let str2 = " vasu"
let str3 = " you are my hero "
let str4 = str1 + str2 + str3
console.log(str4) */
// output :- hello vasu you are my hero 

//====================================================================
/* console.log("1"+2)// 12
console.log(1+"2")// 12
console.log(1+2+"2")// 32 
/* if num at first then its operation addition  */

/*console.log("1"+2+2)// 122 
/* if string in the first in conversion then all part is treated as string */

/* console.log(+true);//1
console.log(+"");// 0
 */
/* let num1, num2, num3 
num1 = num2 = num3 = 2 + 2 */
//============================================================================
/* But JavaScript has two types of equality:

5 == "5"    // true
5 === "5"   // false 
// == → loose equality

JavaScript may convert the types before comparing.

=== → strict equality ⭐

Checks value + type.
*/
console.log("2">1);//true 
console.log("02">1);//true
/* 5. null and undefined

These have some special behavior:

null == undefined     // true
null === undefined    // false

This is another reason to prefer strict equality

null == 0     → false
null === 0    → false
null > 0      → false
null >= 0     → true

. */
/* 
JavaScript: Primitive vs Non-Primitive

The main difference is how the value is stored/accessed and copied.

1. Primitive Data Types(call by value)

Primitive = single, immutable value.

JavaScript has 7 primitive types:

1. Number
2. String
3. Boolean
4. Undefined
5. Null
6. BigInt
7. Symbol

Example:

let a = 10;
let name = "Daud";
let isReady = true;
Important property: Immutable

The primitive value itself cannot be changed.

let name = "hello";

name[0] = "H";   // doesn't modify the string

You can assign a new value to the variable:

name = "Hello";

But the original "hello" value wasn't modified.

2. Non-Primitive / Reference Types(call by reffrence)

The main non-primitive type is Object.

Examples:

let user = {
    name: "Daud",
    age: 20
};

let arr = [10, 20, 30];

function greet() {
    console.log("Hello");
}

symbole :- 
Its main purpose is to create a unique identifier.

let id1 = Symbol("id");
let id2 = Symbol("id");

console.log(id1 === id2); // false


Arrays and functions are technically objects in JavaScript.

Other examples include:

Object
├── Array
├── Function
├── Date
├── Map
├── Set
└── ...
3. Biggest Difference ⭐
Primitive

The variable contains the primitive value.

let a = 10;
let b = a;

b = 20;

console.log(a); // 10
console.log(b); // 20

Changing b doesn't affect a.

Object / Reference value

Variables hold a reference to the object.

let user1 = {
    name: "Daud"
};

let user2 = user1;

user2.name = "Vasu";

console.log(user1.name); // "Vasu"
console.log(user2.name); // "Vasu"

Both variables refer to the same object.

Conceptually:

user1 ─────┐
           ↓
        [ Object ]
           ↑
user2 ─────┘
 */
/* 
call by value     :-> copy org data changes on that copy value 
call by reffrence :-> direct changes on origional value

javascript is dynamic no need to define pre  value 


const score = 100
const scoreValue = 100.32

const isLoggedIn = false
const outsideTemp = null 
let userEmail;

 */
/* 
const heros = ["shaktiman", "nagraj ", "doga0"]

let myobj = {
    name : "vasu",
    age : 22,
}

const myfunc = Func(){
console.log("hello world ");
}

console.log(typeof var_name);

*/
/* 
Number      → "number"
String      → "string"
Boolean     → "boolean"
Undefined   → "undefined"
Null        → "object"      ⚠️
BigInt      → "bigint"
Symbol      → "symbol"
Object      → "object"
Array       → "object"      ⚠️
Function    → "function"
 */

/* 
stake memory(primitives ) heap memory (non -primitives)

// primitives 
let a = 10;
let b = a;

b = 20;

console.log(a); // 10
console.log(b); // 20

//object (not primitives)
let user1 = { name: "Vasu" };
let user2 = user1;

user2.name = "Rahul";

console.log(user1.name); // Rahul
console.log(user2.name); // Rahul
 */
/* 
STRING example 


let name = "Vasu";
let city = 'Ahmedabad';
let msg = `Hello ${name}`;

1. Strings are immutable ⭐
You cannot change individual characters directly.

2. Three ways to create strings
"Hello"       // double quotes
'Hello'       // single quotes
`Hello`       // template literal

3. Important properties/methods

let s = "Hello World";

s.length          // 11
s.toUpperCase()   // "HELLO WORLD"
s.toLowerCase()   // "hello world"
s.includes("World") // true
s.charAt(0)       // "H"
s.slice(0, 5)     // "Hello"

4. String + String
"Hello" + " World"
// "Hello World"

C++ std::string → Mutable
JavaScript String → Immutable ⭐

JS String = immutable text + zero-based indexing + .length + powerful built-in methods.

in modern term use --> `` 
Template literals are especially useful:

let age = 20;

console.log(`I am ${age} years old`);
// here we can add variable so use in modern term 
 */
/* 
-------------------------------------------------------------------------------
| Method           | Example                                | Output          |
| ---------------- | -------------------------------------- | --------------- |
| `.length`        | `"Hello".length`                       | `5`             |
| `.toUpperCase()` | `"hello".toUpperCase()`                | `"HELLO"`       |
| `.toLowerCase()` | `"HELLO".toLowerCase()`                | `"hello"`       |
| `.charAt()`      | `"Hello".charAt(1)`                    | `"e"`           |
| `.includes()`    | `"Hello World".includes("World")`      | `true`          |
| `.startsWith()`  | `"Hello".startsWith("He")`             | `true`          |
| `.endsWith()`    | `"Hello".endsWith("lo")`               | `true`          |
| `.indexOf()`     | `"Hello".indexOf("l")`                 | `2`             |
| `.slice()`       | `"Hello".slice(1, 4)`                  | `"ell"`         |
| `.substring()`   | `"Hello".substring(1, 4)`              | `"ell"`         |
| `.replace()`     | `"Hello World".replace("World", "JS")` | `"Hello JS"`    |
| `.trim()`        | `"  Hello  ".trim()`                   | `"Hello"`       |
| `.split()`       | `"a,b,c".split(",")`                   | `["a","b","c"]` |
| `.concat()`      | `"Hello".concat(" World")`             | `"Hello World"` |
-------------------------------------------------------------------------------

*/
/* 
let a = 10;
let b = 10.5;

console.log(typeof a); // "number"
console.log(typeof b); // "number"
// 
Unlike C++, JavaScript doesn't normally have separate int, float, double, etc.

new is used to create an object from a constructor/function or class.

1. new Number(10)
let num = new Number(10);
console.log(num);
Output in some environments/devtools may look like:
[Number: 10]
But:
console.log(typeof num);
Output:
object
Because new Number(10) creates a Number object, not a primitive number
*/