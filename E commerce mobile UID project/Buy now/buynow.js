function validateForm()
{
        var firstName=document.getElementById("firstName");
        var mn=document.getElementById("mno");
        var email=document.getElementById("email");
        var rad=document.getElementById("radd");
        var state=document.getElementById("state");
        var postcode=document.getElementById("postcode");
        var paymentType=document.getElementById("paymentType");
        var exMonth=document.getElementById("exMonth").value;
        var exYear=document.getElementById("exYear").value;
        var cardNumber=document.getElementById("cardNumber");
        var date = new Date ();
        var month = date.getMonth();
        var year = date.getFullYear();

            if (firstName.value===""){
                        alert("Please enter your full name");
                        firstName.focus();
                        return false;
            }
            if (mn.value===""){
                        alert("Please enter your mobile number");
                        mn.focus();
                        return false;
            }
            if (mn.value.length !=10 ){
                alert("Mobile number is invalid");
                mn.focus();
                return false;
             }
            
            if (email.value.indexOf(".") == -1 || email.value.indexOf("@")== -1) {
                        alert("Please include a valid email address");
                        email.focus();
                        return false;
            }
            if (rad.value===""){
                alert("Please enter your residential address");
                firstName.focus();
                return false;
            }
            if (state.value===""){
                alert("Please enter your state");
                firstName.focus();
                return false;
            }   
            if (postcode.value.length!=6  || isNaN(postcode.value)){
                alert("Please enter 6 numbers for your pincode");
                postcode.focus();
                return false;
            }

            if (paymentType.selectedIndex === 0){
                alert("Please select payment type");
                return false;
            }
            if (exMonth.selectedIndex === 0){
                alert("Please select the month");
                return false;
            }
            if (exYear.selectedIndex === 0){
                alert("Please select the year");
                return false;
            }
            if (year> exYear || (year === exYear && month >= exMonth)){
                alert("The expiry date is before today's date. Please select a valid expiry date");
                return false;
            }
            // console.log(cardNumber.value);
            // console.log(cardNumber.value.length);
            if (cardNumber.value.length != 16 ){
                alert("Please enter 16 numbers for your credit card");
                cardNumber.focus();
                return false;
            }

            alert("Thank you for your submission");
            setTimeout(()=>{window.location.href="checkout.html";}, 10)
            return true;
}