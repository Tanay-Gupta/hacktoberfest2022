function callfunction(fun){
  fun();
}

function sayHi(){
  console.log('Hi');
}
sayHi();

var sayBye=function(){
  console.log('bye');
};
//sayBye();

callfunction(sayBye);
