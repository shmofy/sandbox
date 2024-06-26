import os

def ping_host(host):
    command = f"ping -c 4 {host}"
    os.system(command)
