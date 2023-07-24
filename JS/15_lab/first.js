let button1 = document.getElementById('task1');
let button2 = document.getElementById('task2');
let button3 = document.getElementById('task3');
let button4 = document.getElementById('task4');
let button5 = document.getElementById('task5');
let button6 = document.getElementById('task6');

button1.onclick = function () {
    document.getElementById('d1').innerHTML=/./s.test('\n');
}
button2.onclick = function () {
    let p = document.createElement('p');
    p.innerHTML = 'произвольный текст [u] произвольный текст [/u] произвольный текст';
    p.innerHTML = p.innerHTML.replace('[u]', '<u>');
    p.innerHTML = p.innerHTML.replace('[/u]', '</u>');
    document.getElementById('d2').innerHTML=p
}
button3.onclick = function () {
    let p = document.createElement('p');
    p.innerHTML = '<a> www.vk.com </a>';
    p.innerHTML = p.innerHTML.replace('<a>', '<h3>');
    document.getElementById('d3').innerHTML=p.innerHTML;
}
button4.onclick = function () {
    let FIO = 'Алексей Савчук';
    FIO = FIO.replace('Савчук', 'Алексей');
    FIO = FIO.replace('Алексей', 'Савчук');
    document.getElementById('d4').innerHTML=FIO
}
button5.onclick = function () {
    let {company, name, ...remaining} = {
        company: 'Apple',
        name: 'Iphone',
        date: '16.9.16',
        color: 'black',
        OS: 'IOS'
    }
    document.getElementById('d5').innerHTML=company + name + remaining
    console.log(remaining)
}
button6.onclick = function () {
    let person = {age, eyes, ...lest} = {
        age: 18,
        hair_color: 'red',
        eyes: 'red',
        group: 3
    }
    let FI = {name, sname} = {
        name: 'Алексей',
        sname: 'Савчук'
    }
    person = {age, eyes, ...FI};
    console.log(person)
    document.getElementById('d6').innerHTML=person.age + person.eyes + person.name + person.sname + lest
    // console.log(lest);

}