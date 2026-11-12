# Retail x87 stack and control-word epilogues

The starting checkout merged upstream `1edb1560` with no tree differences.
The complete Linux Clang 21 C++17 syntax sweep reproduced 4,138 passes and
9,556 failures across 13,694 drafts. The original-body label audit and the
tracked-tree safety scan reported zero problems. The authenticated retail XBE
is `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The [earlier audit](../audits/2026-11-09-full-cpp17-audit-and-xbe-return-stubs.md)
records the five historical return-only drafts and their exact body digests.

| Original entry | Reconstructed guest effects |
|---|---|
| `0x002F04D0` | `FXCH ST(1)` at the entry, `FSTP ST(0)` at `0x002F04D2`, then a DWORD return-address pop. The original flow at `0x002F04CB` calls `0x002F0591` and falls through into this body. The jump at `0x002F04DA` targets its interior at `0x002F04D2`. |
| `0x002F060D` | Read the DWORD at `[ESP+4]`. EDX becomes `(word & 0x0300) \| 0x007F`. The final OR defines CF, PF, ZF, SF and OF as zero and leaves AF undefined. Store DX as a WORD at `[ESP+6]` and perform a separate waiting `FLDCW` at that address. RET consumes only the return address. The direct CALL at `0x002EBFEF` pushes its return address below the caller's saved control word. |
| `0x002F0696` | Compare the WORD at `[ESP]` with `0x027F`, set the six arithmetic flags, and perform `FLDCW [ESP]` only if they differ. Then pop the whole saved DWORD into EDX and consume the next DWORD as the return address. Original conditional jumps at `0x002EC042` and `0x00306BDD` enter with the saved control word at the top of the stack. |

The C++ entries use explicit 32-bit guest state. The memory and x87 callbacks
preserve the instruction order and report a failure at the instruction that
caused it. The x87 backend owns the 80-bit register and tag state, environment,
pending exception handling and the waiting memory read for FLDCW. The model
reports callback failure without providing guest exception delivery or validating
the return target. Caller integration must also account for the interior entry
at `0x002F04D2`. The three functions retain `ABI_UNVERIFIED` and
`NOT_NATIVE_LINKED`.

The public strict C++17 regression test runs at `-O0` and `-O2`. It covers all
65,536 comparison words, the four prepare modes, access widths and ordering,
guest stack wraparound, and injected failures before and after partial effects.
A local i386 harness extracted the three original bodies from the authenticated
XBE and executed them alongside the C++ models. At each optimization level the
original and the models agreed for 65,536 prepare cases, 65,536 restore cases,
and 100 pairs of x87 operands. The checks covered EDX, defined arithmetic flags,
stack words and cleanup, x87 control words, and the surviving x87 stack values
and status in the pop cases. The harness used the host's x87 hardware and tested
normal completion with cleared pending exceptions. It supplies no evidence for
guest exception delivery or a linked game.

The structural review queue fell from 538 flags to 535. The remaining two
return-only entries are `0x002ECC14` and `0x002EF9EA`. The full-game 1:1 count
remains unmeasured.
