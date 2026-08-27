/* 
What is a Server?

A server is a computer/program that provides something to other computers or programs over a network.

Think of it like this:

Client → Request → Server → Response → Client

Simple example: You open YouTube
You open youtube.com in your browser.

Your browser (client) sends a request:

"Give me the YouTube homepage."

A server receives the request.
The server processes it and gets the required data.
Server sends a response back.
Your browser displays the webpage. 

Browser
   ↓
GET /users
   ↓
Node.js + Express Server
   ↓
Database
   ↓
Server
   ↓
JSON response
   ↓
Browser

The server can:

receive HTTP requests
run business logic
communicate with databases
authenticate users
return HTML/JSON/data
handle APIs

------------------------------------------------------------------------
server is machine who have own operating system , own processor and RAM 

*/
//---------------------------------------------------------------------------------------------------
/*
Package — in short
A package is a ready-made collection of code that you can install 
and use in your project instead of writing everything yourself. 
write by other dev and we still can use it 
 */
/* var catMe = require('cat-me');
console.log(catMe()) */
//--------------------------------------------------------------------------------------------------------
/* 
.json — in short

JSON = JavaScript Object Notation

It is a text format used to store and exchange data.
**************************************************
node_modules — in simple terms

node_modules is the folder where npm stores the packages your Node.js project needs.

For example:

my-project/
│
├── package.json
├── package-lock.json
└── node_modules/
    ├── express/
    ├── cors/
    └── ...
*****************************************************
Important distinction
package.json → tells npm what packages the project needs
package-lock.json → records the exact dependency versions
node_modules → actually contains the installed package code
**************************************************************

package.json file maintain that 
what you write code is how many packege need ? 
-----------------------------------------------------------------------------------------------------------------------------------

Your Project
│
└── express
    │
    ├── package A
    │   └── package C
    │
    └── package B
        └── package D

Your project directly depends on Express, but Express itself depends on other packages.

So:

Your project → Express → Package A → Package C

These are called dependencies of dependencies (transitive dependencies).

That's one major reason node_modules can contain hundreds or thousands of folders even when you installed only a few packages.
------------------------------------------------------------------------------------------------------------------------------------- 
package-lock.json records this exact dependency tree and versions.

So:

package.json
     ↓
"What packages do I need?"
     
package-lock.json
     ↓
"Exactly which versions/dependency tree?"
     
node_modules
     ↓
"Actually installed code"

 */

/* 
What is Express?

Express is a Node.js framework used to build web servers and APIs more easily.

Without Express, Node.js provides lower-level tools:
--------------------------------------------------------
how to create server ?
using 
npm init -y :-initilisation node js application 
npm i express :- install express server 
------------------------------------------------------------------
const express = require('express');     //require package 
const app = express();                  // create a server instance 
app.get("/",(req,res) =>{              //When someone visits / using GET, send "hello world".
    res.send("hello world")
})
app.get("/about",(req,res) =>{         //When someone visits /about, send "about page".
    res.send("about page")
})
app.listen(3001);          //Start the server on port 3001.
-------------------------------------------------------------------------------------
localhost:3001/        → hello world
localhost:3001/about   → about page              
--------------------------------------------------------
1. What is a Port Number?

A port number is like a door number on a computer that helps identify which application should receive network traffic.

Your computer can run many servers at the same time:

Computer
│
├── Port 3000 → Node.js app
├── Port 3001 → Another Node.js app
├── Port 5000 → Python app
└── Port 5432 → PostgreSQL
app.listen(3001);

you're saying:

"Express, listen for requests coming to port 3001."

Then you access it through:

http://localhost:3001

Crux:

Port = a numbered communication endpoint for an application.
----------------------------------------------------------------------------
2. What is an Instance?

An instance is an actual object created from something (usually a class/function) that has its own data and behavior.

For example:
const app = express();
express is a function, and:
express()
creates an Express application instance.
You store that instance in:
app
So:
express()
     ↓
Express application instance
     ↓
app

That's why you can do:

app.get(...)
app.post(...)
app.listen(...)

The app object contains the Express application's functionality.
**Instance = a specific object created from a class/constructor/function.**
-------------------------------------------------------------------------------------
What is an API?

API = Application Programming Interface

In backend development, an API is a way for one program to communicate with another program/server.

Think of it as a messenger/contract between the client and server.

Frontend / Browser
       ↓
   API Request
       ↓
Backend / Server
       ↓
   API Response
       ↓
Frontend / Browser

------------------------------------------------------------------------------
  */

//=======================================================================================================================

 /* 
 app.get("/", (req, res) => {
    res.send("Hello");
});

here ,
req = Request

Contains information coming from the client.

Examples:

req.params
req.query
req.body
req.headers
res = Response

Used by the server to send something back to the client.

Examples:

res.send("Hello")
res.json(data)
res.status(200)
--------------------------------------------------------------------------------
Flow:-
Browser
   ↓
  req
   ↓
Server
   ↓
  res
   ↓
Browser

Crux:

req = what the client asks/sends
res = what the server sends back
--------------------------------------------------------------------------------------
API
├── REST API
├── GraphQL API
├── SOAP API
└── WebSocket API
API :- set of rule or protocol to communicate two softwear programm to exchange data and functinallity with each other 

REST api is type of api :- 
GET    /users       → get users
GET    /users/10    → get user 10
POST   /users       → create user
PUT    /users/10    → update user 10
DELETE /users/10    → delete user 10

for example :- 

API = vehicle
REST API = a particular type/design of vehicle

So when you build a backend with Node.js + Express, you'll commonly build REST APIs.

Yes. HTTP is the communication protocol commonly used by REST APIs.

But keep the distinction clear:

REST API
   ↓
Uses HTTP
   ↓
Request → Response
---------------------------------------------------------------
Server A
   ↓
HTTP GET /users
   ↓
Server B
   ↓
HTTP Response (JSON)
   ↓
Server A
--------------------------------------------------------------------
Important
API → interface/rules for communication
REST → architectural style for designing the API
HTTP → protocol used to send the request/response
JSON → common format for the data
--------------------------------------------------------
| Method     | Purpose               | Example           |
| ---------- | --------------------- | ----------------- |
| **GET**    | Read data             | `GET /users`      |
| **POST**   | Create data           | `POST /users`     |
| **PUT**    | Replace/update data   | `PUT /users/5`    |
| **PATCH**  | Partially update data | `PATCH /users/5`  |
| **DELETE** | Delete data           | `DELETE /users/5` |

-------------------------------------------------------------------------
Other important REST concepts
HTTP methods → what operation you want
URL/Endpoint → which resource you want
Request → data sent to server
Response → data returned by server
HTTP status codes → result of the request (200, 201, 404, 500, etc.)
JSON → common data format
Statelessness → each request should contain the information needed to process it
---------------------------------------------------------------------------------
GET   ==> when we fetch data from server
POST  ==> when we want to send data to server 
PATCH ==> when we want to update the data  
DALETE==> when we want to delete data from the server  

  */
 /* 
 how to create a folder structure in backend 

Beginner structure
backend/
│
├── src/
│   └── server.js // file role is create a server 
│
├── package.json
└── package-lock.json

  */
 /* 
 // create a api for perfomrt task 
const notes=[]          // create a array for 4 notes 

//user give title and description 
app.post("/notes",(req,res)=>
   {
   console.log(req.body)
   }
) 
// ==> create a api (post method) front end send data to server thats why post api created 
Postman is a tool used to test APIs.

When you create a backend API, you need something that can act like the frontend/client and send requests to your server. Postman does that.
Postman = a tool that lets you manually send HTTP requests to your backend and see the responses.

in postman send req to front end :- in vs code terminal say :- undefined 
we need to use one middlewear

Middleware in Express

Middleware = a function that runs between the incoming request and your final response.
Client
  ↓
Request
  ↓
Middleware
  ↓
Route / API
  ↓
Response
  ↓
Client

      app.use(express.json()); ==>is middleware.
It processes the request before your app.post() handler runs.

Postman
   │
   │ JSON data
   ↓
┌─────────────────────┐
│ express.json()      │  ← Middleware
│ "I'll read the JSON"│
└─────────────────────┘
   │
   ↓
POST /notes
   │
   ↓
req.body


why middlewear :- Express doesn't automatically understand incoming JSON data in the request body.

So we add:

app.use(express.json());

This is middleware.

  */
/* 
| Code    | Meaning               | When used                             |
| ------- | --------------------- | ------------------------------------- |
| **200** | OK                    | Request succeeded                     |
| **201** | Created               | New resource successfully created     |
| **400** | Bad Request           | Client sent invalid data              |
| **401** | Unauthorized          | Authentication is required/failed     |
| **403** | Forbidden             | User is authenticated but not allowed |
| **404** | Not Found             | Resource/route doesn't exist          |
| **409** | Conflict              | Request conflicts with existing data  |
| **500** | Internal Server Error | Something went wrong on the server    |

*/
/*
app.post() → create a handler for POST requests
"/notes" → URL endpoint
req → contains information coming from the client
res → used to send information back to the client
--------------------------------------------------
notes.push(req.body);

adds that object into:

const notes = [];
push() = add the received note to your array.
---------------------------------------------------
res.status(201).json({});

This does two things:

status(201)
    ↓
"Note was successfully created"

json({})
    ↓
Send an empty JSON object as the response
-----------------------------------------------------
 */
//==> restart js instance 
//==> npx nodemon server.js

/* 
// delete data from the server using array index
app.delete("/notes/:index",(req,res)=>
{
    const index = req.params.index
    delete notes[index]
    res.status(200).json(
        {
            massgae:"notes delete sucessfully"
        }
    )
})
    this DELETE methos delete notes from the server 
    
':'     for saying express that after any thing is dynamic 
to want index num we can use :- req.params.index  (params:- parameters )
that req.params.index  is save in const variable index 

after that index :- delete notes[index] ==> delete that perticular index from array and turn into null 
this is how delete api works 
===========================================================================================================
===========================================================================================================
*/
// task today:- 2-3 times 
/* 
first create folder src and file app.js 
after create root file :- server.js 


in app.js :- ==> create a server and export that server to app 
in server.js ==> require that server from src file and app.js 
             ==> and show port 3002 that server is running on 3002 

now task is create a 4 method repeatating 6-7 times using postman 

in post man :- post api give data to server (front end to server )
express cant read req.body direct 
so we add middlewear :- app.use(express.json()); 

// this middle wear give acess to express to read req.body data from the server 

in app.js ==> post method ==> push object to empty array **notes.push(req.body)**  
            ==> after push ==> show 200 port for OK signal and send  a massage ==>"notes created sucessfully "
select raw and write a object 
 {
    "title":"test_title_4",
    "description":"test_description_4"
}
    after use get method 
        res.status(200).json({
        massgae:"notes fatched sucessfully",
        notes: notes
        ==> show response to the server that noted fatched sucessfully on port 200 

    after use delete method
             res.status(200).json({
        massgae:"notes fatched sucessfully",
        notes: notes
        ==> show response to the server that noted delete sucessfully on port 200 

    4-5 times practice 
 */

/* 
in our pc when server start :- its provide RAM (randome acess memory )
we did our work and stop server 
when we stopeed server then we loose our data from ram 
we start server then pc provide new RAM 

so data loss happend 

that why we need one things who stores data when server are store 
thats whay we use data base 
     */