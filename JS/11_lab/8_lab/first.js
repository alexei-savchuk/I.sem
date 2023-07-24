//first task

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

//fourth task

$(document).ready(function(){
    $("#replace").click(function(){ 
    let img = document.createElement('img')
    img.src = 'third.png'
    let child = document.getElementsByTagName('p')
    console.log(child[2])
    document.body.replaceChild(img, child[2])
    })
})
function fourth(){
    let img = document.createElement('img')
    img.src = 'third.png'
    let child = document.getElementsByTagName('p')
    console.log(child[2])
    document.body.replaceChild(img, child[2])
}

//fifth task

$(document).ready(function(){
    $("#image_size").mouseover(function(){
    $("#image_size").css("width","250px").css("height","250px")
    })
    $("#image_size").mouseleave(function(){
    $("#image_size").css("width","100px").css("height","100px")
})
})

//sixth task

$(document).ready(function(){
    $("#border_p").dblclick(function(){
    document.getElementById('border_p').style.border = '5px solid' + '#' + (Math.random().toString(16) + '000000').substring(2,8).toUpperCase()  
})
})
 
