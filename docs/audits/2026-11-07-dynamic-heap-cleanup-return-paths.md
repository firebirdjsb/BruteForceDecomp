# Original XBE: dynamic cleanup slot and bounded return paths

**Status:** original retail Xbox x86 evidence, independently authenticated with SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
**Game semantics, guest stack ABI, indirect imports, dynamic target identity at runtime, and linkage remain `ABI_UNVERIFIED`.**
No original-address game source is modified by this evidence review.

## Why it matters

The `FUN_000E1150` and `FUN_00012140` archived Ghidra body hashes exclude,
respectively, 14 and 18 original executable bytes following calls into
`0x002EA018`. The private verification of these gaps lives in
`verify_20261107_000e1150_discontiguous_xbe.py`. That original x86 call
passes through `JMP 0x00067BF0` then `JMP DWORD PTR [0x003BC654]`.
Do not assume the thunk never returns merely because Ghidra omitted the
post-CALL instructions. Do not assume it always returns either.

The initialized original file DWORD at guest VA `0x003BC654` is `0x00237EC0`.
The independent original function `0x00087CC0` (82-byte body SHA-256
`93CBE7D076AD040F798E96BC4C2CC58049D955F52052206A8244E1CBE367739B`)
contains two **explicit writes to this same guest slot**:

| Original x86 address | Exact store instruction | Written target |
|---|---|---|
| `0x00087CCF` | `C7 05 54 C6 3B 00 D0 79 23 00` | `0x002379D0` |
| `0x00087CF8` | `C7 05 54 C6 3B 00 10 79 23 00` | `0x00237910` |

The two writes occur on opposite sides of a `CALL 0x00087D20` at
`0x00087CE3`. Whether that call returns normally, and when/where this
initializer executes during gameplay, must be established separately.
Nothing authorizes treating an original guest address as a host callback.

## Original targets with a RET instruction

- `0x00237EC0` is an independent 19-byte function with original body SHA-256
  `AA35726C3037E872B1F4DD54BC64DF55B01AC73E8ED04533F2411D071FCEBD54`.
  It reads `[ESP+4]`, calls `0x002F77F3` and `0x002F77DC`, then executes `RET`
  at `0x00237ED2` (no immediate callee cleanup).
- The instruction-aligned **bounded span** `0x002379D0..0x002379F3`, 36 bytes,
  has SHA-256 `F5A55B9D7ACAD6C7FFB3AB4D2E2375D8A95994B514F68E36CCA10E3758DB28FD`.
  It calls indirectly through `[0x00386340]`, reads its original stack word,
  calls `0x00237910` at `0x002379E0`, cleans 4 bytes with `ADD ESP,4`, calls
  indirectly through `[0x00386344]` and executes `RET` at `0x002379F3`.
  **This does not prove either imported lock/unlock operation returns.**
- The instruction-aligned **bounded span** `0x00237910..0x00237992`, 131 bytes,
  has SHA-256 `11BB4ED20BB8EDB4B38E7DA3FFBA942A134920A5E3B41F9DE662EB56495689CB`.
  `MOV EAX,[ESP+8]` and `TEST EAX,EAX` lead to a directly encoded
  `JE 0x0023795C`, where `POP ECX; RET` completes the **null-pointer path**.
  A separate nonzero path also reaches `RET` at `0x00237992`; other paths
  access guest tables or call `0x00259080`. The return paths are instruction
  facts, not a verified high-level deallocator contract.

The original `0x000E1150` **does** contain the omitted guest counter decrement
after calling the shared cleanup thunk, and `0x00012140` **does** contain two
omitted guest DWORD-zeroing stores after another call. Whether those paths
execute at runtime requires target selection, stack ownership and callee
return evidence. Reconstructing the host game source without those contracts
would risk silently inventing or suppressing original effects.

## Reproducible private evidence check

```sh
python3 scripts/verify_20261107_heap_free_dynamic_slot_xbe.py \
  --xbe /private/path/default.xbe
```

This checks the complete original XBE hash, two complete canonical function
body hashes, two bounded noncanonical target spans, 22 exact opcode/operand
windows, direct call/jump and conditional-branch destinations, the on-disk
initial guest-slot value, and **746 negative controls** (including the base
omitted-byte gate's 392). Neither the binary, original executable ranges,
nor a complete Ghidra export may be committed.

**Next evidence gate:** recover the slot-selection lifetime, import lock/unlock
return and stack cleanup behavior, and original caller ESP/register mappings.
Keep `FUN_00012140`, `FUN_000E1150`, and all import adapters `ABI_UNVERIFIED`
until those contracts are independently established. Host syntax alone is
not 1:1 or cross-function linkage.
