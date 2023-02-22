Q1. 
function test () {
a= 5;
var a = 0;
console.log(a);
}
// 0


Q2. function test () {
a= 5;
let a = 0;
console.log(a);
}
// Uncaught ReferenceError: Cannot access 'a' before initialization


Q3. var a = 5;
a = 9;
console.log(a); 
// 9


Q4. const a = 5;
a = 9; 
console.log(a); 
// Uncaught TypeError: Assignment to constant variable


Q5. let a = {key: 1, value: 12};
a.value = 123; 
console.log(a); 
// { key:1, value:123 }


Q6. const a = {key: 1, value: 12};
a.key = 123;
console.log(a) 
// { key:123, value:12 }


Q7. console.log(‘start’);
for(let i=0; i< 10; i++){
	setTimeout(()=>console.log(i), 0);
}
console.log(‘end’);
// start 
// end 
// 0,1,2,3,4,5,6,7,8,9


Q8. console.log(‘start’);
for(const i=0; i< 10; i++){
	setTimeout(()=>console.log(i), 0);
}
console.log(‘end’);
// start
// Uncaught TypeError: Assignment to constant variable.
// 0


Q9. console.log(‘start’);
for(var i=0; i< 10; i++){
	setTimeout(()=>console.log(i),0);
}
console.log(‘end’);
// start
// end
// 10, 10, 10, 10, 10, 10, 10, 10, 10, 10



