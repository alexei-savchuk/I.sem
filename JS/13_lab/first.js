function first(){
    let array = [1,6,4,8,3,0]
    let value = prompt('Проверить элемент:')
    let value_number= Number(value)
    document.getElementById('d1').innerHTML = array.includes(value_number)
}


function second(){
    let numbers = [7, 4, 2, 10, 56, NaN, 21, 3, 5];
    if (numbers.indexOf(NaN) !== -1) {
        document.getElementById('d2').innerHTML = numbers.indexOf(NaN)
    }
    if (numbers.includes(NaN)) {
        document.getElementById('d2').innerHTML = numbers.includes(NaN)
    }
}

function third(){ 
    let first = [1, 3, 7, 23, 43, NaN, 34, 21, 5];
    let second = [6, 8, 0, 5, 8, NaN, 2, 29, 3];
    let third = [4, 32, 13, 10, 31, NaN, 78, 65, 33];
    let all =[...first, ...second, ...third]
    let symbol_mass = prompt('symbol Array: ')
    let num = Number(symbol_mass)
    console.log(all)
    document.getElementById('d3').innerHTML = all.includes(num)   
}


function fourth(){
 let num1 = 1234**2*23/5+234
 let num2 = 28*765**2/5*43**2
 let num3 = 3734**6-(434**6+1024**4)/5
 let num4 = 6543**35-965732
 let num5 = (1000**10+100000**10)/10000
 document.getElementById('d4').innerHTML = Math.round(num1)
                                 +'<br>'+  Math.round(num2)
                                 +'<br>'+  Math.round(num3)
                                 +'<br>'+  Math.round(num4)
                                 +'<br>'+  Math.round(num5)
}   