#!/bin/bash
#curl site without using pipe
curl -s --write-out "%{http_code}" "$1"
