var f1 = function(){
	var k = 1;
	return function() {
		this.innerHTML = k;
		return k++;
	}
}

var all_buttons = document.getElementsByName('fifth');
for (var i = 0; i < all_buttons.length; i++) {
	all_buttons[i].addEventListener('click', f1(this));
}