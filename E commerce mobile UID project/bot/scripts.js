var trigger = [
	["hi","hey","hello"], 
	["how are you", "how is life", "how are things"],
	["what are you doing", "what is going on"],
	["how old are you"],
	["who are you", "are you human", "are you bot", "are you human or bot"],
	["who created you", "who made you"],
	["your name please",  "your name", "may i know your name", "what is your name"],
	["i love you"],
	["happy", "good"],
	["bad", "bored", "tired"],
	["help me", "tell me story", "tell me joke"],
	["ah", "yes", "ok", "okay", "nice", "thanks", "thank you"],
	["bye", "good bye", "goodbye", "see you later"]
];
var reply = [
	["Hi","Hey","Hello"], 
	["Fine", "Pretty well", "Fantastic"],
	["Nothing much", "About to go to sleep", "Can you guest?", "I don't know actually"],
	["I am 1 day old"],
	["I am just a bot", "I am a bot. What are you?"],
	["The Bois created me", "My God"],
	["Saira", "My name is Saira"],
	["I love you too", "Me too"],
	["Have you ever felt bad?", "Glad to hear it"],
	["Why?", "Why? You shouldn't!", "Try watching TV"],
	["I will", "What about?"],
	["Tell me a story", "Tell me a joke", "Tell me about yourself", "You are welcome"],
	["Bye", "Goodbye", "See you later"]
];
var alternative = ["Haha...", "Eh..."]; // Incase we enter something else
document.querySelector("#input").addEventListener("keypress", function(e)
{ // catching enter key
	var key = e.which ;
	if(key === 13)
    { //Enter button
		var input = document.getElementById("input").value;
		document.getElementById("user").innerHTML = input;// taging input word
		output(input);
	}
});
function output(input)
{
	try //error catch
    {
		var product = input + "=" + eval(input);
	} catch(e)
    {
		var text = (input.toLowerCase()).replace(/[^\w\s\d]/gi, ""); //remove all chars except words, space and 
		text = text.replace(/ a /g, " ").replace(/i feel /g, "").replace(/whats/g, "what is").replace(/please /g, "");
		if(compare(trigger, reply, text))//matching responses
        {
			var product = compare(trigger, reply, text);
		} else 
        {
			var product = alternative[Math.floor(Math.random()*alternative.length)];//randomizing replies
		}
	}
	document.getElementById("chatbot").innerHTML = product;
	speak(product);
	document.getElementById("input").value = ""; //clear input value
}
function compare(arr, array, string)// comparing input with output for a response
{
	var item;
	for(var x=0; x<arr.length; x++)
    {
		for(var y=0; y<array.length; y++)
        {
			if(arr[x][y] == string)// taging that row of responses
            {
				items = array[x];
				item =  items[Math.floor(Math.random()*items.length)];// picking a random ans from that row
			}
		}
	}
	return item;
}
function speak(string)// speach API
{
	var utterance = new SpeechSynthesisUtterance();
	utterance.voice = speechSynthesis.getVoices().filter(function(voice){return voice.name == "Saira";})[0];
	utterance.text = string;
	utterance.lang = "en-US";
	utterance.volume = 1; //0-1 interval
	utterance.rate = 2;
	utterance.pitch = 1; //0-2 interval
	speechSynthesis.speak(utterance);
}