


function validate_name()
{  
  var regex =/[A-Z]{1,2}\s[a-zA-Z]+/;
  var usrval=document.getElementById("name").value;
  var usrlen=Number(usrval.length);
  if(usrlen==0)
  {
    document.getElementById("part_empty_msg").style.display = "block";
    return false;
  }
  else if((usrlen>0) && (regex.test(usrval)==false))
  {
    document.getElementById("part_msg").style.display = "block";
    return false;
  }
  document.getElementById("part_msg").style.display = "none";
  return true;
}  





function validate_mail()
{

  //if (!(/^[a-zA-Z0-9._-]+@[a-zA-Z0-9]+(?:\.[a-zA-Z0-9]+)+$/.test(document.form1.EMail.value)))

  
      var mailval=document.getElementById("email").value;
      var maillen=Number(mailval.length);
      if(maillen==0)
      {
        document.getElementById("email_msg").style.display = "block";
        return false;
      }
      else
      {
        document.getElementById("email_msg").style.display= "none";
        document.getElementById("dob").focus();
        return true;
      }
}



  
function validate_add()
{
    var addval=document.getElementById("add").value;
    var addlen=Number(addval.length);
    if(addlen==0)
    {
        document.getElementById("add_msg").style.display = "block";
        return false;
    }
    else
    {
        document.getElementById("add_msg").style.display= "none";
        
        return true;
    }
}
$(document).ready ( function () {
  $("#a").click(function () {
     alert("test");
  });
});
