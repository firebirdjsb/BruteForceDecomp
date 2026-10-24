# Observed stack storage repairs

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
`scripts/verify_stack_storage_repairs.py` checks section-mapped instruction
windows, complete original bodies and retained C body labels for this batch.

| Entry | Bounded correction and original evidence |
| --- | --- |
| 0x000edf70 | AL store at 0x000edf8c and byte read at 0x000edfdc address the reused third input slot; preserve the original pointer in its separate saved local |
| 0x00141630 | Byte read at 0x00141633 is the first incoming byte; 0x0014163e copies it into helper input storage |
| 0x00200400 | AL store at 0x0020041c and byte read at 0x00200445 use the reused third input slot |
| 0x00202af0 | Corresponding AL store/read at 0x00202b0c/0x00202b35; saved original pointer remains separate |
| 0x001b1810 | One incoming DWORD at entry ESP+4: 0x001b183c takes its address, both returns pop four bytes, caller 0x001a6843 supplies zero, and helper 0x000757a3/0x000757a6 reads one DWORD through that address |
| 0x0034d40c | MOVSD/MOVSW fill exactly six local bytes at EBP-8..EBP-3; REPE CMPSW tests three words; write the first DWORD, then read and zero-extend the trailing WORD, then copy six bytes back |
| 0x003518d4 | Selector bytes written at 0x00351bbb/0x00351c66 pass through 0x0035055a; the complete 0x0034fedf body consumes only the low selector byte at 0x0034ff2e |

For 0x0034d40c, no upper two bytes of a second DWORD are invented. The
observed global stores are four bytes at 0xfef000a8 and a zero-extended
two-byte value stored as four bytes at 0xfef000ac. The C storage repair
retains this ordering. The original string operations require the direction
flag convention to be established; the current C view assumes forward copies.
Guest mapping, MMIO representation, implicit ECX and helper contracts remain
unverified. The local buffer does not escape through the inspected direct calls.

Independent reviews approve **Level A and limited operand/storage Level B**.
These edits do not establish complete function ABI, exceptions, flags, native
linkage or runtime equivalence. In particular, EAX/ECX inputs of 0x001b1810
remain implicit, and its ordinary C signature records only the proven stack
word. Its sole discovered C caller already supplies that word.

The 0x003518d4 byte selector is an explicitly limited projection. The
original outgoing PUSH reads a DWORD whose high 24 bits are unknown.
All three forwarding paths in 0x0035055a reach 0x0034fedf; its complete
150-byte body observes only the selector byte, with no selector address
escape or full-word use. C argument promotion supplies different high bits;
their equality is **not** claimed. This source view is justified only by
the inspected consumers ignoring them. Any native guest-stack adapter or
new consumer must preserve/review the original unknown bits separately.

The other band-001b wrappers are not equivalent one-word cases. Examples
0x001b1a10 and 0x001b1aa0 consume 32- and 40-byte by-value stack regions;
the former has partially initialized bytes. Their layouts and lifetimes
remain deferred rather than being replaced by invented scalar arguments.
