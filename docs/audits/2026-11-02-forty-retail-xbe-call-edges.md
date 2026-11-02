# Forty authenticated retail-XBE direct-call evidence records (2026-11-02)

- **Original retail XBE SHA-256:** `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`
- **C++17 exact-tree audit:** `e14f3b1c2c103e7af7b9dbc7a5cf8913b18d96f3` — 3,934 / 13,694 syntax passing, 9,760 failing; 28.73%. This is **not** an Xbox ABI or behavioral percentage.
- **Repository starting HEAD:** `a9c27395e92eea62d13d7a73f1f5564cf970573c` (progress publication after the audited source commit).
- **Scope:** 159 source-prioritized, single-error C++17 declaration candidates with matching draft arities. Original caller and callee body SHA-256 labels were checked against the authenticated private XBE, and raw E8 relative targets were checked. 134 candidates had both body hashes and an E8 target candidate; 20 lacked a matching direct E8/complete body combination and five caller body digests could not be reconstructed from a contiguous mapped range. Independent linear `objdump -m i386` alignment and terminal RET screening retained 127; seven lacked a terminal RET at the recovered body boundary.
- **Published evidence:** 40 distinct direct E8 sites with mapped callee addresses and 26 distinct specific terminal RET sites, including seven `C3` and 33 `C2 04 00` *call edges* (not necessarily unique callees). The manifest is `scripts/verify_cpp_20261102_40_xbe_edges.py`.
- **Negative controls:** all 40 original E8 displacements were independently bit-mutated in private local verification; all 40 rejected the original target. The public CI test generates synthetic E8 encodings and rejects mutated targets without needing the user's XBE. The local private verifier also checks the exact retail XBE hash and each original E8 and selected RET opcode.
- **Source repairs:** zero. No game-function body, guest32 pointer, prototype, class layout, README progress, retail content or demo content was changed. Source-only declaration candidates that failed argument/return/storage compatibility were quarantined rather than guessed.

## Private verification

Run with your legally owned retail executable, outside Git:

```sh
python3 scripts/verify_cpp_20261102_40_xbe_edges.py --xbe /private/path/to/default.xbe --self-test
python3 tests/test_cpp_20261102_40_xbe_edges.py
```

The XBE and full disassembly must **never** be committed. This script checks exact E8 destinations and selected RET instructions, **not** all exits, register producers, stack argument identities, virtual dispatch, host linkage or runtime behavior. The C++17 draft signatures remain `ABI_UNVERIFIED`. An original E8 call-site match alone does not authorize a C++ forward declaration or a host pointer cast.

## Next evidence-needed queue

Reconstruct the 32-bit guest stack/register producers and callee output contracts for the screened calls, prioritizing repeated pointer-versus-DWORD mismatches and consumed `void` draft returns. Keep SEH, x87/SSE, indirect calls and virtual dispatch in separate original-instruction evidence queues. Re-run exact-tree C++17 syntax only after safe source edits; never infer syntax gains from these evidence records.
