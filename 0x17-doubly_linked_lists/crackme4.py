#!/usr/bin/python3
# uncompyle6 version 3.9.0
# Python bytecode version base 3.4 (3310)
# Decompiled from: Python 3.8.10 (default, May 26 2023, 14:05:08)
# [GCC 9.4.0]
# Embedded file name: 100-crackme.py
# Compiled at: 2017-01-06 00:44:37
# Size of source mod 2**32: 195 bytes
pwd: str = input(__prompt='Password: ')
ok = 'Zen of Python'
ok = ok + ' C'
ok: str = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]
if pwd == ok:
    print('OK')
else:
    print('KO')
# okay decompiling crackme4.pyc
with open(file='100-password', mode='w') as f:
    f.write(__s/ok)
