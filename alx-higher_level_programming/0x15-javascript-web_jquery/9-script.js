const $ = window.$;
$.getJSON("https://hellosalut.stefanbohacek.dev/?lang=fr")
    .done(function(jsondata){
        $("DIV#hello").text(jsondata.hello)
    })
