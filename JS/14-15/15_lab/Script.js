let button1 = document.getElementById('task1');
let button2 = document.getElementById('task2');
let button3 = document.getElementById('task3');
let button4 = document.getElementById('task4');
let button5 = document.getElementById('task5');
let button6 = document.getElementById('task6');

button1.onclick = function () {
    document.body.append(/./s.test('\n'));
}
button2.onclick = function () {
    let p = document.createElement('p');
    p.innerHTML = 'Привет, я длинная строка [u] которая служит примером для [/u] этой лабораторной работы';
    p.innerHTML = p.innerHTML.replace('[u]', '<u>');
    p.innerHTML = p.innerHTML.replace('[/u]', '</u>');
    document.body.append(p);
}
button3.onclick = function () {
    let p = document.createElement('p');
    p.innerHTML = '<a> www.youtube.com </a>';
    p.innerHTML = p.innerHTML.replace('<a>', '');
    document.body.append(p.innerHTML);
}
button4.onclick = function () {
    let FIO = 'Артём Батура';
    FIO = FIO.replace('Батура', 'Артём');
    FIO = FIO.replace('Артём', 'Батура');
    document.body.append(FIO);
}
button5.onclick = function () {
    let {company, name, ...remaining} = {
        company: 'Google',
        name: 'Pixel',
        date: '26.8.21',
        color: 'green',
        OS: 'android'
    }
    document.body.append(company + name + remaining);
}
button6.onclick = function () {
    let person = {age, eyes, ...lest} = {
        age: 18,
        hair_color: 'red',
        eyes: 'green',
        group: 3
    }
    let FI = {name, sname} = {
        name: 'Артём',
        sname: 'Батура'
    }
    person = {age, eyes, ...FI};
    document.body.append(person.age + person.eyes + person.name + person.sname + lest);
    // console.log(lest);

}