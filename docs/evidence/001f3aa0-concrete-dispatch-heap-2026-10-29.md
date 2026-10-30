# Original 0x001F3AA0 concrete branches, heap table, and entry ABI

Date: 2026-10-29 (local) / 2026-10-30 (UTC).
Authenticated original Brute Force Xbox executable SHA-256:
`b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`.

**Scope: tested original guest x86 operations and bounded caller links.
Not complete original function behavioral parity or native host linkage.
The original Ghidra draft remains unchanged and syntax-failing.**

## Evidence-backed heap table recovered from initialized original XBE

The section-aware, read-only verifier
`scripts/verify_002b8c60_heap_xbe.py` passed on the private XBE.
It confirms **two complete original bodies, three initialized guest
function pointers, and 22 machine-code instruction windows**.

| Guest table | Initialized function VA | Original behavior |
| --- | --- | --- |
| `0x003BC650` | `0x00237EA0` | allocation wrapper |
| `0x003BC654` | `0x00237EC0` | free wrapper |
| `0x003BC658` | `0x00237EE0` | alternate free wrapper |

These are *initial image values*, not proof that no in-game code or
XDK initialization may patch them. Each C11 invocation **reads the
current guest table entry** and explicitly refuses an unexpected
target rather than silently executing a guessed host allocator.

Original `0x00237EA0` reads its guest size at `[ESP+4]`.
With size zero it returns EAX=0 without allocating. Otherwise it
pushes size and zero, calls `0x002F77F3` (which reads the actual heap
handle at `0x004A90D4`), pushes that handle and calls
`0x002F6E31`. The original stack argument layout is:
heap-handle, zero, requested byte count. The nested callee must return
with original 12-byte argument cleanup before the wrapper's `RET`.

`0x00237EC0` follows the same heap-handle preparation but invokes
`0x002F77DC`, whose original body calls `0x002F75E8`.
`0x00237EE0` uses `0x002F648F`. The original direct
`0x002EA018` free thunk jumps to `0x00067BF0`, whose indirect
`JMP [0x003BC654]` selects the *current* free function.

`src/guest_cpu/bf_heap_wrapper_guest.h` reconstructs those
verified guest call boundaries. Deeper heap manager semantics,
allocation failures, synchronization, heap metadata and Xbox SEH
remain delegated to explicit guest callbacks.

## Original 0x002B8C60: conditional/direct/virtual dispatch

Body SHA-256
`45044552c47c60822ffc7fb5b55ef43725b60a3ea810014aeb8184c35affc9ba`.

`src/guest_cpu/bf_002b8c60_guest_dispatch.h` replays original:

- `TEST EAX,EAX; PUSH EBX`. If EAX is zero the code **still**
  reaches `MOV ECX,[EAX+4]`; a guest null-pointer read can fault.
- If EAX nonzero, read original guest flags at `[ESI+8]` and
  evaluate bits 1, 2 and 4 in their original short-circuit order,
  including byte reads of `[EAX+0x70]` and the guest pointer
  `[EAX+0x18]` where required.
- Type DWORD at `[EAX+4]` selects direct
  `CALL 0x002B89F0` when type=3, or virtual
  `CALL [[ [EAX+0x7C] ]+0x18]` when type=2.
  The type=3 target's original `RET 8` is verified at
  `0x002B8C52`. Virtual method identity is not fabricated.
- Two original PUSHed guest arguments and CALL return word are
  actually written. The callee must provide the expected next
  EIP and RET-8-cleaned ESP before the original EBX POP/RET.

## Original 0x001F35B0: verified early exits and first allocation

Body SHA-256
`3e7d18910aab35a23ed5e3edc448ae54a4b9c87ee9dba44a74cfb5f02a706fad`.

`src/guest_cpu/bf_001f35b0_entry_gate.h` reproduces entry
`[ESI+8]`, `SUB ESP,0x60`, saved EBX/EDI, the
`[ESI+0x38] -> [+0x110] -> [+8]` nested pointer checks, the
conditional `[ESI+0x14]=0`, and the original `RET 4`.

When the nested child is nonzero it returns an explicit
`NEEDS_ALLOCATOR` state at original PC `0x001F35E4`;
it never pretends to finish the constructor.

`src/guest_cpu/bf_001f35b0_first_allocation.h` then reconstructs
the *first* nested allocation call:

`0x001F35E4 -> 0x002EA01D -> 0x00067CD0 ->
[0x003BC650] -> 0x00237EA0 -> 0x002F77F3/0x002F6E31`.

It models the original PUSHed 8-byte request, the helper's
one and size arguments, the intermediate return addresses, the
heap call at guest ESP minus 28 bytes, and the correct ESP on
return to `0x001F35EE`. It explicitly requires a real guest
heap manager callback beyond the default wrapper.

**Remaining constructor body:** instructions after
`0x001F35EE`, including the `0x002B4710` initializer,
second `0xA0` allocation, `0x002CCC70` constructor,
`0x002C00D0` state setup and original indirect free.
The early-exit and initial allocation bridges do not claim to
implement these paths.

## Original 0x001F3AA0 guest entry and caller integration

`src/guest_cpu/bf_001f3aa0_guest_prologue.h` reconstructs
`0x001F3AA0..0x001F3AB5` from original guest registers:
PUSH saved EBP, 16-byte ESP alignment, EAX=0x20A8, original
`CALL 0x002EBEA0` probe, PUSH saved ESI and EDI. The exact
post-probe guest ESP is `(EBP & ~15)-0x20B0`, agreeing with the
earlier proven x87 producer frame. It never modifies the host stack.

`src/guest_cpu/bf_001f3aa0_concrete_router.h` links the
already reconstructed original `0x001F3AA0` conditional
guest tail to the now concrete branch and heap-wrapper paths.
Known early exits execute directly; an unresolved constructor
branch **fails closed** at its original PC. The direct gameplay
call and guest-dependent virtual targets remain explicit
deep-callee callbacks. Runtime-patched heap pointers are
also refused, not assumed identical to initialized XBE values.

## Tests and remaining gates

GitHub Actions focused run `40984784032` passed
Clang C11 `-O0`, `-O2`, ASan and UBSan:

| Bounded test | Assertions per optimization |
| --- | ---: |
| 0x002B8C60 guest flag/dispatch | 1,408 |
| Initialized heap wrapper | 95 |
| 0x001F35B0 early exits | 653 |
| 0x001F35B0 initial nested allocation | 39 |
| Actual 0x001F3AA0 conditional/heap router | 261 |

The original `0x001F3AA0` prologue tests passed **643
assertions per optimization** plus sanitizers in focused CI
run `40985205190`.

Still required before changing original
`src/main_unclassified/band_001f/0x001f3aa0.c`:

1. Reconstruct the rest of `0x001F35B0` after the first
   allocation; its constructor and indirect guest free.
2. Reconstruct enough of `0x002B89F0` and identify each
   runtime virtual target used by type=2 to validate full
   caller-side data effects.
3. Recover deep `0x002F6E31`/free implementations or supply
   verified Xbox guest heap execution; do not map raw VA directly
   to host malloc/free.
4. Verify saved registers, guest flags, Xbox x87/MXCSR control,
   fault restart and SEH across connected original bodies.
5. Only then replace the Ghidra draft with an original-ABI-safe
   C11 function implementation. Syntax alone cannot establish 1:1.

**Whole-tree published audit:** 13,636/13,694 isolated C11 syntax
passing, 58 failing, 99.58%, zero original-body provenance
mismatches. These separate guest execution headers do not yet
reduce the original-function failure count.
