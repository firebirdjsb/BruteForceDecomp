# Five return-only drafts: original effects confirmed

The private retail XBE was authenticated with SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
All five recorded original body digests were independently reproduced from
the ordered byte ranges below. The current C++ bodies contain only `return;`.
They therefore omit the observed machine effects. All five fidelity flags
remain open; this investigation does not implement the missing contracts.

| Entry | Authenticated body ranges (end exclusive) | Observed missing effects |
| --- | --- | --- |
| `0x002ECC14` | `0x002ECC14..0x002ECC6D` | Reads incoming stack flags; conditionally executes x87 loads, stores, arithmetic, status reads and waits; modifies scratch stack storage |
| `0x002EF9EA` | `0x002EF9EA..0x002EFA07`, then `0x002EFA20..0x002EFA2C` | Calls `0x002F0DF0`, reads through the incoming pointer, sets EAX on the success path, calls `0x002F0E2B`, and returns with 4-byte cleanup |
| `0x002F04D0` | `0x002F04D0..0x002F04D5` | Exchanges x87 ST(0)/ST(1), then pops the x87 stack before returning |
| `0x002F060D` | `0x002F060D..0x002F0624` | Reads entry ESP+4, masks with `0x300`, combines with `0x7F`, writes a WORD at ESP+6, and loads the x87 control word |
| `0x002F0696` | `0x002F0696..0x002F06A3` | Compares the WORD at entry ESP with `0x027F`, conditionally loads the x87 control word, pops EDX, then returns |

These are observed instruction effects, not recovered high-level function
meanings. The final function has a nonstandard entry-stack dependency; a
normal host `void()` call cannot be presumed equivalent.

## Probe range and exception boundary

`0x002EF9EA` is especially important: hashing the entire contiguous span does
**not** reproduce its recorded Ghidra body digest. Concatenating the two ranges
above does. The intervening `0x002EFA07..0x002EFA20` region contains an exception
filter and a recovery path: it compares an exception value with `0xC0000005`,
and a nearby recovery block restores ESP from EBP-relative storage and clears
EAX before joining at `0x002EFA20`. Those observed adjacent instructions are
not included in the recorded function-body digest. Do not treat the digest
as a complete exception-behavior contract or omit the recovery dependencies.

`scripts/verify_cpp_return_only_fidelity_xbe.py` reauthenticates the private
XBE and all five ordered body digests. Its binary-free self-test checks
discontiguous selection and mutations. It neither models x87/SEH nor tests
game behavior. No original binary bytes or complete disassembly are stored.

Next source repair must preserve incoming x87 state, control-word and status
effects, precise guest stack layout, actual helper contracts and exception
handling. A no-op, guessed host prototype, zero-filled register state or host
floating-point substitution would conceal these missing effects. The source
flags remain unresolved until that reconstruction is implemented and checked.
