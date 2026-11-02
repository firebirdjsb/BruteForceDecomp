# C++17 XNet source-matched forwarders — 2026-11-01

Baseline: strict exact-tree audit at 249bf3e288f073d2ba825eea56e6e10684f02c32: 3,906 / 13,694 passing, 9,788 failing, zero reported provenance errors. Staged from main e23c00c45d99f364d45d6b086ca32da49173953b.

**No original retail XBE bytes were available in this execution environment.** Required retail SHA-256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721. Original-body SHA labels are checked against the audited source only, not independently reauthenticated from machine code.

Ten XNet forwarder callers now have only an exact declaration copied from their existing callee draft: undefined4 FUN_xxxxxxxx(void). Each call remains zero-argument, with no body change or guessed register/stack input. Every declaration remains ABI_UNVERIFIED and does not establish original Xbox linkage or 1:1 behavior.

Caller -> callee: 00344fd9 -> 00344fb7; 00344fe4 -> 00344fc8; 00344ffa -> 00344f20; 00345005 -> 00344f31; 00345010 -> 00344f42; 00345049 -> 00344f7f; 00345054 -> 00344f90; 00345063 -> 00344fa6; 0034506e -> 00344f70; 003451ac -> 0034516d.

Repeatable regression: python3 scripts/verify_cpp_xnet_source_forwarders.py --root .

The verifier checks source SHA-256 preimages, original-body digest labels, callee draft signature spelling, unchanged one-call bodies, Clang++17 O0/O2 syntax, and declaration-removal negative controls. Local preflight passed 10 negative controls and 20 isolated positive checks with a reduced compatible header; strict exact-tree CI must establish the real-header and repository-wide result.

**Quarantined:** all XNet wrappers with callee-draft arity mismatches, hidden ECX/register producers, stack cleanup, return outputs, guest32 pointer storage, virtual/indirect calls and native linkage. No new Xbox instruction-level evidence was produced in this run.

Retail-only boundary unchanged: preserve original retail code in BruteForceDecomp; exclude independently verified demo-only code and assets only at the future Reloaded packaging boundary.
