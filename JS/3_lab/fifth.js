function five() {
    var days = ["Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота"]; 
         var months = ["Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"]; 
         const day = new Date() 
         let w_day=days[day.getDay()] 
         let month=months[day.getMonth()] 
         let year=day.getFullYear() 
         let hour=day.getHours() 
         let second=day.getSeconds() 
         let minute=day.getMinutes()
         document.write("<table border=5>") 
        document.write("<tr><td>Год</td><td>"+year+"</td></tr>")         
        document.write("<tr><td>Месяц</td><td>"+month+"</td></tr>")         
        document.write("<tr><td>День недели</td><td>"+w_day+"</td></tr>")         
        document.write("<tr><td>Час</td><td>"+hour+"</td></tr>")         
        document.write("<tr><td>Минута</td><td>"+minute +"</td></tr>")         
        document.write("<tr><td>Секунда</td><td>"+second+"</td></tr>")         
        document.write("</table>")
}
five();