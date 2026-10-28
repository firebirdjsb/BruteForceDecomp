# 0x0011C810: authenticated original-XBE virtual target and vector lane recovery

**Status:** original instruction/body authenticity verified locally against the user's pinned
`default(2).xbe` on 2026-10-28; a **bounded host C11 guest-memory/dataflow
projection** added. This is **not** full 1:1 machine-code recompilation, whole
function parity, exact x87/MXCSR/exception behavior, or a runnable native PC
port. The 13,694 canonical source drafts and provenance remain unchanged.

## Authenticated original evidence

The private Xbox XBE is **not stored in GitHub**. Locally, SHA-256 of the entire
user-provided XBE is:

`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`

Its sections map the following authenticated original bodies:

| Guest entry | Size | SHA-256 | Role |
| --- | ---: | --- | --- |
| `0x0011C810` | 647 bytes | `A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255` | caller |
| `0x0010FBF0` | 127 bytes through `RET 4` | `76FA58DB21575D08E0CB43636A07DEB374229D553CFF0AAB4F8EE845C63882D1` | concrete vtable `+0x30` method |
| `0x0001D0C0` | 594 bytes | `799425F204B00DB36DEC83019E43890E71D10113DC10721CBA8E72EFE0CAA969A4` | matrix producer |
| `0x0012B2A0` | 93 bytes | `C5BD3DE3ABD46F47CA74FCBCF49E2399087B322B7E4BC54DADA22C6FF89EED1E` | dot-product/three-float consumer |

At `0x00110DAC` the original constructor writes the *base* vptr
`0x0039DBE8` to `[object+0x1B4]`. At **`0x00110DED`**, it replaces it with
the **concrete** vptr `0x0039DCE8`. The related `0x00111E69` body also writes
that concrete vptr. Original mapped `.rdata` verifies:

- `[0x0039DBE8+0x30]` = `0x002BF0A0`; the latter begins `XOR EAX,EAX; RET`.
  This base/thunk case must **not** be mistaken for the concrete method, and
  would not establish the same `RET 4`/EAX contract.
- **`[0x0039DCE8+0x30]` = `0x0010FBF0`**. The original concrete method
  reads two receiver/subobject floats (`[ECX+0x410]` and `[ECX+0x428]`),
  uses x87 intermediate arithmetic and `RSQRTSS`, writes a 3-float vector
  through its pushed output pointer, and then executes:

  ```asm
  0010FC65  8b 44 24 14   mov eax,[esp+0x14]    ; original output pointer
  0010FC69  83 c4 10      add esp,0x10
  0010FC6C  c2 04 00      ret 4
  ```

  For this particular vtable, `0x0011C810` therefore feeds the *real* guest
  address of its first `S+0x28` virtual output directly as EAX to
  `0x0001D0C0` (the original caller does not modify EAX between the calls).
  A later second call uses a different output address, `S+0x1C`.
  The receiver `ECX` of each indirect call is `caller_argument+0x1B4`.

The current GitHub function source inventory has no standalone original C
entry at `0x0010FBF0`; this evidence identifies the original code entry but
**does not silently add a new canonical game function or change progress**.
Canonical function boundaries and cross-function indexing need a separate
inventory reconciliation pass.

### Original three-component register/storage trace

Let `S` be guest ESP after `SUB ESP,0x88; PUSH ESI` in the caller. Let
`P = DWORD[caller_argument+0x6C]`. At the original address `0x0011C8B5`
ESI is the caller argument, and `MOV EAX,[ESI+0x6C]` sets EAX = `P`.
The original x87 load order is: `FLD [P+0x34]`, `FLD [P+0x28]`,
`FLD [P+0x1C]` (the latter uses EAX adjusted by `+0x14`).

| Original store | Actual instruction | Observable final value at source-helper call |
| --- | --- | --- |
| `S+0x30` | `0x0011C8F0 MOV [ESP+0x30],ECX` | x87 `FCHS(F32[P+0x34])` |
| `S+0x2C` | `0x0011C8FE MOV [ESP+0x2C],EAX` | x87 `FCHS(F32[P+0x28])` |
| `S+0x28` | `0x0011C902 FSTP [ESP+0x28]` | x87 `FCHS(F32[P+0x1C])` |

The original success-state scratch stores occur in this order:

1. `S+0x04` receives raw `P+0x34`; `S+0x08` receives raw `P+0x28`.
2. `S+0x14` receives raw `P+0x34`; `S+0x10` receives raw `P+0x28`.
3. `S+0x04` receives negated `P+0x34`; `S+0x30` receives it too.
4. `S+0x08` receives negated `P+0x28`; `S+0x2C` receives it too.
5. `S+0x28` receives negated `P+0x1C`.

At `0x0011C906..0x0011C912`, `0x0012B2A0` then takes ECX=`S+0x28`
(vector), EDX=`S+0x38` (36-byte matrix), EAX=`S+0x0C` (12-byte output).
The helper overwrites `S+0x0C`, `S+0x10`, **and `S+0x14`**. Thus those
scratch slots must **not** be treated as their earlier raw object components
when reconstructing the caller's later scalar branches.

## New bounded implementation and verification

- `include/bf_0011c810_original_vector_lanes.h` stages the original nine
  successful scratch/vector word stores and **verified** lane permutation,
  using only 32-bit guest VAs and callback-based writes. For finite binary32,
  signed zero, subnormal and infinity, its sign-bit inversion reproduces the
  observed FCHS/FSTP numeric *result*; it **declines NaNs** pending original
  x87 NaN payload/invalid-exception analysis. No guest pointer is treated as
  a native host pointer. The existing, separately scoped raw component reader
  currently reads source words in address order, not the original x87 load
  order; callback-fault ordering is **not** asserted to match the Xbox.
- `include/bf_0011c810_concrete_virtual.h` accepts only a runtime-dispatched
  method pointer equal to the verified `0x0010FBF0`. It requires an actual
  supplied scalar-body executor; **without one, it refuses the call** rather
  than producing guessed 3-float results. On successful body completion it
  exposes the original proved `EAX=original_output_va`, `ESP=S` result.
  It refuses the base `0x002BF0A0` virtual method and all unknown vtable
  targets. The method's x87/RSQRTSS computation is **not** implemented in
  this adapter; the regression uses a clearly synthetic scalar executor.
- `scripts/verify_0011c810_xbe_vector_lanes.py --root .
  --xbe /path/to/private/default.xbe --sanitize` reauthenticates the full
  private XBE, original caller and concrete method body digests, original
  constructor write opcodes, guest vtable pointers, method EAX/RET4 and the
  specific original FCHS/stack-store opcodes. It then runs Windows i686/x64
  strict C11 syntax, native Clang `-O0`/`-O2` test binaries linking the
  existing actual C source bodies `FUN_0001D0C0` and `FUN_0012B2A0`, and
  optional local AddressSanitizer/UBSan checks.
- **4,109 scenarios and 147,564 assertions per optimization level**,
  including finite source-to-matrix-to-dot integration, first/second virtual
  EAX and stack-argument identity, actual scratch overwrite lifetimes,
  signed zero, infinity, subnormal, rejection of NaNs/unknown vtables,
  missing scalar body rejection, and faults across nine scratch stores.
- `scripts/test_verify_0011c810_xbe_vector_lanes.py` checks synthetic XBE
  section extraction, hash rejection and pinned opcode guard assertions.

Public CI has **no original XBE**, so its source-only invocation cannot
reauthenticate original bytes on its own; the 2026-10-28 private local run
*did* reauthenticate the user-supplied original. This scoped progress does
not change syntax inventory totals because no game-source draft was modified.

## Remaining 1:1 gates

Recover and validate the concrete `0x0010FBF0` x87/SSE scalar algorithm,
including `RSQRTSS` MXCSR state, x87 precision, exceptions, NaNs and the
original game's FPU mode; confirm reachable concrete-vtable ownership and
alternatives; reconcile the missing separate C function entry; implement the
original object read/store fault ordering and later branch arithmetic;
then compare the full `0x0011C810` game-source repair with the original.
Until that is done the original source and PC native linkage remain
**ABI_UNVERIFIED**. The project's 1:1 requirement is not waived.
