a = prompt("введите a")
b = prompt("введите b")
document.write("<table border='1'>");
for (i=1; i<=a; i++) {
document.write("<tr>");
 for (j=1; j<=b; j++)
document.write("<td>"  +i*j+"</td>");
document.write("</tr>");
 }

                        