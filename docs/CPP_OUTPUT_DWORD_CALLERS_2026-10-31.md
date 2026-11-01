# C++17 DWORD output-call repairs — 2026-10-31

## Audit provenance (before this repair batch)

- Exact-tree compiler baseline: `3db6eb30bb88fc6d28d843b705eda1d2afaab6ee`, run `41255569737`.
- Strict host C++17: **3,579 pass / 10,115 fail / 13,694 source drafts**, zero audit and original-body label errors.
- First-error groups: missing declaration/type 5,730; pointer/storage 1,654; call signature 1,593; guest pointer width 863; other 273; object/member 2.
- Structural review: 539 unresolved flags across 538 functions (534 source-symbol identity review; five short-body x86 reviews). The retail XBE was **not available to this audit**. The counts do not prove 1:1 Xbox behavior.

## Scoped repairs

The existing callee draft `0x000E0350` has signature

```cpp
undefined4 *FUN_000e0350(int param_1, undefined4 *param_2,
                         undefined4 guest_stack_word_3);
```

Its draft writes exactly one four-byte value through `*param_2` and returns that same pointer. Earlier narrow original-XBE work records an incoming guest stack DWORD forwarded by this callee, but does not establish the complete original caller-side register/stack ABI. We have **not** reauthenticated the original binary in this pass.

Two callers previously contained a four-byte `undefined1 local_4[4]` and directly passed it to the undeclared callee. The only compiler error for each was the undeclared callee. Each now has the source-matched declaration and a single `undefined4 local_4` passed by address:

- `0x0014A170`: original Git blob SHA-1 `cbeba26f05a8f8f7dcccea1a9193af2dae1b6e24`, original x86 body label `D1BB50219D8E51B1B21BADD057A89E2C03DFB96C0617CD32FCA146B4E41574F9`; repair commit `bb01890d346a825fc1947e506077f64382699bc0`.
- `0x001562D0`: original Git blob SHA-1 `c3970bb15e942c177bba296c3df4c60518e1a83e`, original x86 body label `2E7FF950076DB49DB1D8DFA1EEDEBBE9354BE5285BD992249F4F6DF3C6E97442`; repair commit `ec3bf7f1f6bc089c69b87014779d3b1697c2caf3`.

No original entry, x86 body digest label, external symbol name, function body algorithm, guest pointer arithmetic, or implicit guest register input was altered. The local remains one four-byte output word. The caller's retained `unaff_ESI` pseudo-register and the complete Xbox ABI remain unresolved.

The related `0x0015B710` caller passes the address of a single-byte `char param_1` to the same draft callee. **Do not automatically convert or silence this case**: its high three guest bytes, stack adjacency, and original callsite must be checked against the retail XBE first.

## Regression and trust boundary

- `tools/test_cpp_20261031_000e0350_dword_callers.py` gates the exact caller source preimages after reversing only the approved edits, callee draft digest, retained x86 body labels, source-matched C++ declaration and output slot.
- Focused strict Clang++17 checks run at `-O0` and `-O2` with missing-declaration, wrong-buffer and wrong-signature negative controls.
- Relocatable `clang++ -r` and demangled symbol checks test only the **one callee definition linking to both callers**. They do not verify unrelated unresolved symbols, correct Xbox pointer mappings, virtual dispatch, game runtime or the original C++ object layout.
- CI invocation is added to the canonical C++17 workflow. The README percentage can change **only after** a completed exact-tree audit on the pushed SHA. Do not substitute these two prospective syntax passes for that measurement.

Statuses: `CPP_DRAFT`, pending exact-tree `CPP_SYNTAX_OK` if CI succeeds; `ABI_UNVERIFIED`, `LINK_PARTIAL_HOST_ONLY`, `BEHAVIOR_UNVERIFIED`. No native PC game is yet buildable.
