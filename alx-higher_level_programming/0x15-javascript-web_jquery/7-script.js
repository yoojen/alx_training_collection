const $ = window.$;
$.getJSON("https://swapi-api.alx-tools.com/api/people/5/?format=json")
    .done(function (json) {
        const api_name = json.name;
        $("DIV#character").text(api_name)
    })
    .fail(function (jqxhr, textStatus, error) {
        var err = textStatus + ", " + error;
        console.log("Request Failed: " + err);
    });
