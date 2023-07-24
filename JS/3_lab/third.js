let arr = new Array ("pow", "pop", "push", "shift", "round", "floor", "sline", "sort");
let MathMd = new Array();
let ArrayMd = new Array();
document.write(arr);
for(let i=0; i<=arr.length; i++){
    if (Array.prototype.hasOwnProperty(arr[i])){  //метод, позволяет проверить имеет ли объект собственное свойство с указанным именем
        ArrayMd.push(arr[i])            //Метод, добавляет к массиву указанное значение в качестве последнего элемента и возвращает новую длину массива;
    }
     else {
        MathMd.push(arr[i])
    }
}
 MathMd.push("abs");
 ArrayMd.push("concat");
 document.write("<br> Array :" + ArrayMd);
 document.write("<br>длина массива Array :" + ArrayMd.length);
 document.write("<br> Math :" + MathMd);
 document.write("<br> длина массива Math :" + MathMd.length);