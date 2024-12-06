#!/bin/bash
#send GET request, with key=value
curl -s "$1" -X GET -H 'X-School-User-Id: 98'
