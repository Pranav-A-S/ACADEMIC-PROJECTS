function validateForm()
{
         console.log("validate");    
    var fn=document.getElementById("fname").value;
    var mno=document.getElementById("mno").value;
    var addr=document.getElementById("adr").value;
    var town=document.getElementById("town").value;
    var city=document.getElementById("city").value;
    var state=document.getElementById("state").value;
    var pin=document.getElementById("pincode").value;
    var cname=document.getElementById("cname").value;
    var cnum=document.getElementById("ccnum").value;
    var month=document.getElementById("expmonth").value;
    var yr=document.getElementById("expyear").value;
    var cvv=document.getElementById("cvv").value;
 
 if (fn==""){ 
     alert("Please enter your full name");
     return false;
 }
 if (fn.length<"4"){   
    alert("Username can't be less than 4 letters!")
    return false;
} 
 if (mno.length!="10"){
    alert("Mobile number is invalid");
    return false;
 }
if (addr==""){ 
    alert("Please enter your address for the payment");
    return false;
}
if (town==""){ 
    alert("Please enter your town in which you are residing");
    return false;
}
if (city==""){ 
    alert("Please enter your city");
    return false;
}
if (state==""){ 
    alert("Enter your State");
    return false;
}
if (pin.length!="6"){ 
    alert("Please enter the pincode");
    return false;
}
if (cname==""){ 
    alert("Please enter your card name");
    return false;
}
if (cnum!="16"){ 
    alert("Please enter your card number");
    return false;
}
if (month==""){ 
    alert("Please enter your expiry month");
    return false;
}
if (yr==""){ 
    alert("Please enter your expiry year");
    return false;
}
if (cvv!="3"){ 
    alert("Please enter the cvv");
    return false;
}
}



