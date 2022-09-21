function validateForm()
{
    console.log("validate");
 var un=document.getElementById("username").value;         
 var pw=document.getElementById("password").value;
 var cpw=document.getElementById("confirmpw").value;
 if (un==""){   
     alert("Username can't be blank")
     return false;
 }
 if (un.length>"15"){   
     alert("Username can't be more than 15 letters")
     return false;
 } 
 if (un.length<"4"){   
    alert("Username can't be less than 4 letters!")
    return false;
} 
 if(pw=="")
 {
     alert("Enter your password")
     return false;
 }               
 if (pw.length<"6"){         
     alert("Your password is invalid")
     return false;
 }
 else if(pw.search(/[A-Z]/)==-1){
     alert("Password should contain atleast one uppercase alphabet")
 }
 
 else if(pw.search(/[0-9]/)==-1){
     alert("Password should contain atleast a number")
 }
 else if (cpw.length<"6"){         
     alert("Please confirm your password")
     return false;
 } 
 else if(password.value!=confirmpw.value){
     alert("The passwords doesn't match")
 } 
 else if(password.value==confirmpw.value){ 
 let r = confirm("Account has been created successfully, Click ok to go home");
    if(r == true){ console.log("true"); window.location.href = './homepage.html'; }
 }                                 
}