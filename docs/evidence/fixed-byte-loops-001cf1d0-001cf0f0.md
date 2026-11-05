# Two bounded fixed-byte loop spellings

This batch changes one byte-copy statement in each existing C++ draft. It
replaces pointer-to-`int` intermediates with unsigned-character views at the
same fixed offsets. Signatures, implicit ECX locals, copy order, access widths,
source position, destination strides and original body labels remain unchanged.
It is a strict C++17 syntax repair, not a recovered guest ABI or runtime proof.

## Original instruction evidence

| Entry | Complete indexed body | Changed byte load/store | Destination stride |
| --- | --- | --- | --- |
| `0x001cf1d0` | `001cf1d0..001cf1fe`, 47 bytes, 19 instructions | `001cf1f0: 8a5109`; `001cf1f3: 885009` | 12 bytes |
| `0x001cf0f0` | `001cf0f0..001cf130`, 65 bytes, 25 instructions | `001cf116: 8a510d`; `001cf119: 88500d` | 24 bytes |

The first body copies DWORDs at +0/+4, then bytes at +8/+9. Bytes +10/+11
are untouched. The second copies DWORDs at +0/+4/+8, bytes at +12/+13,
then DWORDs at +16/+20. Bytes +14/+15 are untouched. Each load completes
before its corresponding store. ECX does not advance. Plain byte MOV copies
bits without sign extension; the source's `undefined1` alias is unsigned char
on the tested host, enforced by a public compile-time assertion.

Body SHA-256 pins:

- `0x001cf1d0`: `31827F1D12C85B7E074B3237900FAE2C66A2C7EFF19B9EFCA676188C81BC265C`
- `0x001cf0f0`: `665327B89D943F14EBBE81AAA68866D80EFE80A8203AB7E154C0317E0DE3959B`

Both bodies are contiguous and completely covered. Each has two internal
conditional branches and a final RET, with no calls, continuation gaps or
analyzed flow overrides. The public gate independently pins full raw bytes,
body digests and every instruction boundary. Optional private replay seeks
only the selected immutable export records and rejects changed ranges, bytes,
counts, identities or instruction metadata overrides. The export matches the
project's canonical body inventory; it does not freshly authenticate the whole
XBE. The original XBE pin remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

## Preconditions and remaining limits

The tested operation requires initialized, aligned uint32_t object storage
covering all accesses. Source footprints are 10 or 24 bytes. Destination and
end belong to one array, separated by a nonnegative whole multiple of the
12- or 24-byte stride. Every advance remains inside that array or at its
one-past endpoint. Source and destination may overlap within valid storage.
Tests preserve sequential load/store behavior and reread the source each
iteration; they do not assume non-overlap or take a whole-record snapshot.

Native pointer arithmetic is not wrapping 32-bit guest address arithmetic.
These checks exclude invalid pointers, misalignment, inaccessible memory and
address wrapping. Guest mapping, memory faults, ECX entry binding, EAX/EDX
exit values, flags, stack conventions and whole-function behavior remain
unverified. The canonical drafts retain their unresolved implicit ECX locals
and are never executed. Explicit ECX parameters exist only in generated test
copies, not production signatures or inferred calling conventions.

## Permanent checks

Run `python3 tools/test_cpp_fixed_byte_loops.py` in CI. It requires Clang and
Python's standard library. No original binary, Ghidra installation or Capstone
package is required for the public gate.

- Exact pinned preimages must fail strict C++17 syntax on the original
  pointer-to-int diagnostics at O0/O2; both full replacements must pass.
- The fixture enforces 8-bit unsigned bytes and 32-bit DWORDs, then checks
  87,600 initialized native-object cases at each optimization level. Cases
  include zero/one/multiple iterations, self/forward/backward overlap,
  high-bit byte values and whole-buffer comparisons that preserve padding
  and surrounding sentinels.
- Ten executable mutants must fail by model mismatch: offset, destination
  stride, transfer order, source advancement and byte-width expansion for
  each function. Public identity, source type, body coverage and branch
  mutations must also fail validation.
- `--sanitize` additionally runs GCC ASan/UBSan with leak detection disabled
  for sandbox compatibility. It does not weaken bounds or UB checks.
- `--private-export <export-directory>` additionally replays the two selected
  original evidence records. The directory must contain `validation.json`
  and `functions.jsonl`.

The manifest pins exact source preimages, replacements, Git blob identities,
body bytes and ordered operations. Source syntax success and initialized
operation tests do not imply guest execution, linking or a byte-identical build.
The separate variable-byte-advance candidate `0x0034c50e` remains held because
native byte advancement would not establish guest32 wrapping behavior.
