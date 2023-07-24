
function Gruppa(n, spec, kolich) {
    this.n = n
    this.spec = spec
    this.kolich = kolich
    this.sub_stude=function sub_stude(x) {
        this.kolich-=x
        document.write('---- В группе ' + this.n + ' отчислили '+ x + ' студентов ')
    }

    this.add_stude =function add_stude(z) {
        this.kolich+=z
        document.write('---- В группу ' + this.n + ' добавили '+ z + ' студентов ')
    }
}
  gr1 = new Gruppa(1, ' ИСИТ ', 29)
  gr1.sub_stude(2)
  document.write(gr1.n, gr1.spec , gr1.kolich)
  gr2 = new Gruppa(2, ' ИСИТ ', 27)
  gr2.sub_stude(3)
  document.write(gr2.n, gr2.spec , gr2.kolich)
  gr3 = new Gruppa(3, ' ИСИТ ', 28)
  gr3.add_stude(1)
  document.write (gr3.n, gr3.spec , gr3.kolich)
  gr4 = new Gruppa(4, ' ИСИТ ', 30)
  gr4.add_stude(4)
  document.write (gr4.n, gr4.spec , gr4.kolich)


