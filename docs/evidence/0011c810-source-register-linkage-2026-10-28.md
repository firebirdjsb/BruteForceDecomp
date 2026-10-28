# 0x0011C810 — C-source producer register pointers and guest storage connection

**Scope:** two real original-entry C11 draft implementations, a host-only register
interface, and one guest-VA callback bridge. **Not** completion of the original
`0x0011C810` caller, Xbox executable compatibility, a 1:1 math oracle, virtual
method identification or a full ABI conversion.

## Provenance and change rationale

Pinned original executable SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Previously authenticated original ordered body digests, retained in existing
source headers and the prior notes:

| Entry | Original body SHA-256 | Observed live original registers |
|---|---|---|
| `0x0001D0C0` | `799425F204B00DB36DEC83019E43890E71D10113DC10721CB8A2EFE0CAA969A4` | EAX → three scalar input DWORDs, ECX → 36-byte nine-DWORD result |
| `0x0012B2A0` | `C5BD3DE3ABD46F47CA74FCBCF49E2399087B322B7E4BC54DADA22C6FF89EED1E` | EAX → 12-byte result, ECX → three input DWORDs, EDX → nine input DWORDs |
| `0x0011C810` | `A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255` | original fixed-frame `S` layout and two virtual calls described below |

Historical instruction verification: `docs/evidence/0011c810-deferred-register-output.md`
and `docs/evidence/0011c810-matrix-frame-copy-2026-10-28.md`.
No original XBE was loaded for this pass. The optional private `--xbe` runner
checks the exact original source-body digests; public CI cannot independently
reauthenticate the game bytes.

## New C11 source repairs

`src/main_unclassified/band_0001/0x0001d0c0.c` now receives its original
EAX/ECX **input and output pointers explicitly** in host C parameters.
`src/main_unclassified/band_0012/0x0012b2a0.c` now receives its original
EAX/ECX/EDX pointers explicitly. Both previously used uninitialized pseudo-
register locals, so their arithmetic silently consumed undefined host values.
The *existing arithmetic, output-store sequence, original labels, and Xbox body
hashes are retained.* `include/bf_0011c810_register_calls.h` declares only the
host-C pointer representations; these are **not original cdecl prototypes**.
Do not call them directly from other untranslated C entries unless that
caller's actual register sources and guest memory translation are verified.

## Connected storage projection

`src/abi/bf_0011c810_guest_producer_bridge.c` links the **real newly parameterized
producer functions** into a synthetic guest stack-frame callback, unlike the
prior byte-copy-only model. It requires supplied original guest `S`, input
`virtual_eax` (the still-unresolved first `+0x30` virtual call result), and
caller-managed guest read/write callbacks. The successful-state flow is:

1. Read three raw binary32 words at `virtual_eax`, run `FUN_0001d0c0` on the
   actual source C, and write 36 bytes to guest `S+0x68`.
2. Invoke the previously tested actual 16+16+4-byte memory copy from guest
   `S+0x68` to `S+0x38`. Do not touch `S+0x5C..S+0x67`.
3. **Only after** the second virtual call and the caller's observed vector
   stores, read the three input DWORDs at `S+0x28`, and nine matrix DWORDs at
   `S+0x38`. Invoke the original `FUN_0012b2a0` C body with EAX/ECX/EDX as
   explicit host values. Write the outputs in original destination order:
   `[S+0x14]`, `[S+0x0C]`, `[S+0x10]` (+8, +0, +4 relative to `S+0x0C`).

Guest addresses are never cast to host pointers. Read/write callbacks own
memory mapping. The bridge performs 4-byte IEEE754 host storage and native
SSE arithmetic, **not a complete guest CPU interpreter**. In particular, its
block guest reads/writes and host-C return/flag behavior are not proven to
match original x87 precision, fault timing, MXCSR, NaNs, FPU exception state,
register preservation, pointer aliases, or Xbox SEH delivery. The first and
second indirect virtual call targets, their receiver/return ABI, and their
effects on the guest frame still need authentic original-byte analysis. The
bridge is NOT invoked from `FUN_0011c810` until that is established.

## Tests and remaining gate

`python3 scripts/verify_0011c810_source_register_links.py --root .` checks
real linked original C source at O0 and O2 with **4,109 successful/failure
scenarios** per build and **81,949 test assertions** per build, plus scoped
Windows x86/x64 interface typechecks. It compares deterministic matrix/vec
outputs with an independently written host-C dot-product reference, observes
36-byte equality, unchanged trailing scratch storage, exact successful
3-word output indices, and callback error prefix behavior. It does NOT test
native Xbox vs host float equivalence or fault/flag replay. The complete host
Clang sweep after the integration must be reported separately; no original
caller syntax pass or ABI completion is claimed here.

**Remaining blocker:** identify the original virtual slot `+0x30` target and
its real register/stack protocol, then reconcile `0x0011C810`'s second virtual
call, caller ESI/stack alias lifetimes, x87/ST(0) semantics, and its full
entry/return contract before replacing its unverified C draft. Native cross-
function linkage and Xbox-to-PC guest memory implementation remain incomplete.
