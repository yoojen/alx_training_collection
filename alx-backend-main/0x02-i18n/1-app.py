#!/usr/bin/env python3
"""
configure available languages in our app
"""
from flask import Flask, render_template
from flask_babel import Babel


class Config(object):
    """class that configures the app"""
    LANGUAGES = ["en", "fr"]
    BABEL_DEFAULT_LOCALE = 'en'
    BABEL_DEFAULT_TIMEZONE = 'UTC'


app = Flask(__name__)
app.config.from_object(Config)
babel = Babel(app)


@app.route('/', strict_slashes=False)
def home():
    """return homepage for the app"""
    return render_template('1-index.html')


if __name__ == "__main__":
    app.run()
