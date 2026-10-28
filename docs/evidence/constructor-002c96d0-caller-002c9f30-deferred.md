# Constructor memory operation and deferred 0x002c9f30 caller

Status: corrected the observed constructor memory operation in `0x002c96d0`
and shared the single `0x002c9670` operation. Original entry/body digest labels
are retained. The register-entry wrapper remains explicitly ABI_UNVERIFIED.
The `0x002c9f30` caller is unchanged and remains a failing draft.

Original XBE SHA-256 was freshly verified before evidence extraction:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Complete ordered bodies were authenticated against their embedded digests:

| Entry | Bytes | SHA-256 |
| --- | ---: | --- |
| 0x002c96d0 | 63 | `8066F33FAC9D0D9BAA4B6ABB27B2A7320DE5406A81F104138B66B42CE6891A3C` |
| 0x002c9670 | 82 | `9B0B442FD1D95B52E3DEBB9224E07DC4C5FE97B6F8258736224D80D0B6148FCE` |
| 0x0001fe40 | 48 | `10326531DB91F3B5A10AD875D2E6EA19BF6D71E1E1CB0CBDD0E648226C7E8480` |
| 0x0006eef0 callback | 10 | `C30D42FBE765429458E815F92F0A11B6F9E264FAF84A35CE18A82D1312856256` |
| 0x002c9f30 | 1334 | `58FB9207C4B4739C0DCF2E7FD003047DE875ED0584C23CB047DE4EDFE6BFCF17` |

Observed constructor contract:

- `0x002c96d1` loads the first stack argument as output receiver.
  `0x002c96fc` loads the second stack argument into EDI; `0x002c9700` binds
  ECX to the output before calling `0x002c9670`. RET 8 consumes both words.
  The former one-argument C draft discarded the source and left output
  production dependent on unbound registers.
- Each of 21 blocks starts at output+0x68+n*0x40. The fixed call
  `0x0001fe40(block,0x10,3,0x0006eef0)` binds ECX to each successive
  0x10-byte record before invoking the callback. That complete callback
  only sets EAX=ECX and stores DWORD zero at ECX+0xc. The constructor now
  specializes those three +0xc/+0x1c/+0x2c writes, then its own +0x3c clear.
  The final four-byte store ends exactly at output+0x5a8. Generic helpers
  and unrelated callbacks are unchanged; other bytes are not initialized.
- `0x002c9670..0x002c967d` stores `[source+0x68]` at output+0, dereferences
  that word at +0x90, reloads output+0, then stores output+4. The signed byte
  at the reloaded address+0x70 selects 21 descending pointer-word stores
  (+0x64 through +0x14) for tag>=8, or 20 descending zero-word stores
  (+0x64 through +0x18) followed by output+0x14=source+0x10. Both paths
  read source+0x60 only after those stores, then write output+0x10.
  The shared operation preserves this order, widths and 32-bit wrapping.

Focused checks: both changed sources pass individual i686 and x86_64 Windows
host Clang C11 syntax using unchanged `tools/sweep_c11.py` flags. Ten native
host-memory fixtures exercise signed tags 7/8/-1/-128/127, exact written and
untouched bytes over the full 0x5a8-byte output, the following boundary word,
receiver return identity, and source/output aliasing that changes the late
source+0x60 read. This is a host operation fixture, not original-machine
execution or a differential comparison. The reproducible
`scripts/verify_002c96d0_constructor.py` runner compiles the actual constructor
and repeats all ten cases at O0 and O2. Fixture allocations are freed; a worker
process releases the Windows library mapping before rebuild/temporary cleanup.

Deferred caller: full diagnostics at `0x002c9f30` have 13 errors, including
float/pointer lifetime confusion and SIMD pseudo-members. Its original frame
has two 0x5a8-byte objects at offsets 0xd8 and 0x680. A candidate repaired local
storage/SSE syntax but independent review rejected its connected routing:
existing `0x002dd8d0` takes host buffers as 32-bit integers and creates guest
self-pointers; `0x002dd650` also stores host pointers into guest DWORDs. No actual
guest ESP/mapping contract connects those objects. Enlarging buffers cannot
prove the complete callback path. The candidate was archived privately and the
caller restored; no made-up guest stack address or zero result was introduced.

Remaining limits: direct guest-memory mapping, original register/stack entry
bridges, fault behavior and full downstream callback interfaces remain
ABI_UNVERIFIED. Syntax and fixtures do not imply a linked Xbox build, original
behavior equivalence or a byte match. Both sources already passed syntax before
this correction, so they contribute no decrease in the failure count. No game
execution, deployment or production data changed. Rollback restores the two source
bodies and removes the new contract/evidence files.
