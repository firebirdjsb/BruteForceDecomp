# Full C11 audit and instruction-backed repair — 2026-10-26

This is a repository-wide **host Clang C11 syntax and provenance audit**, not
a full original-Xbox behavioral equivalence test or a PC game build.

## Authenticated inputs and completed audit

- Original user-supplied XBE SHA-256:
  `b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`.
- Completed full audit: [workflow run 40369427754](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40369427754),
  checked commit `0d1f485f467e178bb138bcf1cff6b79691d55d3d`.
- Original source inventory: **13,694** functions.
- Isolated C11 syntax: **13,455 pass; 239 fail; 98.25% pass**.
- Embedded original x86 body-hash provenance: **0 mismatched; 0 missing; 0 unindexed**.
- The sweep reports **1,618 C-source SHA-256 drifts from the initial migration inventory**.
  These reflect changed *draft source text*, not changes to original Xbox machine code.
  They require independent behavioral review; they are not proof that a fix matches
  the original 1:1.
- Audit was green because the workflow explicitly expects draft syntax failures;
  it does **not** mean that the game builds, links or plays.

## First compiler error per remaining function

| First-error group | Functions |
| --- | ---: |
| Unresolved guest stack reference | 106 |
| Invalid float/pointer conversion | 55 |
| Invalid member or structure access | 34 |
| Unresolved labels | 19 |
| Other unresolved symbols | 9 |
| Invalid array assignment | 8 |
| Other first errors | 5 |
| Unresolved RAM symbol | 2 |
| Invalid type usage | 1 |
| **Total** | **239** |

These are the **first Clang errors**, not unique root causes. Fixing one error
can reveal another. Previous records of 433/446/499 failures are superseded by
this checked full inventory; percentages must not be updated based on guesswork.

## Instruction-supported repairs in this pass

### FUN_0023A310

The original sequence at `0x0023A3E7` loads the DWORD at
`[ESP+0x14]`. At `0x0023A3FB`, `LEA EAX,[ESP+0x14]` passes the
same guest 32-bit output slot into a virtual method at `+0x10`.
The Ghidra draft's undeclared `stack0xffffffe0` was corrected to
`&appiStack_18[1]` instead of manufacturing a host pointer.

### FUN_0023A590

The original code at `0x0023A63C` loads the actual callback receiver
from `[ESP+0x38]`; at `0x0023A642` it passes
`LEA ECX,[ESP+0x10]` as a four-byte output word to virtual method
`+0x1c`. The output slot is initialized to zero before the call and
read afterward. The draft now uses explicitly named `uint32_t`
callback storage instead of `stack0xffffffd0` and no longer mistakes
a small metadata constant for the receiver.

The paired regression at
`scripts/verify_0023a3xx_schema_output_words.py` checks focused Clang
C11 syntax and source storage in CI; with the private original XBE
supplied locally, it checks **16 authenticated x86 instruction windows**.

## Remaining correctness gates

1. **Guest stack and register contracts (106 first errors):** distinguish
   32-bit input parameters, scratch buffers, by-value aggregate arguments,
   SEH frames, and callback output aliases using actual x86 offsets. Do not
   alias arbitrary host pointers or hide errors with made-up variables.
2. **Float/pointer and SIMD (55 + 8):** recover arithmetic float values
   versus raw IEEE-754 bits; preserve original scalar SSE and x87 operations.
3. **Structure and label errors (34 + 19):** verify access widths and true
   control-flow/call boundaries, not merely source syntax.
4. **Linkage/PC runtime:** verify each callee's Xbox calling convention,
   global memory mapping, imports, input, audio, graphics and 64-bit
   compatibility. None of those phases is comprehensively verified.

Current tracked overall roadmap percentage is a conservative **planning
proxy**, not verified game completion. Only the `main` branch is used.
Under 200 syntax failures requires at least **40 additional net passing
functions** from this 239-failure baseline. Zero syntax failures will still
be distinct from a 1:1 playable reconstruction.
