# C++17 evidence-gated direct-call queue: 0x000F6890

- Starting main: `904a672619390272ee154874acbcbea9a4018780`.
- Latest completed exact-tree audit at start: `9869fd661af94113763d8bd6c60c89633ca2c908`, 3,629 / 13,694 strict host C++17 syntax passing (26.50%), 10,065 failing, zero reported body-hash mismatches. This is **not** an Xbox ABI or game completion metric.
- Source candidate screen: 38 original E8 caller/callee pairs checked against the user's retail XBE. Five representative source snippets received isolated C++17 declaration preflights; four were quarantined on subsequent errors or unsafe ABI assumptions. One full original source was restored byte-for-byte from the audited source SHA and preflighted with only two declaration additions.
- Source repaired: `src/main_unclassified/band_000f/0x000f6890.cpp`. Its original source SHA-256, after removing the inserted declaration block, is `4b7ca35de28a78c96635f142e4d1f23e364e7d8123a985cb5761433ea74f7b62`. Its original x86 body SHA-256 label remains `1993716E6519BE146F9F99FDB6F84E67025563DAF222D7A9AA556F90A2A571E7`. No original function-body statements were changed.
- The original retail XBE SHA-256 is `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`, authenticated locally. The XBE and complete disassembly are **not** committed.
- `scripts/verify_cpp_20261101_27_direct_edges_xbe.py`: 27 original E8 CALL sites, eight narrow instruction windows, 108 independent displacement mutation negatives, and modified-XBE rejection when the private binary is available.
- At `0x000F68B2` XOR EDX,EDX, `0x000F68B6` SETE DL, and `0x000F68B9` MOV EAX,EDI precede `0x000F68BB` CALL `0x0010C7D0`. `0x000F68C0` CALL `0x000F6850` follows immediately. The latter callee reads ESI and has plain RET exits at `0x000F6886` and `0x000F688B`; the first has a plain RET at `0x0010C84E`. These facts **do not** recover a host C++ calling convention or virtual-dispatch layout.
- Focused preflight: Clang++17 O0 and O2 syntax on the exact `0x000F6890` source with source-matched declarations, plus separate deletion controls for both declarations. No host cross-function link or game execution was claimed.
- CI runs source SHA restoration, strict isolated syntax and binary-free E8 fixtures before its existing single full 13,694-file syntax audit. The README percentage is not changed by this batch.

## Quarantined candidates (no speculative repair)

- `0x001001A0 → 0x000FFB00`: the original CALL has no immediate argument push while the callee reads a caller stack word and uses RET 4. A draft `int(int)` declaration alone cannot establish the actual stack contract.
- `0x000F13C0 → 0x000FFB00`: the direct CALL/RET4 evidence matches, but isolated C++17 still rejects a separate indirect virtual call with a draft-only argument signature.
- `0x001463C0 → 0x001301E0`: the callee uses implicit EDX/ECX; the caller's separate virtual call remains unparseable without verified target/signature evidence.
- `0x0017D520 → 0x00234C90`: the original callee consumes EAX/EDX; the draft still assigns a native pointer to a guest DWORD, requiring a guest-memory contract.
- `0x001050A0`: three source-matched declarations expose a separate unresolved virtual call; no guessed indirect signature is accepted.
- `0x000E45F0`: native pointer-to-32-bit narrowing remains a separate guest32 storage issue.

## Verification boundary and next queue

Host C++17 syntax, original E8 destination evidence, original Xbox register/stack ABI, partial host linkage, and 1:1 game behavior are separate milestones. Preserve `ABI_UNVERIFIED` until original instruction evidence establishes guest register/stack inputs and indirect virtual targets. Next high-impact queues: source-matched independent calls that genuinely pass Clang, 32-bit guest pointer/storage aliases, and `0x0027E5F0 → 0x0027E580` EAX return contract. Do not publish new README coverage until the complete exact-tree audit finishes.
