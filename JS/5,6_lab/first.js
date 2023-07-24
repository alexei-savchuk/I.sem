function my_onClick()
{

console.log("1 задание:")

var dom = document.all;
for(let i = 0; i < dom.length; i++)
{
    console.log(dom[i].nodeName, dom[i].nodeType)
}



console.log("2 задание:")

var body_dom = document.body.getElementsByTagName("*")

for(let i = 0; i < body_dom.length; i++)
{
    console.log(body_dom[i].nodeName, body_dom[i].nodeType)
}



console.log("3 задание:")

console.log("//используя для доступа к элементу коллекцию all")
var dom = document.all
for(let i = 0; i < dom.length; i++)
{
    if (dom[i].nodeName == "SPAN")
    {
	console.log("первый способ")
	console.log(dom[i].innerHTML)

	console.log("второй способ")	
        parentSpan = dom[i].childNodes
        for(var j = 0; j < parentSpan.length; j++)
        {
            alert(parentSpan[j].textContent, parentSpan[j].nodeType)
        }
        
        break
    }
}

console.log("//используя частную коллекцию (span)")
var span_dom = document.body.getElementsByTagName("SPAN")

console.log("первый способ")
console.log(span_dom[0].innerHTML)

console.log("второй способ")
for(let i = 0; i < span_dom.length; i++)
{
    parentSpan = span_dom[i].childNodes
    for(var j = 0; j < parentSpan.length; j++)
    {
        console.log(parentSpan[j].nodeName,parentSpan[j].textContent, parentSpan[j].nodeType)
   }
    break
}

console.log("используя идентификатор элемента")
console.log("первый способ")
console.log(document.getElementById("FirstSpan").innerHTML)

console.log("второй способ")
var span = document.getElementById("FirstSpan")

parentSpan = span.childNodes
for(var j = 0; j < parentSpan.length; j++)
{
    console.log(parentSpan[j].nodeName, parentSpan[j].textContent, parentSpan[j].nodeType)
}



console.log("4 задание:")

let nds    = 0 
let no_nds = 0
let rf     = 0 
let rb     = 0 
let rows = document.getElementById("myTable").rows



let result_row_index = rows.length - 1 
let data_row_count = rows.length - 3 
let cell_index = 0
for(let i = 2; i < result_row_index; i++)
{
	if (i == 2) { cell_index = 2 } else { cell_index = 1 }
	nds    += parseInt(rows[i].cells[cell_index].innerHTML)
	no_nds += parseInt(rows[i].cells[cell_index + 1].innerHTML)
	rf     += parseInt(rows[i].cells[cell_index + 2].innerHTML)
	rb     += parseInt(rows[i].cells[cell_index + 3].innerHTML)	
}
rows[result_row_index].cells[1].innerHTML = nds    / data_row_count 
rows[result_row_index].cells[2].innerHTML = no_nds / data_row_count 
rows[result_row_index].cells[3].innerHTML = rf 	   / data_row_count 
rows[result_row_index].cells[4].innerHTML = rb 	   / data_row_count 
document.getElementById('second_span').innerHTML += ' ' + rows[result_row_index].cells[3].innerHTML;
}