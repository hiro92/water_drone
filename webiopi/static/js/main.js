webiopi()

function forward() {
    webiopi().callMacro("forward");
    document.getElementById("left-now").innerHTML = "forward";
}

function left() {
    webiopi().callMacro("left");
    document.getElementById("left-now").innerHTML = "left";
}

function propeller_stop() {
    webiopi().callMacro("propeller_stop");
    document.getElementById("left-now").innerHTML = "propeller_stop";
}

function right() {
    webiopi().callMacro("right");
    document.getElementById("left-now").innerHTML = "right";
}

function back() {
    webiopi().callMacro("back");
    document.getElementById("left-now").innerHTML = "back";
}

function up() {
    webiopi().callMacro("up");
    document.getElementById("right-now").innerHTML = "up";
}

function ud_stop() {
    webiopi().callMacro("ud_stop");
    document.getElementById("right-now").innerHTML = "ud_stop";
}

function down() {
    webiopi().callMacro("down");
    document.getElementById("right-now").innerHTML = "down";
}
