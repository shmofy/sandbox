import subprocess

def ping_host(host):
    command = ["ping", "-c", "4", host]
    subprocess.run(command, check=True)
