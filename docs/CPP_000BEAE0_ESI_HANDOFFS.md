# Two explicit guest-word handoffs in 0x000beae0

## Bounded source change

The existing draft's two `FUN_0008f6a0` calls now pass its already modeled
`std::uint32_t guest_esi, std::uint32_t guest_word_0` arguments. Only those two
argument lists change. The original caller definition, declaration, data accesses,
control flow, globals, return spelling and body SHA-256 label stay unchanged.

- First call: guest ESI is the existing scalar `unaff_EDI` plus 4, computed after
  conversion to `std::uint32_t`. Its existing DWORD payload expression is converted
  to `std::uint32_t`, preserving all 32 bits, including values with bit 31 set.
- Second call: guest ESI is the same original EDI word plus 12, computed unsigned.
  The payload is the original zero DWORD, not an invented argument.

These are modulo-2^32 scalar expressions. They do not narrow a host pointer, add
new live-ins, fabricate a callee prototype or implement guest-address translation.

## Original instruction evidence

Original XBE pin:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The private copied-project program memory matches canonical function hashes.
It does not reauthenticate the complete XBE; no original game function executed.

| Entry | Bytes / instructions | Original body SHA-256 |
| --- | --- | --- |
| 0x000beae0 | 90 / 38 | 467C00416FFFD477F0637D475B41F830F4604963F4B047FCB654917302AFC4CB |
| 0x0008f6a0 | 64 / 20 | 339DC70ADE9DA431A03D8964268E2B983BF89DF209448A87B645006C63D4420D |
| 0x0008f6e0 | 61 / 21 | C83564B5BD0C213EA1598C92023CBE67820B89831FC3F077EBE732522791C80E |

The first payload is loaded at `000beae0` from `[EDI+0x10]`. The instruction at
`000beaee` is `LEA ESI,[EDI+4]`; `000beaf3` pushes EAX; the direct E8 at
`000beaf4` targets `0008f6a0`. Its return continues at `000beaf9` with
`ADD ESP,4`, then reaches `000beafc`. The equality branch reaches that same
continuation.

The second ESI value comes from `LEA EBX,[EDI+0x0c]` at `000beaeb`, followed by
`MOV ESI,EBX` at `000beb17`. `XOR EBP,EBP` at `000beaff` supplies the zero word
pushed at `000beb16`. The E8 at `000beb19` targets the same callee, with
`ADD ESP,4` at `000beb1e` and continuation at `000beb21`. All branches and the
final plain RET are within the complete caller body. No CALL_RETURN override,
truncated call continuation or external branch is accepted.

The existing callee consumes ESI and the first stack DWORD: it saves EBX, then
loads that word from `[ESP+8]`, and restores EBX before plain RET. Its only nested
call is `0008f6e0`. Complete raw decoding of both helpers establishes that EDI,
EBP and ESI are preserved and the nested helper does not modify EBX. This
supports the second handoff without inferring a calling convention.

## Gates

Public CI command:

```sh
python3 tools/test_cpp_20261104_000beae0_esi_handoffs.py
```

Optional private replay accepts `--private-export` pointing to the existing
indexed export directory and requires Capstone. Neither replay nor any test
executes raw instructions, a canonical game function, the XBE or game assets.

The gate checks:

- Pinned manifest, exact two-way source reversal, preimage Git blob, canonical
  original body hashes, source layout, existing callee/header hashes and historical
  metadata non-overlap. The earlier seven-caller ESI manifest stays immutable.
- Strict Clang C++17 (`-pedantic-errors`) complete-source parsing and object compilation at O0 and O2.
  Reversing the two repairs must restore exactly two old-arity errors.
- Initialized capture-only fixtures at O0 and O2: edge words, sign boundaries,
  wraparound boundaries, bit patterns and 20,000 deterministic random pairs per
  handoff. Wrong offsets, payloads, swapped arguments and removed calls must fail.
- Raw-byte, address, source and binding mutation controls. The optional replay
  independently decodes all 215 bytes and checks coverage, hashes, ranges,
  instruction lengths/counts, all analyzed override flags, exact flow targets,
  fallthroughs and preserved register corridors. Permanent corrupted-private
  controls reject malformed metadata, changed bytes and CALL_RETURN overrides.

## Explicit remaining limits

This is a syntax/interface-expression repair, not a complete callable or tested
function. The caller still contains an uninitialized `unaff_EDI` pseudo-register,
native pointer dereferences and signed address arithmetic outside the added
expressions. The existing tail's memory load/store ordering and implicit EAX
result are not repaired. Guest/native memory translation, aliasing, flags, fault
behavior, complete caller ABI and runtime linkage remain unverified. Capture
fixtures execute only the added scalar argument expressions against a recorder;
they do not prove the canonical caller, helper implementation, game behavior or
byte-identical rebuilding.

Held nearby candidates remain held: `000d1350` uses native-pointer live-ins that
cannot safely become scalar arguments by narrowing; `0005ebf0` has an original
stack-record cleanup path removed by Ghidra, requiring separate reconstruction.
