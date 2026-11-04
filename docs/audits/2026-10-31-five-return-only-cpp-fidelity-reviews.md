# 2026-10-31 — Five non-RET-only C++ draft bodies requiring original XBE review

This is a **source/structural investigation**, not original instruction verification.
The complete strict C++17 audit at `15586ce8ccd00c99ae8dc05e78399887639bdad3`
reported 13,694 canonical C++ drafts, zero structural problems and 539
fidelity review flags: 534 canonical-symbol/renaming flags and five
`empty_or_return_only_body_requires_original_x86_review` flags.

All five functions below have a `return;`-only C++ draft yet their recorded
original XBE body hashes are **not** a SHA-256 of `C3` or of the recognized
`C2 xx xx` immediate-RET-only patterns. The structural heuristic therefore
**cannot** credit them as faithful. It also cannot prove they are incorrect:
the original instruction sequence may contain prologues, instrumentation,
indirect jumps or side effects before returning.

| Original entry | Recorded Ghidra label | Original body SHA-256 label | Risk to check |
| --- | --- | --- | --- |
| `0x002ECC14` | `FUN_002ecc14` | `7FB7ECCBA31465DD8621581517417C798527E069CD33D2E544D3766B66204EF2` | Unknown nontrivial body; compare full instructions, effects and cleanup |
| `0x002EF9EA` | `__rt_probe_read4@4` | `EF9EF2A18DA9E7E4B054C1ACC328533F72141D68338BCF1458A13F9B104C826F` | High-priority probe helper: original stack/exception effects and `RET 4` need verification, not presumed from its symbol |
| `0x002F04D0` | `FUN_002f04d0` | `D0ECF339B80D438B6D0D3FCEF61D5CB5AD8EF4C6BF39BE985A29318BBC096C05` | Unknown nontrivial body; record control flow and outputs |
| `0x002F060D` | `FUN_002f060d` | `E6EC999D45C3C78E22ED722D9CDD003CA3E8685D7954A7D030915DF1E55EB902` | Unknown nontrivial body; record control flow and outputs |
| `0x002F0696` | `FUN_002f0696` | `B0971B5D2CB4945DC056293D2DAC8D989FC1D1488B22EDB4125E67FDF93C85BD` | Unknown nontrivial body; record control flow and outputs |

The `0x002EF9EA` source explicitly includes Ghidra warnings about injected
`__SEH_prolog` and `__SEH_epilog` and a Visual Studio 2003 library-function
match. This is useful **triage evidence only**; neither the symbol nor the
injected pseudocode proves the actual machine-code semantics.

## Next verification gates

1. Authenticate the user's private XBE with SHA-256
   `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
2. Disassemble **each complete original body**, verify its body digest,
   recover entry/exit register state, memory and exception side effects,
   x87/SSE if present, all calls and direct/indirect jumps, and `RET n` cleanup.
3. Compare the original Ghidra export and C++ draft to that instruction
   contract; only then write a behavior-preserving replacement and differential tests.
4. Keep these five flags open until the original evidence is checked.
   No function-body changes, guessed return values, fake allocation or
   guest-address-to-host-pointer casts are justified by the present report.

The other 534 flags are **naming review**, not 534 verified missing behaviors.
The new `tools/triage_cpp_fidelity_flags.py` creates a reproducible CSV/JSON
queue with per-entry evidence requirements; its count is not a verified
1:1 completion metric.

The original XBE, copyrighted binary bytes, full Ghidra export and assets
remain outside the public repository.
