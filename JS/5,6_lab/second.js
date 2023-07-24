let open_window
function OPEN(){
open_window = window.open("about:web", "hello", "width=200,height=200")
}
function CLOSE(){
open_window.close()
}
function TEXT(){
var newWin = window.open("about:web", "hello", "width=200,height=200");
newWin.document.write("HELLO WORLD");
}
function BROUSER(){
document.write("<table border='1'>");
document.write("<th>Свойства</th><th>Значение</th>");
document.write("<tr><td>userAgent</td><td>"+navigator.userAgent+"</td></tr>");    
document.write("<tr><td>appVersion</td><td>"+navigator.appVersion+"</td></tr>");    
document.write("<tr><td>appName</td><td>"+navigator.appName+"</td></tr>");    
document.write("<tr><td>appCodeName</td><td>"+navigator.appCodeName+"</td></tr>");    
document.write("<tr><td>platform</td><td>"+navigator.platform+"</td></tr>");    
document.write("<tr><td>javaEnabled()</td><td>"+navigator.javaEnabled()+"</td></tr>");    
document.write("<tr><td>screen.height</td><td>"+window.screen.height,'х',window.screen.width+"</td></tr>");    
document.write("<tr><td>colorDepth</td><td>"+screen.colorDepth+"</td></tr>");    
document.write("<tr><td>length</td><td>"+history.length+"</td></tr>");    
document.write("<tr><td>pathname</td><td>"+location.pathname+"</td></tr>");    
document.write("<tr><td>host</td><td>"+location.host+"</td></tr>"); 
}