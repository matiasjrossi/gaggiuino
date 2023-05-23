import subprocess

print(subprocess.Popen(["git", "config", "--local", "core.hooksPath", ".githooks/"], stdout=subprocess.PIPE).communicate()[0])
