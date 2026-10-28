# Deferred cursor/virtual-call interface at 0x002c2a20

This is an instruction-evidence handoff, not a repaired or verified function.
The source remains unchanged. Both focused Clang targets reproduce the
undeclared `register0x00000010` diagnostic. Replacing it with an arbitrary
host local address would leave the producer's actual EAX input and both
ECX/x87 virtual-call interfaces missing.

## Authenticated original inputs

The original whole-XBE SHA-256 was rechecked as
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Section-mapped ordered function bodies independently match their exports:

| Entry | Bytes | SHA-256 |
| --- | ---: | --- |
| `0x002c2a20` | 1,121 | `C41FE2FA640E68D9B56E7F4885B7E7D3153FB5FC79FDEF77CC1F0967713DB9DB` |
| `0x002d4e50` | 63 | `DC401CD4D1166B2C4655B3C40D97ADBF636626DA7638115661A2082747EC9389` |
| `0x002b6640` | 103 | `F6340C78D440C62731EA5178275001795009B2411379533260958D483F53376F` |
| `0x002b65a0` | 145 | `56854F87AF82B0B8E08A44E207A2E58F986F8AABF682B977260B6DE0EFE031B4` |
| `0x002b8d10` | 77 | `51CED97F607CBAA8833A6E2C7597C524B12F22852A55832D95D6C575CA7AC49D` |

The inspected C source SHA-256 is
`2C94D31250486857BFFA25272A2725A62A1ECB6AE906CD04B5FEB360288EBD83`;
`bf_ghidra_types.h` is
`6384D53B96D88A8A6A1BBB7A3FB205DE4F3F9C1F7C8A17B6696596BB61B51B1F`.
Source conclusions must be revisited if either changes.

## Observed producer and cursor facts

Let `S` be ESP after `SUB ESP,0x9c` and four saved-register pushes.
The two caller stack arguments are at `S+0xb0` and `S+0xb4`.

- `0x002c2a2a..39` pushes the actual guest address `S+0xa4` and loads
  EAX from the first argument before calling `0x002d4e50`. Its interface
  includes EAX=self, one pushed output address, and `RET 4`.
- The producer preserves EBX/ESI/EDI. For `i=0,1`, it reads a 20-byte
  record beginning at `self+0x10+i*0x14`. From that record, `+0` is a
  pointer and `+8` is a packed word. It reads ECX through
  `DWORD[DWORD[record_pointer+0x14]+0xa4]`, then EDX from `DWORD[ECX]`.
  The pushed argument is `BYTE[(packed_word & 0xfffffff0)+3] & 0x1f`.
  `CALL DWORD[EDX]` returns the EAX word stored at output `+i*4`.
  These two indirect targets and their complete side effects are unresolved.
- `0x002c2a48..57` puts `S+0xa4` in EDX, stores it at `S+0x68`,
  and puts `S+0xa8` in EBX. Each loop reads its current object from
  `DWORD[DWORD[S+0x68]]`, and tests that object's DWORD at `+8`.
- `0x002c2d8f..9f` adds four to the cursor in `S+0x68` and subtracts
  four from EBX. Thus the current objects are output words 0 then 1;
  the later EBX-based objects are words 1 then 0. The pseudocode's
  predecremented `puVar3` is a lost EBX/frame relation, not entry register 0x10.

The producer's current C definition has an uninitialized `in_EAX` pseudo-local
and only one declared parameter. Calling that definition with a host array
does not supply the observed EAX input or model its guest stack/indirect calls.

## Direct helper and two virtual calls

At `0x002c2abc`, `0x002b6640` consumes three stack words: destination
`S+0x34`, source `S+0x7c`, and the previously loaded pointer
`DWORD[self+0x40]`. Both vector arguments consume exactly twelve bytes.
The source contains the float words read from the selected object at
`+0xfc/+0x10c/+0x11c`. The fourth words at `S+0x40` and `S+0x88`
are explicitly zeroed; they are not evidence for additional helper arguments.
`0x002b6640` never writes EDX and ends in `RET 0xc`.

Consequently, EDX at `0x002c2b0d` is the current cursor object loaded at
`0x002c2a64`. `MOV ECX,EDX; CALL DWORD[DWORD[EDX]+4]` uses that object
as ECX and leaves ST(0), which is spilled to four bytes at `S+0x10`.
Then `0x002c2b18..1c` loads ECX from `DWORD[EBX]` and calls
`DWORD[DWORD[ECX]]`, again obtaining ST(0). The second extended result
is multiplied by the first result's f32 spill. Neither call pushes a source
argument. An integer-returning generic `code` call cast to `float10` does
not reproduce either interface.

## Additional scoped findings for the eventual repair

- `0x002c2afe` is `SQRTSS m32`; the draft's undeclared `SQRT` call
  currently acquires an implicit integer return under permissive sweep flags.
- The matrix vector at `0x002c2b6b..bd0` first spills three x87 products
  to f32, then performs separate `MULPS` and `ADDPS`. Packed `MOVHPS`
  words are float bits, not numeric conversions from `uint64_t`.
- `0x002c2bfe` spills the dot to f32 but retains its extended value for
  `FABS/FCOMP`. The accumulation at `0x002c2bec..bfc` is `(X+Z)+Y`.
  The comparison skips the update when the absolute dot is below, equal to,
  or unordered with the bound; the bound is already spilled to f32.
- `0x002c2d40..60` accumulates `(Z+Y)+X` before storing `self+0x38`.
  `0x002c2d63..8c` accumulates `(Y+Z)+X` before storing `self+0x3c`.
- `0x002b6640` and `0x002b8d10` still have independent packed-word
  numeric-cast problems in their current source definitions. They were not
  edited in this scope. `0x002b65a0` already has a typed SSE draft.
- The final `0x002b6500` ST(0) forwarding and zero ST(0) exit remain
  correctly identified; that prior return correction must be retained.

## Boundary and next gate

No source edit was made to obtain a syntax pass. A truthful complete repair
requires a source-linked producer interface preserving the EAX input,
actual guest output slots and its two indirect calls, followed by explicit
ECX/ST(0) handling for the caller's two virtual calls. A function-specific
guest operation could provide this once connected to an actual executor;
inventing host arguments or default return values is not that connection.

Focused checks used the exact `tools/sweep_c11.py` FLAGS with
`i686-pc-windows-msvc` and `x86_64-pc-windows-msvc`, absolute Clang executable,
and the repository include directory. Both still fail at the same pseudo-
register line. This is one bounded investigation with no implementation or
repair retries. No behavior, linkage, original-machine differential test,
or byte-identical rebuild is claimed. Guest memory, complete calling ABI,
x87 control/status and MXCSR remain `ABI_UNVERIFIED`.

Only this evidence note is new. No original binary, asset, process, save,
deployment target or production data was changed. Rollback removes this note.
