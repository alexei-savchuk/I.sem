document.querySelector('#pechat').onclick = get_value
function get_value(){
  document.getElementById('answer').innerHTML = document.querySelector('textarea').value+'<br>' +
                                              + 'Студент ' + document.querySelector('#lastname').value
                                              + ' Специальность ' + document.querySelector('#spec').value
                                              + ' курс ' + get_value_kurs() + ' должен сдавать следующие предметы: '
                                              + get_value_subjects();
  //document.write('<p align="center">'+document.querySelector('textarea').value+'</p>')
  //document.write('Студент '+document.querySelector('#lastname').value+' Специальность '+document.querySelector('#spec').value+' курс '+get_value_kurs()+' должен сдавать следующие предметы: ')
}
let radios = document.querySelectorAll('input[type="radio"]')
let subjects = document.querySelectorAll('input[type="checkbox"]')
let Predms=document.createElement('ul');
let value
let list
let spisok
function get_value_kurs(){
	for (let radio of radios) {
		if (radio.checked) {
			return(radio.value)
		}
	}
}
function get_value_subjects(list){
  document.createElement('ul')
  for (let checkbox of subjects) {
		if (checkbox.checked) {
      value=checkbox.value
      list +="<li>" +value+ "</li>"
		}
	} 
  return(list)
}

function newForm(){
  spisok = [];
  for (let checkbox of subjects) {
		if (checkbox.checked) {
      value=checkbox.value  
      spisok += "<option>"+value+"</option>"
    }
    }
    document.getElementById('new_form').innerHTML ='<form><fieldset style="width:260px"> Список выбранных предметов <select>'+spisok+'</select></fieldset></form>';
  }


  
