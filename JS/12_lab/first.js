function first(){
    let map = new Map();
    map.set('1', '+375(33)6255648')
       .set('2', '+375(29)4562371')
       .set('3', '+375(29)1532645')
       .set('4', '+375(33)7516842')
       .set('5', '+375(29)8526457')
    let num = prompt("индекс телефона: ")
    confirm(map.get(num))
}


function second(){
    let set = new Set();
    set.add(1)
       .add(3)
       .add(5)
    alert(set.size)
    let value  = (prompt("value?"))
    let number =Number(value)
    alert(set.has(number))   
}


function third(){ 
        let proto = {
            name: "Alexei",  
            surname: "Savchuk",
            patronymic:  "Michailovich",
            displayType:function(){
            document.write(this.name + '<br>' + this.surname + '<br>' + this.patronymic + '<br>');
            }
            }
            let proto2 = Object.create(proto)
            proto2.displayType()
            document.write
            proto2.name="Evgeniy"
            document.write('<br>' + proto2.name + '<br>' + proto2.surname + '<br>' + proto2.patronymic + '<br>');
}
function fourth(){
  let value_name = prompt("input name: ")
 
  if(value_name){
    document.write("Hello, " + value_name)
  }
  else if(value_name==""){
    document.write("Hello,  Anonymous") 
   }
}

    var fifth = function(){
        var n = 1;
        return function() {
            this.innerHTML = n;
            return n++;
        }
    }
    
    var fifth_value = document.getElementsByName('fifth');
    for (var i = 0; i < fifth_value.length; i++) {
        fifth_value[i].addEventListener('click', fifth(this));
    }

