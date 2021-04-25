<!--
RUN: %counter %s > %t
RUN: cat %t | grep -e "compiler: 2"
RUN: cat %t | grep -e "compiled: 1"
RUN: cat %t | grep -e "a: 2"
-->

Compiling a compiler using a compiled compiler
