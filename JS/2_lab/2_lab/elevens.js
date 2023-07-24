float1=Number(prompt("Введите дробное число"));
    double=Number(prompt("Введите целое число"));
    document.write("<table border='1'>");
    document.write("<tr><th>Число</th><th>Метод</th><th>Результат</th><th>Описание метода</th></tr>");

    document.write("<tr> <td rowspan='4'>"+float1+"</td> <td>toExponential</td> <td>"+float1.toExponential(3)+"</td> <td>Представляет число в экспоненциальной форме</td> </tr>")
    document.write("<tr> <td>toFixed</td> <td>"+float1.toFixed(3)+"</td> <td>Представляет число  с фикстрованным количеством цифр после точки</td> </tr>")
    document.write("<tr> <td>toPrecision</td> <td>"+float1.toPrecision(4)+"</td> <td>Определяет, сколько всего цифр, до и после точки, следует указывать</td> </tr>")
    document.write("<tr> <td>toString</td> <td>"+float1.toString(16)+"</td> <td>Строковое представление числа в заданной программе системе счисления</td> </tr>")

    

    document.write("<tr> <td rowspan='4'>"+double+"</td> <td>toExponential</td> <td>"+double.toExponential(3)+"</td> <td>Представляет число в экспоненциальной форме</td> </tr>")
    document.write("<tr> <td>toFixed</td> <td>"+double.toFixed(3)+"</td> <td>Представляет число  с фикстрованным количеством цифр после точки</td> </tr>")
    document.write("<tr> <td>toPrecision</td> <td>"+double.toPrecision(4)+"</td> <td>Определяет, сколько всего цифр, до и после точки, следует указывать</td> </tr>")
    document.write("<tr> <td>toString</td> <td>"+double.toString(16)+"</td> <td>Строковое представление числа в заданной программе системе счисления</td> </tr>")
    document.write("</table>");