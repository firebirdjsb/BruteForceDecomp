# Bounded guest DWORD initializer repairs

Two original-address C++17 drafts now use existing guest-word interfaces instead
of host symbol addresses or omitted guest arguments. No native callback, class,
register ABI, return ABI, memory model or whole-function behavior is recovered.

## Exact scope

- `0x0009e8b0`: six assignments replace host addresses of `UNK_*` declarations
  with the original DWORD constants. `MOV EAX,0x0038df04` at `0x0009e8cb`
  supplies stores to `0x004a7470` and `0x004a746c`; `MOV ECX,0x0038def4`
  at `0x0009e8e0` supplies `0x004a7468` and `0x004a7480`;
  `MOV EAX,0x0038def0` at `0x0009e8ea` supplies `0x004a7488` and
  `0x004a7484`. The complete exported straight-line sequence has no intervening
  writes to the relevant producing register before its respective stores.
- `0x0009e8b0`: the original `PUSH 0x00310440`, direct call to `0x002ea4bf`
  and four-byte caller cleanup supply a raw callback word to `_atexit`.
- `0x000388b0`: the original `PUSH 0x0030de90`, direct call to `0x002ea4bf`
  and four-byte caller cleanup likewise supply a raw callback word.
- `0x000388b0`: `MOV EDI,EAX` at `0x000388b2` captures the entry word already
  represented by the draft's unresolved `in_EAX`. At `0x000388f8`, `PUSH EDI`
  supplies the stack word; `MOV ESI,0x004a8848` precedes the direct call to
  `0x0008f6a0`, followed by four-byte caller cleanup. The existing model takes
  exactly these ESI and stack DWORD inputs. The source passes the preserved
  guest constant and `static_cast<std::uint32_t>(in_EAX)`; it does not truncate
  a host pointer or introduce a new guest register.
- Both callers receive the source-matched declaration
  `extern int __cdecl _atexit(undefined4 callback_guest_word);`. The canonical
  definition, its source hash, and its existing raw-word contract are pinned.
  No new function-pointer prototype or callback dispatch is invented.

## Evidence and limits

The two caller bodies (168 and 134 bytes) and `0x0008f6a0` (64 bytes) were
reconstructed from address-keyed instruction exports. Every byte exactly covers
its FunctionExport body range and matches the inventory/export body digest.
The public manifest retains only narrow producer/store/call/cleanup windows,
source identities, ranges and hashes. The private exports are optional test
inputs and are not added to the repository.

`0x002ea4bf` has an 18-byte body identity/range in FunctionExport matching the
inventory, but this bundle has no complete machine-byte record for that callee.
Its existing source signature/hash is pinned, rather than claiming a new
complete-body verification. Historical raw-word evidence remains documented in
`X86_STACK_SLOT_AND_EXCEPTION_ADDRESS_PASS_2026-10-23.md`.

The original XBE itself was not reauthenticated. Caller live-ins, nested-callee
register effects, overlapping globals, guest/host memory translation, signed
address arithmetic, callback execution and return ABI remain unresolved. No
canonical game function, uploaded code, machine instruction stream or callback
target was executed.

## Focused validation

`python3 tools/test_cpp_20261104_guest_initializers.py` checks:

- Exact source before/after SHA-256, reversible bounded edits, preimage Git blob,
  source layout, original body labels, and existing callee source signatures.
- Narrow instruction decoding and every evidence byte/address mutation.
- Complete corrected source syntax/object compilation at `-O0` and `-O2`.
  Exact old sources remain negative controls, producing seven and two errors.
- A newly authored initialized scalar fixture captures six DWORD assignments,
  two raw callback words and the ESI/stack handoff. Boundary words and 20,000
  deterministic samples pass at both optimization levels. Ten wrong-value
  variants fail the appropriate capture check.
- With `BF_REA_EVIDENCE_ARCHIVE` and `BF_FUNCTION_EXPORT_ARCHIVE` set, archive
  hashes, three complete byte-body hashes/ranges, four exported identities and
  missing/duplicate/corrupt instruction controls are rechecked.

The historical `0x0009e8b0` literal-batch manifest remains unchanged. Its exact
result source is recovered by reversing this independently pinned later repair
before the historical checks. This exported-byte repair is separate from the
fourteen original-image-verified literal overlays.

These are syntax and bounded operand/model-interface checks, not native linkage,
Xbox ABI, full runtime equivalence, a byte-identical rebuild or game completion.
