const $ = window.$;
$.getJSON("https://swapi-api.alx-tools.com/api/films/?format=json")
    .done(function (json) {
        $.each(json.results, function (i, item) {
            $("UL#list_movies").append(item.title + "<br>")
        })
    })
    .fail(function (status, error) {
        const sts = status + " : " + error;
        console.log("Request failes: " + sts)
    })
