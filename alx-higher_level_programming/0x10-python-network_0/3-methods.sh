#!/bin/bash
#show allow
curl -sI "$1" -X OPTIONS | grep "Allow" | cut -c 8-
