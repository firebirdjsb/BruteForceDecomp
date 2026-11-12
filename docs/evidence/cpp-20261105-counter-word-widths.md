# Two original WORD counters: seven bounded extern-width corrections

Status: operand-width evidence and source representation only. No definitions,
allocation, guest mapping, object layout, alias/lifetime contract, native or guest
ABI, full-function behavior, original execution or byte-identical-build claim.

Base source: `0d126ada5b84ae7aac17bd02e97799f8e84291c9`. The original-XBE identity
remains `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
This investigation reads private exported JSON. It does not reauthenticate the
whole original XBE, execute original bytes or execute canonical draft functions.

## Exact source boundary

Only seven existing extern declarations change from `uint32_t` to `uint16_t`:

- `0037f9a9`: `DAT_004a8fe2` and `DAT_004a8fe6`.
- `00385128`: both symbols.
- `0038524e`: `DAT_004a8fe2`.
- `00385d45`: `DAT_004a8fe2`.
- `00385d64`: `DAT_004a8fe6`.

The expressions, function signatures, warning text, unresolved pseudo-registers,
call sites, whitespace and line endings are unchanged. Raw byte pre/post SHA-256,
Git blob reversal and exact unique substitutions pin that boundary. Historical
inventory `c_sha256` values and original-body labels are not rewritten. All seven
existing declarations now agree on unsigned WORD value representation.

These labels remain unresolved storage placeholders. Their guest-address names
do not prove the existence, independence or adjacency of native C++ objects.

## Original operands

The initializer stores CX to word `[004a8fe2]` at `0037fb5e` and AX to word
`[004a8fe6]` at `0037fb65`. The nearby source loads were covered by the preceding
[word-limit evidence](cpp-20261105-word-limit-widths.md); this correction does not
claim the initializer's source rereads reproduce original load ordering or aliases.

Three direct increment instructions encode `66 ff 05 <absolute address>`:

- `00385141`: word `[004a8fe6]`.
- `0038514d`: word `[004a8fe2]`.
- `0038527c`: word `[004a8fe2]`.

Increment wraps at 65535. A DWORD placeholder instead has a different value range
and could describe wider access; assigning a cast to its DWORD value would not
correct that abstract memory width. No address reinterpretation or alias cast is
introduced.

Each 31-byte drain loads a WORD from `[ESP+4]` into AX, compares its global WORD
against AX, uses `73 04` (JAE/JNC) to accept counter >= request, subtracts AX from
the same WORD on acceptance and returns full EAX 1; rejection returns full EAX 0
without subtraction. `c2 04 00` pops four bytes at return. The selected operands:

- `00385d4a` / `00385d57`: CMP / SUB word `[004a8fe2]`, AX.
- `00385d69` / `00385d76`: CMP / SUB word `[004a8fe6]`, AX.

The high half of the four-byte incoming stack slot is not read by that load.
This is byte-level stack evidence, not permission to declare a host calling
convention or conclude a native `bool` return transports the full EAX result.
Neither native ABI nor guest flags/partial register preservation is supplied.

## Complete bodies and quarantined annotations

| Entry | Inclusive body | Bytes / instructions | Original SHA-256 |
| --- | --- | --- | --- |
| `0037f9a9` | `0037f9a9..0037fb6d` | 453 / 142 | `ABB9727C43B05D5F2695E3895737ABB7FB01510211E56CA72D77E6344A2C4FB4` |
| `00385128` | `00385128..00385159` | 50 / 15 | `90CAD26D41E5DEDC52F6AFF273299EAD093C99BD8E866163C8FB146136DCFF6A` |
| `0038524e` | `0038524e..003852f9` | 172 / 64 | `BA4DE524EBFF03927E42ED838CEB60299918B3084090B89839C8D50589639BA9` |
| `00385d45` | `00385d45..00385d63` | 31 / 9 | `C35058C8EC7723D30A34ADF3BCA41101FD711F3E75ACEC5E1463F851E1101AEC` |
| `00385d64` | `00385d64..00385d82` | 31 / 9 | `D8016269303419F5CE45156AB548BA943201A2B6D81946F59E118567C9DA34CA` |

The private gate checks all 737 original bytes and 239 independently decoded
instruction boundaries, complete body coverage, direct control-flow targets,
fallthroughs, stack cleanup and raw absolute WORD operand widths.

`00385128` remains **quarantined** in the original validation index:
`issues=["flow_override"]`, `byte_and_instruction_validation_pass=false`.
Its three original `e9 rel32` instructions jump from `0038513c`, `00385148` and
`00385154` to `003860ee`, `00386141` and `0038618e`. Ghidra labels those instructions
`CALL_RETURN` / `CALL_TERMINATOR`; those are analyzed annotations, not CALL opcodes.
The gate pins this exact disagreement rather than promoting the old index row or
accepting arbitrary overrides. The jump targets are byte-proven addresses;
their register/stack contracts and behavior are not recovered here. Other bodies
must retain their clean index flags and no unlisted overrides. Three initializer
indirect import annotations remain unresolved, exactly as in the earlier gate.

A bounded census decoded all 13,694 exported functions (849,646 instructions)
and found 17 direct absolute memory operands overlapping `004a8fe0..004a8fe7`,
all WORD, including the nine selected counter operands. No immediate operand was
an address in that region. Every linear body range decoded without a gap. This
does not validate all analyzed metadata, recover computed/data-held aliases,
exclude unexported code or external writers, or establish global object storage.

## Tests and predecessor compatibility

Run `python3 tools/test_cpp_20261105_counter_word_widths.py`; optional data-only
private replay adds `--private-export <export-directory> --tooldeps <capstone-directory>`.
The separate verifier accepts the same options and `--root`.

All seven focused tests pass with the private export. Controls reject 253
manifest-leaf changes, 124 separately checked operand/drain instruction-byte
changes and 3,223 private index/body/instruction/flow changes. Source controls
reject changed widths/signedness, definitions, prototypes, altered lines/CRLF,
extra region declarations and dependent inventory/header changes.

Authored fixtures use extern names only in unevaluated type assertions. They
define no game globals and call no original/canonical functions. Initialized
local WORD arrays and unrelated guards test 2,359,296 cases per run: all 65,536
copy and increment values for each abstract slot, and all values paired with
eight boundary requests/counters in both directions. Clang O0/O2 and GCC14
ASan+UBSan pass; LeakSanitizer is disabled and no Clang-sanitizer claim is made.
All 42 negative O0/O2 runs reject signed/wider/byte/strict/reversed comparisons,
wrong/unconditional/missing/additive subtraction, rejection writes, truncated
or saturating increments, neighbor carry, and missing/wrong/truncated/wide-effect
copies. Mutants use initialized, defined local operations, not invalid aliases.
Separate LLVM checks require i16 memory operations and unsigned comparison
(including valid zero-extended integral promotions), and reject signed/wider
models. This verifies isolated value operations, not feasible original runtime
states, flags, faults, concurrency, MMIO or linked-game code generation.

Strict O0/O2 diagnostic counts remain 19 / 3 / 5 / 0 / 0. The two drains already
passed syntax; the other three still fail. The base full audit reports 4,052
passes and 9,642 failures. Focused checks show no syntax gain; the package's
separate audit artifact records its full-tree result when available. The
coordinator must run a fresh exact-tree audit after combining reviewed changes.

The preceding word-limit gate pins these five historical source files. Its
manifest remains immutable. In the isolated package, all seven counter edits
are reversed exactly before replaying the unchanged predecessor gate; that gate
passes including private replay. Integrated coexistence requires the separately
reviewed strict projection of these approved postimages back to their historical
preimages. It must not relax hashes, change historical manifests, clear quarantine,
or accept arbitrary later source changes. Current counter tests check the actual
postimages directly. Historical predecessor-tool hashes in the counter manifest
document the isolated replay, not a requirement to overwrite a later reviewed tool.

The package makes no canonical edits or publication. Independent review and a
coordinator-owned exact combined audit remain required before integration.
