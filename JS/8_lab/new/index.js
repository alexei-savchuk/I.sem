function fourth(){
    let img = document.createElement('img');
    img.src = 'third.png';
    let child = document.getElementsByTagName('p');
    console.log(child[0])
    document.body.replaceChild(img, child[0]);
}