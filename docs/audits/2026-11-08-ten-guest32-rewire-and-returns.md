# Ten original-XBE-backed guest32 source drafts — November 8, 2026

## Evidence, scope and limitations

The user's **retail Brute Force XBE** was locally authenticated as SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The privately run `scripts/verify_20261108_ten_guest32_rewire_xbe.py` rechecked
**10 contiguous Ghidra function-body hashes (832 executable bytes)**, original
read/write opcodes, **30 branch landings**, **27 return sites**, and 832
modified-byte negative controls. The private retail binary is not in Git.

Ten previously isolated C++17-failing source drafts were reconstructed without
host-pointer truncation, retaining original address and body SHA-256 labels.
The public `tools/test_cpp_20261108_ten_guest32_rewire.py` independently
executes **6,400 synthetic memory traces at O0 and 6,400 at O2** and rejects
one compiled corrupted-flag model plus 10 pinned-source mutations. It checks
guest-memory access ordering, aliasing, 32-bit wrapping, return low-byte
masks and the signed multiply-high / unsigned-limit combination.

| Original function | Body bytes | XBE fact preserved |
|---|---:|---|
| `FUN_0010F400` | 81 | Read flag `+0x25`; three `RET 4` branches |
| `FUN_00138F20` | 81 | Read flag `+0x21`; three `RET 4` branches |
| `FUN_00142850` | 81 | Read flag `+0x1D`; three `RET 4` branches |
| `FUN_0017D180` | 84 | Read flag `+0x81` via 32-bit displacement; three `RET 4` branches |
| `FUN_00181090` | 81 | Read flag `+0x41`; three `RET 4` branches |
| `FUN_0024FD10` | 81 | Read flag `+0x45`; three `RET 4` branches |
| `FUN_00250060` | 81 | Read flag `+0x11`; three `RET 4` branches |
| `FUN_00270C40` | 81 | Read flag `+0x2D`; three `RET 4` branches |
| `FUN_001A6D20` | 91 | Conditional original absolute guest DWORD load at `0x00387430`; EAX pointer mask, `RET` |
| `FUN_00262C30` | 90 | Signed `IMUL` high DWORD; arithmetic `SAR`; unsigned `JAE`; four ordered stores; partial `AL` return; two `RET 24` sites |

**Subtle ordering:** the eight record rewires load `[EAX]`, store `[ECX+8]`,
then **load `[EAX]` again**; removing that repeated load would be a wrong
aliasing optimization. Their saved `EBX` and three `RET 4` exits are confirmed
in the original instructions. The host functions' explicit `guest_ecx` and
`guest_stack_word_0` arguments only model original register and stack inputs;
they do not recreate the Xbox calling convention.

`FUN_001A6D20` may read the value held at original guest VA `0x00387430`,
not a fixed compile-time sentinel. Its original EDX live-out and guest-stack
spill effects are not reconstructed by the host model. `FUN_00262C30` has
six stack DWORD inputs and `RET 24`, but this evidence alone is **not** proof
of a recovered source-level C++ signature. Its original `MOV AL` and `XOR AL`
modify only bits 0..7 of EAX, rather than returning a C++ `bool`.

## Distinct milestones

- **Source syntax:** these ten edited drafts pass isolated strict Clang C++17
  at `-O0` and `-O2` with no native-pointer-to-DWORD casts.
- **Original instruction evidence:** the ten SHA-256 authenticated byte spans
  and selected control-flow and operand contracts are verified privately.
- **Synthetic host test:** mocked byte-addressable guest-memory traces are
  verified; *original Xbox instructions were not executed*.
- **Still unverified:** native Xbox C++ ABI, 32-bit guest-stack allocation,
  register live-outs (including EDX), actual guest VA mapping, native PC
  cross-function linkage, gameplay and byte-for-byte rebuild parity.

This batch does not introduce demonstration/gameplay assets or redistribute
original retail game content. Progress charts must be updated only from a
completed exact-tree full Clang C++17 audit.
