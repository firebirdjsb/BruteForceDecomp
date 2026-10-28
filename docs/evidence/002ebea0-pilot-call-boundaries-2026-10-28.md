# 0x002EBEA0 — explicit CALL-boundary integration for two verified pilot callers

Status: **scoped C11 call-boundary adapter, not a full caller repair or native
PC bridge**. Original caller C11 drafts remain unchanged and syntax-failing.
Complete ABI, dynamically allocated caller data, fault delivery, x87/SSE
state and native behavior remain **UNVERIFIED**.

## Evidence used

- Pinned Xbox original XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Prior authenticated original 0x002EBEA0 65-byte body SHA-256:
  `B77AD187F6F3DB2A5AE4F8E214B023D7C62CE25A38CE769A993D2A8C81643760`.
- Prior instruction and caller analyses in
  [`002ebea0-pilot-callers.md`](002ebea0-pilot-callers.md) and
  [`002ebea0-stack-effect.md`](002ebea0-stack-effect.md).
- Caller `0x002C2530`, original body
  `768031773DC47284A6EB2AFD03A23E9C6DD05455E305C06FB7D633D05F890A8C`;
  CALL at `0x002C255B` (`E8 40 99 02 00`) resumes at `0x002C2560`.
- Caller `0x0033FA74`, original body
  `1887D95A6576F22A26249023BE961860E83B5CE9A7F63577488431D44A2CAAE2`;
  CALL at `0x0033FB4D` (`E8 4E C3 FA FF`) resumes at `0x0033FB52`.

The prior audits established that both original callers have pre-CALL
`ESP = EBP-0x20`. The executed CALL itself then pushes a 4-byte return
address at `EBP-0x24`. The probe model already computes its own exact
post-return stack state; for successful requests of `N` bytes the result is
`ESP = EBP-0x20-N`. **The return value in EAX is not the scratch address.**

## Implementation

New `include/bf_x86_stack_probe_pilot_callers.h` binds the existing
`include/bf_x86_stack_probe_002ebea0.h` model to these *two* call sites.
Inputs are the original guest EAX, ECX, ESP, EIP, EFLAGS, their definedness,
real guest EBP, and a caller-supplied guest DWORD memory backend. No host
pointer is ever inferred from EBP, and no global guest-register variables
are fabricated.

The adapter rejects synthetic frames whose EAX, ESP or call EIP contradict
the observed original call boundary, then models the original CALL's return
DWORD push using the same memory callbacks. Only if that push succeeds does
it invoke the existing exact-address probe model. It reports the probe's
original EIP and register/fault prefix unchanged and supplies a guest scratch
VA **only** on successful probe return. On a fault while pushing the return
DWORD, the CPU-side ESP/EIP remain at the caller's CALL; a callback may still
have performed part of a write, which is not rolled back.

Caller-specific expression recovery:

| Caller | Request | Allocation branch |
| --- | --- | --- |
| `0x002C2530` | `(sign_extend_i16(length) + 3) & ~3` modulo 2^32 | Always CALLs; even zero or negative signed lengths are not clamped |
| `0x0033FA74` | `(length + 3) & ~3` modulo 2^32 | Only if `capacity < length` unsigned; on bypass no helper/callback runs |

The `0x002C2530` signed input and high unsigned length corner cases are
preserved exactly in the boundary calculation; no guessed size limit is added.
The model's existing memory callbacks retain each page probe's width/order,
original saved ECX, relocated return DWORD and fault prefix.

## Validation

`python3 scripts/verify_002ebea0_pilot_callers.py --root .` performs strict
header-integrated Clang C11 syntax checks for `i686-pc-windows-msvc` and
`x86_64-pc-windows-msvc`, then builds and executes portable pilot fixtures
at `-O0` and `-O2`. Tests cover zero and 1..3-byte allocations, page
boundaries, large requests, original signed-WORD negative/wrapping cases,
unsigned capacity bypass, invalid synthetic entry state, the CALL write
fault, a small-size probe fault and a page-probe fault. Probe state and
return-address reads are checked without invoking host stack allocation.

Pass `--xbe /path/to/private/original/default.xbe` to reauthenticate the
original full-XBE SHA-256, both original CALL opcodes and the 65-byte probe
body before running tests. The private XBE is not available to public CI,
so that optional binary verification is **not** claimed for CI.

These tests exercise *only* the two documented CALL boundaries. They do not
execute either complete caller, prove the original length/capacity producer
inputs, prove the `0x002CD2B0` hidden output register or the online data
buffers, verify guest exceptions, or implement guest-to-host address mapping.
No source C11 syntax count or 1:1 game completion percentage is advanced by
this adapter alone. Future source integration must route original caller
registers and the guest memory map into this boundary, then retest the
whole caller and its connected downstream helpers.

## Next dependency work

1. `0x002C2530`: connect the actual EAX/EDX/ESI producer/output contract of
   `0x002CD2B0` and the scratch-map byte indices; preserve the `REP STOSD`
   and trailing byte writes and original signed length behavior.
2. `0x0033FA74`: connect the actual XOnline returned record and its owner
   copy-out buffer, both lifetimes and cleanup; no guessed `VLA` or `malloc`.
3. Float/pointer storage: prioritize `0x000DD380` only after its
   `0x0001F9C0`, `0x0001FD40`, `0x002333B0`, `0x002334B0` register output
   boundaries can transport the actual 12/36-byte storage and x87 values.
4. Indirect output: prioritize the `0x00282360` guest low-address artifacts
   and `0x001FEB60` parser dispatch source; do not treat pseudo-symbols as
   real absolute guest RAM until original loads prove it.

Only the new adapter, tests, runner, this note and the focused CI hook are
changed. Existing entries, original body digests, source inventory and
coverage metrics are preserved. Rollback removes the new files and CI step.