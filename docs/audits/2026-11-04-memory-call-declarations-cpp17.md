# Two recorded-call C++17 declaration repairs

## Scope

The complete existing drafts at `0x002e0650` and `0x002e7b00` gain only the declaration already present in the unchanged `0x002e7aa0` draft:

```cpp
extern void * __cdecl _memmove(void *__dest,void *__src,size_t __n);
```

It exactly matches the existing `0x002ea100` definition. No expression, function signature, data declaration, call argument, return path or original body-digest label changes. Neither the callee nor the neighboring declaration changes. This does not substitute host `memmove`, implement guest memory or add a guessed ABI.

The call lengths in these drafts are evaluated as unsigned 32-bit arithmetic before conversion to the existing `size_t` parameter. The Linux audit's `size_t` and pointers are 64-bit; the recorded x86 call stack carries three 32-bit values. Source agreement is not a recovered native interface. Existing guest-address-to-host-pointer casts, signed arithmetic, object bounds, aliasing and register/flag behavior remain unverified.

## Recorded instruction evidence

The new private read-only export contains stored program-memory bytes. Every recorded range was independently decoded with Capstone 5.0.7, its bytes were rehashed and checked against the existing canonical body labels, and instruction coverage was checked. No uploaded executable, script or original function body was run.

- `0x002e0650`: one contiguous range, 110 bytes, 49 instructions, SHA-256 `531281360FAFD590D3C58CF91DE85937D9F4458CCC84F5CD622AB988DD95ADCA`.
- `0x002e7b00`: one contiguous range, 99 bytes, 42 instructions, SHA-256 `00102A5181191D31851A8EAF59092D2847616B90B6BD0D323134F0D49C551124`.
- `0x002ea100`: 21 disjoint recorded instruction ranges, 672 bytes, 231 instructions, SHA-256 `E5FC1828550E279344BBF0F85779E8D9677DB7B614DC28E4ECABD2D0C12646E0`.

There are no length, fallthrough or flow overrides in these three records. Both caller ranges cover their full recorded entry-to-return instructions. No hidden continuation caused by a CALL_RETURN override was identified in these callers. The callee's excluded gaps include jump-table data and padding; checking the 21 recorded instruction ranges does not authenticate those excluded data bytes or all indirect destinations.

At `0x002e06a0`, raw `e85b9a0000` decodes to CALL `0x002ea100`. Preceding `PUSH EAX; LEA ECX,[EDX+4]; PUSH ECX; PUSH EDX` provides length, source and destination. `ADD ESP,12` follows at `0x002e06a7`. The caller itself returns with `RET 12`.

At `0x002e7b58`, raw `e8a3250000` decodes to the same target. Preceding `PUSH EDX; LEA ECX,[EAX+4]; PUSH ECX; PUSH EAX` provides length, source and destination. `ADD ESP,12` follows at `0x002e7b5d`. This caller uses plain `RET`.

The callee prologue saves EBP, EDI and ESI, then loads source from `[EBP+12]`, count from `[EBP+16]` and destination from `[EBP+8]`. All eight recorded return tails load the destination stack word into EAX, restore ESI/EDI/EBP and execute plain `RET`. These are bounded raw call/stack facts, not a proof of the entire helper. In particular, forward `REP MOVSD` paths have an incoming direction-flag dependency, jump tables are excluded from the recorded body ranges, and the existing callee draft still fails strict host syntax due to pointer-width errors.

The Ghidra program stores the expected executable hash, but has no retained original FileBytes. The complete original XBE was not reauthenticated. Body-digest consistency must not be described as independent authentication of the original executable.

## Historical ledger composition

Both callers already appear in `metadata/cpp_20261101_byte_offset_20.json`. Its original manifest, source-before Git blobs, byte-offset expressions and original-body hashes remain unchanged.

The new manifest separately pins both source preimages, results and Git blobs. The historical verifier first removes only the new declaration block under those exact pins, then applies its unchanged byte-offset reversal and checks the original historical Git blob. Other 18 cases are untouched. This prevents a later declaration from invalidating the historical fixture without weakening that fixture.

## Focused verification

With official Debian Clang 19.1.7, the new 13-test suite passes:

- Both complete caller sources parse and compile to host objects at O0 and O2; no canonical function is executed or linked.
- Removing the declaration restores the original undeclared-identifier error at both optimization levels.
- Wrong argument types and argument counts remain rejected.
- Exact source reversal, signature pins and both stages of historical-ledger reversal pass.
- Mutated source hashes, body labels, manifest scope, ledger paths and old Git blobs are rejected.
- Private-byte checks cover all recorded bytes, instruction coverage, ordered stack setup, cleanup, callee argument loads and return tails.
- Mutated call displacements, swapped PUSH order, wrong cleanup, wrong callee loads, wrong return-value loads, changed body bytes and analyzed boundary overrides are rejected.

The composed historical verifier also passes all 20 source cases and 80 focused Clang C++17 positive/negative probes. It reports that no original XBE was supplied. Private evidence tests are explicitly skipped if the private export is absent; that absence is not a byte-verification pass.

These are two focused complete syntax gains, not a new full-inventory percentage. An exact integrated-tree 13,694-function audit remains a separate gate. Native linkage, Xbox ABI, memory access fidelity, complete helper behavior and gameplay remain unverified.
