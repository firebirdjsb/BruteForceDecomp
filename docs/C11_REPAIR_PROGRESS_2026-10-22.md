# C11 function-by-function repair progress — 2026-10-22

## Commits confirmed on private `main`

- **120 additional function drafts** repaired from individually checked Ghidra `&LAB_...` undeclared-label failures, in twelve ten-file commits starting at `ddc51d1e1eb7dfe95aa2b932e982b3e6f0536b1a` and ending at `e830591c5d7c4bf85105d7595ade2556e272ff11`. Local Clang 17 C11 syntax-only checks passed for each repaired candidate, with the *existing compatibility-warning allowances*. Every referenced label VA was checked against original XBE file-backed sections.
- Each address-only fix retains the original `&LAB_XXXXXXXX` expression and adds an `extern unsigned char LAB_XXXXXXXX;` declaration. **These are declarations, not verified definitions.** Linker resolution, code/data roles, and runtime behavior are pending.
- **One separately researched function:** `0x0033F3AC` in XONLINE was reconstructed as a C11 wrapper around Xbox kernel ordinal 228, `NtSetSystemTime`. Original instruction sequence: `push 0; lea eax,[esp+8]; push eax; call [0x003864bc]; ret 8`. A single 64-bit input value accounts for the observed two incoming stack words. This reconstruction passed strict host Clang C11 syntax and `clang -m32 -fsyntax-only`; no runtime equivalence or Xbox SDK linking has been proven.
- **Two more unresolved functions investigated in assembly**: `0x0006A5F0` and `0x000907A0`. See [STACK_ABI_EVIDENCE_6A5F0_907A0.md](STACK_ABI_EVIDENCE_6A5F0_907A0.md). Their Ghidra pseudocode lost incoming EAX/ECX register-derived values and stack-argument address calculations. The C source was **not** arbitrarily changed just to compile.

## Honest status and next gates

The last published global host check reported **1,932 failures**. This review contains 121 individually passing repairs against that older baseline, and earlier commits separately resolved more source label errors. **The global check has not been rerun against the exact current remote tree; do not infer a certified new failure total.**

Function metadata `metadata/function_inventory.csv` contains historical `c_sha256` values that **necessarily go stale when sources change**. Run `python tools/recheck_c11_provenance.py` to check source drift; use `--refresh` only after reviewing the intended source changes. The original XBE function-body digests must never be rewritten to match a new C draft.

Do not mark any function `ABI_VERIFIED`, `BEHAVIOR_VERIFIED`, or `BYTE_EQUIVALENT` based on these syntax checks.

### Human-readable naming rule

Use semantic names (for example, `requested_system_time`) **only where original machine-code effects and independently documented API contracts support them**. Otherwise keep the stable `FUN_<entry>` identity and name local values by directly observed roles (`incoming_ecx`, `caller_stack_arg_1`, `linked_label_address`). Renaming an unknown object to something plausible is not recovery.
