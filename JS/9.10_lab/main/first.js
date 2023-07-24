
//first task
// IMG
let ball = document.getElementById('ball');
ball.onmousedown = function(e) {
  ball.style.position = 'absolute';
  moveAt(e);
  ball.style.zIndex = 1;
  function moveAt(e) {
    ball.style.left = e.pageX - ball.offsetWidth / 2 + 'px';
    ball.style.top = e.pageY - ball.offsetHeight / 2 + 'px';
  }
  document.onmousemove = function(e) {
    moveAt(e);
  }
  ball.onmouseup = function() {
    document.onmousemove = null;
    ball.onmouseup = null;
  }
}
ball.ondragstart = function() {
  return false;
}
//text
var text = document.getElementById('text');

text.onmousedown = function(e) {
  text.style.position = 'absolute';
  moveAt(e);
  text.style.zIndex = 1;
  function moveAt(e) {
    text.style.left = e.pageX - text.offsetWidth  / 2  +  'px';
    text.style.top = e.pageY - text.offsetHeight  / 2  + 'px';
  }
  document.onmousemove = function(e) {
    moveAt(e);
  }
  text.onmouseup = function() {
    document.onmousemove = null;
    text.onmouseup = null;
  }
}
text.ondragstart = function() {
  return false;
}

//fourths task
let radios = document.querySelectorAll('input[type="radio"]')
let value
function get_value_kurs(){
	for (let radio of radios) {
		if (radio.checked) {
      console.log(radio.value)
			return(radio.value)
		}
	}
}
function drawGraph() {

  let canvas = document.getElementById('charts');
  let ctx = canvas.getContext('2d');
  let xMin = -20;
  let xMax = 20;
  let yMin = -20;
  let yMax = 20;
  ctx.scale(canvas.width / (xMax - xMin), -canvas.height / (yMax - yMin)); // Масштабирование,
  //относительно заданых координат
  ctx.translate(-xMin, -yMax); // размещение
  let func = document.forms["graph"].function.value;
  ctx.strokeStyle = document.forms["graph"].color.value;
  ctx.lineWidth = 0.5; // ширина
  ctx.beginPath(); // начинаем функцию
  for (let x = xMin; x <= xMax; x += 0.01) {
      let y;
      switch (func) {
          case "x^2":
              y = x * x;
              break;
          case "x^3":
              y = x * x * x;
              break;
          case "sin(x)":
              y = Math.sin(x);
              break;
          case "cos(x)":
              y = Math.cos(x);
              break;
      }

      if (x == xMin) {
          ctx.moveTo(x, y); // движение точки в заданные коорды
      } else {
          ctx.lineTo(x, y); //добавление линии пути
      }
  }
  ctx.stroke(); // нарисовать сам путь заданым стилем
}

    




