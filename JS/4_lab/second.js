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
Student.prototype.nation=this.nation
st1 = new Student('Алексей ', 'Михайлович ', 8,9,10)
document.write(st1.name, st1.surname, st1.fiz, st1.math, st1.inf, st1.nation=' Беларусь') 
st1.sr_ball()

st2 = new Student('---- Роман ', ' Игоревич ', 9,7,10)
document.write(st2.name, st2.surname, st2.fiz, st2.math, st2.inf, st2.nation=' Украина ') 
st2.sr_ball()

st3 = new Student('---- Александр ', 'Сергеевич ',5,8,7)
document.write(st3.name, st3.surname, st3.fiz, st3.math, st3.inf, st3.nation=' Россия ')
st3.sr_ball()
  