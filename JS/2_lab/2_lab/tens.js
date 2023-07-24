let a=Number(prompt("Введите начальный радиус"));
    let b=Number(prompt("Введите конечный радиус"));
document.write("<table border='1'>");
document.write("<th>Радиус</th><th>Площадь круга</th><th>Длина окружности</th>");
do{
    c=Math.PI*Math.pow(a,2);
    d=2*a*Math.PI;
document.write("<tr><td>"+a.toFixed(1)+"</td><td>"+c.toFixed(2)+"</td><td>"+d.toFixed(2)+"</td></tr>");    
a=a+0.3;
    } while(a<=b);

document.write("</table>")