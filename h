<!DOCTYPE html>
<html>
<head>
  <title>For You</title>
  <link href="https://fonts.cdnfonts.com/css/goldie-boxing" rel="stylesheet"> 
  <link href="https://fonts.cdnfonts.com/css/concretewall" rel="stylesheet">
  <style>
    body {
      text-align: center;
      font-family: 'Goldie Boxing', sans-serif;
	  color: white;
	  font-size: 50px;
      margin-top: 70px;
	  background: linear-gradient(45deg, #ffbf00, #ff0080, #8000ff);
      background-size: 600% 600%;
      animation: gradientAnimation 10s ease infinite;
    }
    
    button {
      padding: 10px 20px;
	  font-family: 'ConcreteWall', sans-serif;
      font-size: 20px;
      background-color: yellow;
      color: black;
      border: none;
      cursor: pointer;
      border-radius: 5px;
    }
    
    #compliment {
      margin-top: 50px;
      font-size: 40px;
    }
	
	@keyframes gradientAnimation {
      0% {
        background-position: 0% 50%;
      }
      50% {
        background-position: 100% 50%;
      }
      100% {
        background-position: 0% 50%;
      }
    }
  </style>
</head>
<body>
  <h1>Helloooooooo</h1>
  
  <button onclick="generateCompliment()">Click Here!</button>
  
  <div id="compliment"></div>
  
  <script>
    var compliments = [
      "You are cute!",
      "Have a good day tomorrow, takecare!",
      "Smileeee <3",
      "Don't forget to eat >.<",
    ];
    
    function generateCompliment() {
      var randomIndex = Math.floor(Math.random() * compliments.length);
      var randomCompliment = compliments[randomIndex];
      document.getElementById("compliment").innerText = randomCompliment;
    }
  </script>
</body>
</html>
