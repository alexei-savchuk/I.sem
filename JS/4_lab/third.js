num1= (6-Math.pow(Math.PI,2)+(3*Math.pow(Math.E,8)))
num2= (2*Math.cos(4)+Math.cos(12)+8-Math.pow(Math.E,3))
num3= (3*Math.sin(9)+Math.log(5)+Math.sqrt(3))
num4= (2*Math.tan(5+6-Math.PI+Math.sqrt(12)))
var arr = [num1, num2, num3, num4];

//Удалить из массива элемент с номером 3, вывести исходный массив и полученный.
console.log('DELETE:')
delete arr[2]
console.log(arr) 



var string1 = new String('Savchuk Alexei Mikhailovich ')
document.write(string1)


function Gruppa(n, spec, kolich) {
    this.n = n
    this.spec = spec
    this.kolich = kolich
    this.sub_stude=function sub_stude(k) {
        this.kolich-=k
        document.write('---- В группе ' + this.n + ' отчислили '+ k + ' студентов ')
    }
}
gr1 = new Gruppa(1, ' ИСИТ ', 29)
  gr1.sub_stude(2)
  document.write(gr1.n, gr1.spec , gr1.kolich)



function Student(name, surname, fiz, math, inf, srb){
    this.name=name
    this.surname=surname
    this.fiz=fiz
    this.math=math
    this.inf=inf
    this.srb=srb
    this.sr_ball = function sr_ball() {
        this.srb = (this.fiz+this.math+this.inf)/3
        document.write(' Средний балл = ' + this.srb+ ' ')                         
    }
}
st1 = new Student('Алексей ', 'Михайлович', 8, 9, 10)
st1.nation=', Беларусь, '
document.write(st1.name, st1.surname, st1.fiz, st1.math, st1.inf, st1.nation) 
st1.sr_ball()

//Проверить, имеется ли у массива 2-й элемент.

console.log('IN В МАССИВЕ:')
console.log(2 in arr)

//Проверить наличие любого свойства у созданных ранее пользовательских объектов Gruppa и Студент.

console.log('IN в Gruppa и Student:')
console.log('n' in gr1) 
console.log('name' in Student) 

//Проверить, являются ли созданные объекты объектами Array, String, Object.

console.log('INSTANCEOF:')
console.log( Student instanceof Object)
console.log( arr instanceof Array)
console.log( string1 instanceof String)



function five(){
console.log(typeof 5)}
five()
console.log('Тип созданных ранее обьектов: ')
console.log(typeof arr)
console.log(typeof num1)
console.log(typeof string1)
console.log('Тип созданных ранее свойств обьектов  Gruppa и Student: ')
console.log(typeof gr1.n)
console.log(typeof gr1.spec)
console.log(typeof gr1.kolich)
console.log(typeof name)
console.log(typeof st1.surname)
console.log(typeof st1.fiz)
console.log(typeof st1.math)
console.log(typeof st1.inf)
console.log(typeof st1.srb)

