# 0x000F44C0 packet and float-slot reconstruction

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original contiguous range 0x000f44c0..0x000f4693, 468 bytes, body digest:
`B40F7F881EDD4E333DCC1B105B34FC41E3E14CB6912336094DF824B8A7E434A2`.

Let T be entry ESP-0x34 after SUB 0x28 and saves of EBX, ESI, EDI.
0xf4538..0xf4541 zero seven DWORDs beginning T+0x18. The old four-int
array overflowed its declared extent; the draft now has seven DWORDs.
0xf4548 writes saved incoming EAX/EBX to T+0x20 (word two). Tag values
0x11/0x12 occupy T+0x1c. 0xf45e1 POP EDI changes the base to S=T+4;
tags 0x13/0x14 then use S+0x18, the same physical word. LEA/PUSH at
0xf458a/0xf45d4 use T+0x18, and at 0xf4618/0xf465b use S+0x14:
all four calls receive the same seven-word packet. The first packet
argument was absent from the previous draft and is now retained explicitly.

The first result's raw words are loaded in order from +0x10,+0xc,+0x14,
+0x18 at 0xf459d..0xf45c9. Stack temporaries retain the +0xc word at
S+0xc, +0x10 at S+0x10, +0x14 at S+0x34 (reusing the caller's incoming
slot), and +0x18 at S+8. These are data words, not array addresses or
unaffected floating-point registers. The draft now snapshots their bits.

- Second result: FLD S+0xc / FADD S+0x34; copy raw +0x10 word to
  result+0x10 before FSTP the sum to result+0xc.
- Third result: FLD S+0x10 / FADD S+8; copy raw +0xc word to
  result+0xc before FSTP the sum to result+0x10.
- Fourth result: store the first sum to +0xc, then the second to +0x10.

The helper keeps its sum in host long double until each source-level m32
rounding point. Raw words and rounded float words are written with memcpy,
removing the numeric float-to-int conversions and the invalid array-to-float
cast. Independent review confirmed the packet extent/identity, coordinate
change, snapshots, formulas and raw-store-before-rounding sequence.

Scope remains limited storage/dataflow reconstruction. Host long double,
x87 precision/rounding, exception/trap and compiler scheduling equivalence,
original caller-slot exposure/aliasing, implicit incoming EAX, globals and
all virtual callee interfaces remain unverified. Original stack-pointer
identity is not established by these separate C objects. No whole-function
behavior, native Xbox execution or byte-match claim is made. The shared
stack-storage verifier pins the original body and relevant windows.

Both final i686 and x86_64 focused syntax checks passed using the existing
sweep flags. Verification: A and the described local B facts; complete C/D
interfaces and behavior remain unverified. No execution test of these entry
functions was performed, and no game installation or saves were changed.
