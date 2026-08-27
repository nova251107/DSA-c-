/* 
word vs keyword 
word has no meaning in js 
keyword is meaning in js 
 */

//javascript interprited not complier 
// chacha ==> word not read by interpreted 
// for ==> meaning in java yes ==> keyword 

// VARIABLES AND CONSTANT 
// var can change value 
// constant cant change value 
// let can change value ==> mordern js choise 
// var same as let but older version coz they have limitation of gloabal and local variable 

//hoisting 
/* 
we can access var before we declare 
their declaration top of the move 
console.log(a);
var a = 15 ;

its return 15 in output 
*/
// function and varibale are hoisting 

// ** hasting and hoisting are diffrent **
/* console.log(a);
var a = 15 ; */
/*  var a= 15 ==> var a ; /n and a = 15 ;
var a goes move  */
// no errror 
//undefine output
/* 
var a; move top of 
a= 15; initilization stay here 
thats why it tells undefined 
 */
// diffrence between undefine and not-define 
/* 
---------------------------------------------------------------
undifine :- things exists but not assign any values ;- no error 
not-define :- things not exists in that code so give erroe 
*/

// primitives :- num, string , null , undefine 
// reference :- [],(),{}
//              object , function and array 

// diffrence between primitives and reffrence 
/* 
in primitives :- when we copy then does't effect on origional value 
let a = 10;
let b = a;

b = 20;

console.log(a); // 10
console.log(b); // 20
---------------------------------------------------------------------
in reference :- when we copy them its change in origional value in both 
let arr1 = [10, 20, 30];
let arr2 = arr1;

arr2[0] = 100;

console.log(arr1); // [100, 20, 30]
console.log(arr2); // [100, 20, 30]
---------------------------------------------------------
 */

//conditionals
/* 
------------------------
let age = 16;

if (age >= 18) {
    console.log("Adult");
} else {
    console.log("Minor");
}
----------------------------
 */
/* 
let marks = 75;

if (marks >= 90) {
    console.log("A+");
} else if (marks >= 80) {
    console.log("A");
} else if (marks >= 60) {
    console.log("B");
} else {
    console.log("C");
}
 */
// switch case in js
/* 
let day = 2;

switch (day) {
    case 1:
        console.log("Monday");
        break;

    case 2:
        console.log("Tuesday");
        break;

    case 3:
        console.log("Wednesday");
        break;

    default:
        console.log("Invalid day");
}

*/

/* 
**for loop** 
for (let i = 0; i < 5; i++) {
    console.log(i);
}

**while loop**
let i = 1;

while (i <= 5) {
    console.log(i);
    i++;
}
** do while **
let i = 1;

do {
    console.log(i);
    i++;
} while (i <= 5);

just like vector use for auto same here 
==> for array 
----------------------------------
let arr = [10, 20, 30];

for (let value of arr) {
    console.log(value);
}
------------------------------------------------
==>Usually used for object properties.
let user = {
    name: "Vasu",
    age: 20
};

for (let key in user) {
    console.log(key, user[key]);
}
------------------------------

 */
// FUNCTION
/* 
function greet() {
    console.log("Hello");
}

greet();
 */
// loop , condition and function same as cpp
// most imp things in javascript 
//**A function can also be stored inside a variable.**
// we can store function in the constant variable 
/* 
const add = function(a, b) {
    return a + b;
};

console.log(add(10, 20));

*/
//The variables written when defining the function are parameters.
//The actual values passed when calling the function are arguments.
/* 
function add(a, b) {
    return a + b;
}
add(10, 20);
    // here a and b are parameters 
    // 10,20 are arguments 
 */
/* 
array are same as cpp
let numbers = [10, 20, 30];

numbers[1] = 100;

console.log(numbers); 
*/
/* 
Method	Purpose
push()	Add at end
pop()	Remove from end
unshift()	Add at beginning
shift()	Remove from beginning
forEach()	Iterate
map()	Transform
filter()	Select elements
find()	Find first matching element
includes()	Check existence
indexOf()	Find index
slice()	Extract without modifying
splice()	Add/remove while modifying
 */
/* 
----------------------------------------------------
--------------------------------------------------
slice()

Creates a portion of an array without modifying the original.

let arr = [10, 20, 30, 40, 50];

let result = arr.slice(1, 4);

console.log(result);
[20, 30, 40]

Original remains:

[10, 20, 30, 40, 50]
---------------------------------------------------
splice in array 
Modifies the original array.
let arr = [10, 20, 30, 40, 50];

arr.splice(1, 2);

console.log(arr);

output is :- [10, 40, 50]
-------------------------------------------------
---------------------------------------------------
*/
/* object just like dictionary in python 
JavaScript Objects — Basic Theory

An object is a collection of data stored as key-value pairs.

Think of it as describing one real-world entity.

const student = {
    name: "Vasu",
    age: 20,
    branch: "ICT"
};

 */

/* 
 old javascript only have :- VAR 
var  hase function scope , dont use agian in any other function so bounded by scope 
var function use in any parants function 
var adds itself to windows object 
-------------------------------------------------------------------------------
 new javascript only have :- LET and const +var 
 new js solve this limitiation scope use braces 
 conts does't add windows object
 */
// Js dont have many feature which dont have in js but we will use that by browser 
// but we can find him in perticular object its call windows 

/* When JavaScript runs inside a browser, the browser provides a special global object called window.
window represents the browser window/tab in which your JavaScript is running. 
In a normal browser script, many global variables/functions are accessible through window.
One of the most important properties is:

window.document

document represents the HTML page (DOM).
window
  │
  └── document
        │
        ├── html
        ├── head
        └── body

This is how JavaScript interacts with HTML.
4. window vs document

Very important:

window → browser environment
document → current HTML page */
// for example **elert** **console** its not part in js 


/* Browser Context API

In JavaScript, Browser Context API generally refers to the browser-provided environment 
and APIs that JavaScript can use when running inside a browser
JavaScript
    ↓
Browser Environment
    ↓
Browser APIs
    ├── DOM
    ├── BOM / window
    ├── Events
    ├── Timers
    ├── Fetch
    ├── Storage
    └── Geolocation
JavaScript language itself

These are provided by the JavaScript language:

let
const
if
for
function
Array
Object
Promise
Map
Set

Browser provides additional APIs

For example:

document
window
fetch()
localStorage
setTimeout()
navigator
location

These are not the core JavaScript language. The browser provides them

2. window

The browser creates a global environment represented by window.
3. DOM API

DOM = Document Object Model

It allows JavaScript to interact with HTML.

HTML:

<h1 id="title">Hello</h1>

JavaScript:

const title = document.getElementById("title");

title.textContent = "Hello JavaScript";

So:

HTML
 ↓
DOM
 ↓
JavaScript can modify it
4. Events API

The browser can detect things like:

click
keyboard input
mouse movement
form submission
page loading

Example:

const button = document.querySelector("button");

button.addEventListener("click", () => {
    console.log("Clicked!");
});

9. Why This Concept Matters

This explains an important difference:

             JavaScript
                 │
        ┌────────┴────────┐
        ↓                 ↓
    Language           Runtime
   features            environment
        │                 │
   let, array,       Browser APIs
   function,          Node APIs
   object, etc.       etc.

   Browser
JavaScript
    +
Browser APIs
    ↓
Frontend

-------------------------
Node.js
JavaScript
    +
Node.js APIs
    ↓
Backend

-------------------------------
Stack → keeps track of variables/references and function calls.
Heap → stores objects, arrays, functions, etc.
Garbage Collector → automatically removes objects that are no longer reachable.


Heap Memory in JavaScript
Heap memory is the area where JavaScript stores objects and dynamically allocated data.

Example:

const user = {
    name: "Vasu",
    age: 20
};
 */

/* 
Lexical Environment

A Lexical Environment is the environment JavaScript creates to keep track of:

Variables/functions
Where those variables can be accessed (scope)
The connection to the outer/parent environment

Think of it as a scope box.
A lexical environment is the internal structure JavaScript uses to store variables/functions
 and maintain their connection to the outer scope.

Conceptually:

Global Lexical Environment
│
│ x = 10
│
└── outer Lexical Environment
     │
     │ y = 20
     │
     └── inner Lexical Environment
          │
          │ z = 30
          │
          └── outer → outer → global

When inner() looks for x:

inner scope
   ↓ not found
outer scope
   ↓ not found
global scope
   ↓ found x

This is the scope chain.
Lexical Environment → manages variables and scope.
Execution Context → the complete environment in which code executes.

Execution Context → "Where/how is this code running?"
Lexical Environment → "Where are the variables and scopes?"
Call Stack → "Which context/function is currently running?"

JavaScript starts
      ↓
Global Execution Context
      ↓
Call Stack
      ↓
function called
      ↓
Function Execution Context
      ↓
Call Stack
      ↓
function finishes
      ↓
Context removed

in execucation function :- this create whole imaginary func 
who have :- 1) var 2)func in parants func 3) lexical env 

**Lexical Environment decides variable accessibility through the scope chain.**
let a = 10;

function outer() {
    let b = 20;

    function inner() {
        let c = 30;

        console.log(a); // ✅
        console.log(b); // ✅
        console.log(c); // ✅
    }

    inner();
}

but 
function outer() {
    function inner() {
        let c = 30;
    }

    console.log(c); // ❌
}

outer cannot access variables inside inner.
---------------------------------------------------
global var c (fun var a  (inside fun var b ) )
outer func and inner func can acess :- c coz its gloabl var 
inner and outer func can acess a 
but 
innner func can acess b but outer func cant 
because b is scope of innner func 
so lexical env dont allow that (roughly right not truly)
The lexical environment of inner has an outer reference to outer,
 but outer does not have a reference to inner.

*/

/* 
How to copy a reference value?

First, remember the problem:

let user1 = {
    name: "Vasu"
};

let user2 = user1;

Here, user2 does not get a new object.

Both variables point to the same object in heap memory.

user1 ──┐
        ├──> { name: "Vasu" }
user2 ──┘

---------------------------------------------------------------
1. Shallow copy

Creates a new object, but nested objects can still be shared.

Common ways:

let copy = { ...original };
--------------------------------------------------------------------
2. Deep copy

If the object contains nested objects, shallow copy isn't enough.
--------------------------------------------------------------
"..." in JavaScript is called the spread operator when you're using it to copy/expand values
let user1 = {
    name: "Vasu",
    age: 22
};

let user2 = { ...user1 };
so :- think of { ...user1 }as:
"Take all the properties from user1 and put them into this new object."
**IMP**
Important

It creates a new object:

user1 === user2   // false

But:

let user2 = user1;// true 
-------------------------------
For arrays

Same idea:

let arr1 = [10, 20, 30];

let arr2 = [...arr1];

 */

/* 
Truthy vs Falsy in JavaScript

JavaScript sometimes converts a value into true or false when it is used in a condition.

Falsy values

These values are treated as false:

false
0
-0
0n
""
null
undefined
NaN

Truthy values

Everything else is generally truthy.

Examples:

1
-1
"hello"
"0"
"false"
[]
{}
function() {}

********************************************
⚠️ Common beginner mistakes
Empty string vs " ":
""      // falsy
" "     // truthy

Because " " contains a space, so it is not empty.

0 vs "0":
0       // falsy
"0"     // truthy

Empty array and object

This surprises beginners:

[]      // truthy
{}      // truthy

Even though they look "empty".



*************************************************

 */
/* 
forEach() is used to run a function for every element of an array.

Syntax
array.forEach(function(element) {
    // code
});
With arrow function

Most commonly:

numbers.forEach((num) => {
    console.log(num);
});
With index
numbers.forEach((num, index) => {
    console.log(index, num);
});

Remember
forEach() → works mainly with arrays
Runs once for each element
Gives you element, index, and optionally the array
It doesn't return a new array like map() does
You generally cannot use break or continue inside forEach()
Mental model:
forEach = "Do this for every element."
----------------------------------------------
 */

/* 
1. for...in loop

Used to iterate over the keys/properties of an object.

let user = {
    name: "Vasu",
    age: 22
};

for (let key in user) {
    console.log(key, user[key]);
}

Output:

name Vasu
age 22
---------------------------------------------------
. do...while loop

Similar to while, but it runs at least once.

let i = 10;

do {
    console.log(i);
    i++;
} while (i < 5);

Output:

10
---------------------------------------------------
Difference
while(condition) {
    // may execute 0 times
}
do {
    // executes at least 1 time
} while(condition);
 ---------------------------------------
 3. Callback function

A callback is a function passed to another function so that it can be called later.

function greet(name, callback) {
    console.log("Hello " + name);
    callback();
}

function done() {
    console.log("Done!");
}

greet("Vasu", done);

Output:

Hello Vasu
Done!

Here:

done → callback
greet → receives callback
----------------------------------------
4. How is an array made behind the scenes?

When you write:

let arr = [10, 20, 30];

JavaScript creates an Array object.

Conceptually:

arr
 ↓
Array object
 ├── 0 → 10
 ├── 1 → 20
 ├── 2 → 30
 └── length → 3

Arrays use numeric indexes starting from 0:
typeof [10, 20, 30]

gives:

object

You don't need to think of JavaScript arrays as exactly the same as a C++ array internally. 
JavaScript engines optimize arrays using different internal representations depending on how they're used.

---------------------------------------------
5. How to delete an object property?

Use the delete operator.

let user = {
    name: "Vasu",
    age: 22
};
delete user.age;
console.log(user);

removes the property completely.
But:
user.age = undefined;
does not remove the property.

delete              → property removed
= undefined         → property still exists
---------------------------------------------------
Quick revision
Concept	Main purpose
for...in	Iterate object keys
do...while	Execute at least once
Callback	Function passed to another function
Array	Indexed collection/object
delete obj.x	Remove object property
----------------------------------------------------
 */
/* 
--------------------------------------------------------------------------------------------

-------------------------------------------------------------------------------------------- */