
from building import *

cwd = GetCurrentDir()

# init src and inc vars
src = []
inc = [cwd]

inc = inc + [cwd + "/lwrb/inc"]
src += Glob("lwrb/src/*.c")

if GetDepend('LWRB2RTT_USING_SAMPLES'):
    src += Glob("examples/*.c")

group = DefineGroup('lwrb2rtt', src, depend = PKG_USING_LWRB2RTT, CPPPATH = inc)

Return('group')