#!/bin/bash
#get the byte size of http response header
curl -sI "$1" | grep 'Content-Length:' | cut -c 17-
