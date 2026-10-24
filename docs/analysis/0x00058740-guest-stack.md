# Original x86 evidence: 0x00058740 vector-output stack slot

**Status:** machine-code instruction evidence captured; C11 draft remains
`ABI_UNVERIFIED` and **not repaired**. The source's
`&stack0xffffffd8` is not a valid native C address.

**Original XBE SHA-256:**
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`

The following are instruction facts from the original XBE, not an inferred
host calling convention:

| Guest VA | x86 instruction | Established fact |
| --- | --- | --- |
| `0x00058740` | `mov eax,[edi+8]; sub esp,24h; push ebx` | Function has stack locals and preserves EBX. |
| `0x00058772` | `lea ecx,[esp+4]` | Computes a pointer relative to the **current guest ESP**. |
| `0x00058776` | `add eax,24h` | Advances the value returned by the prior indirect call. |
| `0x00058779` | `push ecx` | Passes the computed guest-stack address. |
| `0x0005877A` | `call 0x0004C480` | Direct target confirmed from rel32 bytes. |
| `0x0004C486` | `mov ecx,[esp+0Ch]` | Callee obtains the pointer after allocating 8 local bytes. |
| `0x0004C4A5` | `fst [ecx]; mov [ecx+4],eax; mov [ecx+8],eax` | Callee writes three 32-bit output lanes. |
| `0x0004C516` | zeroing stores to `[ecx+8]`, `[ecx+4]`, `[ecx]` | Alternate path also writes all three lanes. |
| `0x0004C513`, `0x0004C52F` | `ret` | Both callee return sites have no immediate stack cleanup. |
| `0x00058787` | `add esp,4` | Caller removes one pushed DWORD after consuming two float operands. |

The preceding direct call at `0x00058762` targets `0x0004C530`;
its own output-pointer and input-register flow must be considered when
mapping the subsequent floating-point arithmetic.

**Why the syntax error is not yet patched:** The draft has several
Ghidra-inferred stack float variables, an `unaff_EBX` float despite an
original `xor bl,bl`, and an indirect virtual call. Merely declaring
`stack0xffffffd8` or replacing it with an unrelated local array could
make Clang pass while changing the three output lanes or their consumers.
A correct patch must map the guest stack offsets and subsequent x87 reads
to one coherent C11 storage model and retain register/indirect-call
uncertainty.

Recheck the original bytes locally (do not upload the XBE):

```sh
python3 tools/verify_vector_stack_58740.py /path/to/default.xbe
```

This is an evidence note, not proof of original runtime equivalence.
