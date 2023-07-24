
//first task

$(document).ready(function(){  
  $("#ball").draggable()
  $("#text").draggable()
})

//second task
$(document).ready(function(){
  $("#sun1").click(function(){
     $("#sun1").animate({left:1250},"slow");;
  });
});

//third task

let i=0;
let flag = true;
sun2.onclick = function move_left()
{
    setInterval(function first()
    {
        if(i<1700 && flag)
        {
            i+=5;
            $("#sun2").animate({left:i},0.1);
            $("#sun2").animate({top:100+50*Math.sin(0.03*i)},1);              
        }
        else if (i>0)
        {
            flag=false;
            i-=5;
            $("#sun2").animate({left:i},0.1);
            $("#sun2").animate({top:100+50*Math.sin(0.03*i)},1);   
        }
    }, 000);
    let i=0;
    let flag = true;
}

//fourth task

$(document).ready(function(){ 
  $("#draw").click(function drawGraph(){ 
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
})
})

//fifth task
$(document).ready(function(){ 
$("#nav").mouseover(function(event){
  //отслеживает нахождение мыши внутри блока
      let target = event.target;
  //отслеживаем клик
      if (target.className == 'menu-item') {
          let s = target.getElementsByClassName('submenu');
          closeMenu();
          s[0].style.display = 'block';
  //массив, содержащий ложное меню
      }
  })
})
$(document).ready(function(){ 
  $(document).mouseover(function(event){
      let target = event.target;
      console.log(event.target);
      if (target.className != 'menu-item' && target.className != 'submenu') {
          closeMenu();
      }
  })
})  
function closeMenu(){ 
  //получение всех элементов подменю в блоке nav, присваивание
      let subm = document.getElementsByClassName('submenu');
      subm.style = " display:none;";
  
      for (let i = 0; i < subm.length; i++) {
          subm[i].style.display = "none";
    }
  }
  $(document).ready(function(){
    $("#fun1").mouseover(function(){$("#fun1").css("color","white")});
    $("#fun1").mouseout(function(){$("#fun1").css("color","black")});
})
  
