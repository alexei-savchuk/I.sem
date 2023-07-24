let first_span = document.getElementById('span1')
let second_span = document.getElementById('span2')

function first(){
    first_span.style.color="#FFCC66"
}
function second(){
    second_span.style.fontSize="40px"
}
let picture_number=0
let image = document.getElementById('image')
let pict = new Array('first.jpg', 'second.jpg')
function third(){
    picture_number%=pict.length
    image.src=pict[picture_number]
    picture_number++
}
function fourth(){
    let img = document.createElement('img')
    img.src = 'third.png'
    let child = document.getElementsByTagName('p')
    console.log(child[2])
    document.body.replaceChild(img, child[2])
}
function fifth(){
    document.getElementById('image_size').style.width = '250px'
    document.getElementById('image_size').style.height = '250px'
}
function sixth(){
    document.getElementById('image_size').style.width = '100px'
    document.getElementById('image_size').style.height = '100px'
}
function seventh(){
    document.getElementById('border_p').style.border = '5px solid' + '#' + (Math.random().toString(16) + '000000').substring(2,8).toUpperCase()
}
