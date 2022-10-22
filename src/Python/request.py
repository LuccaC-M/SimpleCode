#!/usr/bin/env python3

import requests

def get_request(sUrl, header):
    Request = requests.get(sUrl)

    Request.raise_for_status()

    jsReq = Request.json()

    print(jsReq[header])
    return Request.status_code

get_request("https://v2.jokeapi.dev/joke/Any?type=single", "joke")
