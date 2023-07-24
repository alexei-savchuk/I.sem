function first(){
    const years = { Alexei: 17, Dmitry: 12, Alexander: 16 }
    // С помощью Object.keys
    const value = Object.keys(years).map(key => years [key] )
    // С помощью Object.values
    const val = Object.values(years)
    document.getElementById('d1').innerHTML ='<br>С помощью Object.values:'+ val+'<br>С помощью Object.keys:'+value
}
function sec_1(){
    let formatted = [1, 111, 111111, 111, 1]
    document.getElementById('d2_1').innerHTML =formatted[0]
                +'<br>'+formatted[1]
                +'<br>'+formatted[2]
                +'<br>'+formatted[3]
                +'<br>'+formatted[4]
    }
    function sec_2(){
        let formatted = [1, 111, 111111, 111, 1].map(num=>
            num.toString().padStart(8, '0').padEnd(15,'0'))   
                document.getElementById('d2_2').innerHTML =formatted[0]
                +'<br>'+formatted[1]
                +'<br>'+formatted[2]
                +'<br>'+formatted[3]
                +'<br>'+formatted[4]
    }
function second(){
   sec_1()
   sec_2() 
    }

function third(){
    let nsurn = prompt("Введите имя и фамилию: ")
    let name = [nsurn].map(num=>
        num.toString().padStart(17, ',/.+').padEnd(19,'17'))   
            document.getElementById('d3').innerHTML =name
 
    
}
function fourth(){
        let Arr = ['8', '8', '8', '8', '8', '8', '8', '8'];
        Arr.unshift(1, 1, 1, 1);
        Arr.push(' ', ' ',' ', ' ', '0');

        document.getElementById('d4').innerHTML =Arr
        
    }
function fifth(){
    let student = {
        name: 'Алексей',
        age: 17,
        group: 3
    };
    let name = student.name
    let age = student.age
    let group = student.group
    document.getElementById('d5').innerHTML =name + ' ' + age + ' ' + group
}
function sixth(){
    let telephone = {};
    Object.defineProperty(telephone, 'company', {
        value: 'Iphone',
        writable: true, 
        configurable: false, 
        enumerable: true //Свойство просматривается в цикле for..in и Object.keys()?
    });
    Object.defineProperty(telephone, 'name', {
        value: '7',
        writable: true,
        configurable: true
    });
    Object.defineProperty(telephone, 'year', {
        value: '28.08',
        writable: true,
        configurable: true
    });
}