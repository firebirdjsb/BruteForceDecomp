# XboxRecomp as a reference — Brute Force 1:1 preservation policy

Status: engineering reference / verification plan (2026-10-23). This document introduces **no game-core code or XboxRecomp dependency**.

## Non-negotiable source of truth

The game's **original Xbox retail XBE** is the authority for every function's behavior, machine-code address, instruction order and byte-level operation. For this project it must hash to:

`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`

The C11 drafts in `src/` are not presumed to match the Xbox instruction stream merely because they parse. The current work is an evidence-led reconstruction, not a completed PC recompiler.

The public toolkit [sp00nznet/xboxrecomp](https://github.com/sp00nznet/xboxrecomp) can inform **analysis techniques and host architecture**. Consult its [register model](https://github.com/sp00nznet/xboxrecomp/blob/main/docs/technical/register-model.md), [indirect-call handling](https://github.com/sp00nznet/xboxrecomp/blob/main/docs/technical/indirect-calls.md), [ABI analysis](https://github.com/sp00nznet/xboxrecomp/tree/main/tools/abi_analysis), [conformance tests](https://github.com/sp00nznet/xboxrecomp/tree/main/tools/conformance), and separate link-time platform libraries. All conclusions for Brute Force must be **re-proven against the provided Brute Force XBE**.

Borrowing a tool's ideas, code, calling-convention labels, or behavior **does not** establish a 1:1 result for a different game.

## What 1:1 means here

The fidelity target is **observable original Xbox instruction semantics and game behavior** preserved by the native implementation, not identical compiled host machine-code bytes. Keep the 1:1 game core separate from optional `BruteForce: Reloaded` features.

Verify in stages, per original entry address:

1. **Provenance:** exact original XBE SHA-256, original function address, body digest, real x86 bytes and disassembly window; no substituted title or build.
2. **ABI:** recover observed stack arguments in *actual push order*, implicit EAX/ECX/EDX/EBX/ESI/EDI inputs, callee-saved obligations, return registers, caller-vs-callee stack cleanup, and any SEH/TLS/frame behavior. Mark each unknown individually.
3. **Widths and flags:** preserve all 8/16/32-bit partial writes, address wrapping, signed vs unsigned branches, carry/overflow/parity flags, x87 stack/precision, SSE upper lanes, NaN/unordered comparisons, and pointers as 32-bit **guest** values. Host pointer sizes cannot silently change guest layout.
4. **Direct linkage:** resolve each original CALL target, actual argument words and return side effects; record evidence for a complete connected function family.
5. **Indirect linkage:** retain source vtable/function-pointer target computation until entries and dispatch destinations are grounded. Do not replace the call with a guessed human-readable helper.
6. **Testing:** use negative controls so an incorrect mapping fails; compile isolated C11; check 32-bit guest layout; compare original-instruction behavior and branch/edge cases against a trustworthy x86 execution reference where feasible; only then assert a tested level of semantic equivalence.
7. **Platform separation:** preserve the verified game core while implementing the Xbox kernel, GPU/D3D8, audio, input, filesystem, timing, and threading behavior at narrowly defined host adapter boundaries. A successful desktop build alone is not 1:1 verification.

Do **not** globally convert every C draft into XboxRecomp's `void(void)`/global-register model or declare decompiler pseudo-parameters to be actual C arguments. Such a migration would be a separate source transformation requiring entry-by-entry differential verification. Conversely, do **not** presume an ordinary typed C signature can carry all x86 register/stack inputs.

Neither XboxRecomp's reusable runtime nor its coverage reports are direct measurements of Brute Force. Reuse of an MIT-licensed component would require a separate integration review including its own license/notice and an independently verified interface. No third-party source is copied in this document.

## Immediate Brute Force 1:1 work items

- Extend `tools/verify_x86_c11_lane_contracts.py` with **only observed** instruction fingerprints and direct branch/call edges. An XBE-only verifier check must never be misrepresented as a full C11 compile pass.
- Continue isolating the original recursive range/partition families at `0x0004E150`, `0x00050980` and `0x002876A0` by checking *caller word setup*, callee reads, saved registers, indirect side effects and all return paths.
- `0x000874A0`: `0x000874DA` writes `AL` into `[ESP+0x1C]`; `0x000874DE` immediately loads all four bytes from that same stack word into `EDX`. Its draft's former `local_4._1_3_` syntax was invalid, so the limited C11 fix writes only the low byte. **High 24 bits remain unknown.** The `0x000874EA -> 0x00087630` direct call was checked; any other implicit EAX/guest register contract is still unverified.
- Keep the 13,694-function syntax pass/fail totals pinned to their actual audited commit. Do not subtract repairs or increase roadmap percentages until the next complete repository audit confirms results.
- Build a narrow, provenance-backed function-call edge ledger before attempting any integrated native PC link. For each edge record caller VA, CALL site VA, callee VA, proven stack/register inputs, cleanup and uncertainties; do not invent dependency stubs just to satisfy a linker.

## Fidelity status conventions

`SOURCE_DRAFT` — C content exists, ABI may be guessed by a decompiler.

`X86_OPERANDS_OBSERVED` — a precise instruction-level fact is supported by the original XBE; other function behavior may remain unknown.

`HOST_C11_SYNTAX_OK` — the file parses under documented compiler flags; **not** a runtime/ABI result.

`ABI_REVIEWED` — all relevant input, return, stack and register contracts have individually justified evidence.

`LINK_REVIEWED` — the direct and indirect dependencies required by that function have proven targets and interfaces.

`BEHAVIOR_TESTED` — a documented original-vs-reconstruction differential test set passes with known coverage and limitations.

Never promote a function by implication. For example, passing `HOST_C11_SYNTAX_OK` cannot directly imply `ABI_REVIEWED`, `LINK_REVIEWED`, or `BEHAVIOR_TESTED`.

## Relevant existing checks

```sh
# Original XBE must remain outside Git:
python3 tools/verify_x86_c11_lane_contracts.py --xbe /path/to/default.xbe --root .
python3 tools/verify_x86_leaf_calls_2876.py --xbe /path/to/default.xbe --root .

# Syntax verification can run publicly without the copyrighted XBE:
python3 tools/verify_x86_c11_lane_contracts.py --root .
python3 tools/sweep_c11.py --root . --out c11_sweep_results --jobs 8
```

See `AGENTS.md`, `docs/STATUS.md`, and `docs/C11_X86_LANE_LINKAGE_PASS_2026-10-23.md`. The former is a rulebook; this file supplements it without changing the original executable, game assets or runtime.


## Example of a *blocked* syntax-only shortcut

`0x00081D10` currently contains three invalid Ghidra pseudo-fields written as `param_1._0_1_`. Do **not** mechanically replace all three with `((uint8_t *)&param_1)[0]` and claim a repaired function. Original instructions show `0x00081D5B` writes the low byte at `[ESP+0x7C]`, `0x00081E78` writes a **whole pointer-sized guest DWORD** to that same stack slot, `0x00081FBF` writes another low byte, and `0x00082020` reads the low byte before returning. The C parameter and this reused stack slot have conflated identities in the decompiler output. Restore original stack-slot lifetimes and any register dependencies first, then fix C syntax with separately documented evidence. This is why the original x86 registers/guest stack matter more than simply eliminating compiler errors.

