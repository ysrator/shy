document.querySelector("#html").lang = navigator.language;
function getParameterByURL(name) {
    var url = window.location.href;
    name = name.replace(/[\[\]]/g, "\\$&");
    var regex = new RegExp("[?&]" + name + "(=([^&#]*)|&|#|$)");
    results = regex.exec(url);
    if (!results) return null;
    if (!results[2]) return '';
    return decodeURIComponent(results[2].replace(/\+/g, " "));
}
if (getParameterByURL("code") = null) Module.ccall("cmd", null, null, null);
else {
    if (getParameterByURL("src") = null) {
        Module.ccall("commands", null, null, getParameterByURL("code"));
    }
    else {
        const xhr = new XMLHttpRequest();
        xhr.onabort = console.error("Abort!");
        xhr.ontimeout = console.error("Script could not be imported!");
        xhr.onerror = console.error("Error!");
        xhr.open("GET", getParameterByURL("src"));
        xhr.send();
        Module.ccall("commands", String || Number, String || Number, xhr.response);
    }
}