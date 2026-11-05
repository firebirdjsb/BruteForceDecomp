# Two exact source declarations, with original ABI mismatches retained

Base source: `177bffee55681237c4000ddd40c1959ef152a133`.
Completed queue audit: `97539fcd895d15a55a0752502079c476bb446693`,
**4,040 / 13,694** isolated C++17 syntax passes. Both selected current caller
and callee source digests equal that audit. This batch has two focused
old-fail/new-pass results; a new complete exact-tree audit is required before
publishing any new aggregate count.

## Scope

Only add each existing callee definition's exact forward declaration and an
explicit limitation comment after the caller's existing include:

| Unchanged caller | Existing callee declaration |
| --- | --- |
| `0x001D1A80` | `extern int FUN_001e2a80(int param_1,int param_2);` |
| `0x001DC7E0` | `extern int FUN_001d6370(int param_1,int param_2);` |

All caller signatures, bodies, call expressions, arguments, returns and casts
are unchanged. Callees and shared headers are unchanged. The historical
inventory is unchanged, including its source-digest cells;
ABI and behavior status remain unverified. Current source postimage digests are
pinned separately in this batch's manifest, not written into historical rows.
This is **source declaration admission**, not a native ABI bridge.
The other seven candidate pairs remain outside this batch.

## Original instruction evidence

The private copied-project export contains four complete, contiguous bodies:

| Entry and inclusive range | Bytes / instructions | Original body SHA-256 |
| --- | --- | --- |
| `001d1a80..001d1a9c` | 29 / 11 | `F21113BF66B9FD512DD0BCED2D67D850374561E8C15D1050C8C02D9286803063` |
| `001dc7e0..001dc7fc` | 29 / 11 | `75ECC4BC63625230AB3FA9F706E0DCA8304897178A1FB1FB827F97FB8894DCE0` |
| `001e2a80..001e2aac` | 45 / 22 | `0C206940F080D3B2E496AE99A5B33B352A3582CF808468794AD4A8CF6EE074A4` |
| `001d6370..001d639c` | 45 / 22 | `EE35CD74C74BC454ACE0E123DC1482059DBEB74BEF1964FD40CE9AA1FFBEE121` |

The verified direct calls are `001d1a94 E8 E70F0100 -> 001e2a80` and
`001dc7f4 E8 779BFFFF -> 001d6370`. Each callee contains one internal loop
with JE/JNE edges and a plain RET. Their downstream E8 targets are
`0001f4f0` and `00087940`, respectively. This batch verifies those target
operands, not the downstream functions' complete bodies or interfaces.

The immutable manifest publishes bounded instruction windows, not the private
export. Private replay checks complete body hashes, every byte and instruction
boundary, all analyzed overrides, independent 32-bit Capstone decoding, every
CALL, branch, fallthrough and RET. All four original records have clean
coverage and no flow overrides. Exact index-row and export-record fingerprints
also prevent substitutions of analyzed metadata or display text. These checks
establish consistency with the canonical body inventory. They do **not**
reauthenticate the entire original retail XBE, whose required SHA-256 remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

## Known mismatches deliberately left unresolved

Let S be the caller's entry ESP. Both callers:

1. Save incoming ECX, then copy that saved word onto the outgoing stack.
2. Forward the words at S+4 and S+8 as the two explicit callee stack operands.
3. Load **EAX from S+12** before CALL. This separate register input is absent
   from the unchanged source call.
4. Supply the saved incoming ECX as an **extra outgoing stack word** that the
   source call does not represent.
5. Add 16 to ESP after CALL and execute a plain RET, preserving the callee's
   EAX. The source callers still have **void signatures and discard the
   returned EAX**.

The original callees move incoming EAX into EDI, advance it through the loop,
and return it through EAX. Their source `in_EAX` pseudo-locals remain unbound.
No missing value is invented, no caller argument is appended, and no signature
is reclassified as a recovered x86 ABI. The existing unsigned `undefined4`
caller arguments and signed `int` callee parameters remain unchanged; source
compatibility is not proof of a signedness or high-word conversion contract.

Downstream register handoffs, flags, guest memory translation, pointer widths,
object lifetime and full function semantics remain unresolved. Do not run
these callers or callees as reconstructed game functions. No original code,
compiled game draft, caller fixture or synthetic replacement is executed by
this batch's checks. There is no linkage, behavior, gameplay or byte-match claim.

## Reproducible checks

Public checks need Clang++17, but not the private export:

```sh
python3 tools/verify_cpp_20261105_two_source_declarations.py
python3 tools/test_cpp_20261105_two_source_declarations.py -v
```

Private replay optionally adds the indexed export and a local Capstone module:

```sh
python3 tools/test_cpp_20261105_two_source_declarations.py \
  --private-export "$BF_PRIVATE_EXPORT" --tooldeps "$BF_TOOLDEPS" -v
```

The checks pin the manifest, exact caller preimages and Git blob identities,
unchanged callees, header, routing helpers and unchanged historical inventory
rows. The inventory's historical source hashes are not current-source assertions.
LF-to-CRLF
and mixed-newline mutations are rejected for every pinned source/header/support
file, without text newline normalization. Removing
the added comment/declaration block must restore each original file exactly.
Each caller, each unchanged callee and their combined translation unit passes
O0/O2 syntax and object compilation. Combined type assertions pin both the
existing callee `int(int,int)` type and unchanged caller `void(undefined4,
undefined4)` type. Declaration-removal, return-type, pointer-parameter and arity
mutations are rejected: **24 positive compile checks and 16 negative checks**.

Public tests reject **224 metadata-leaf mutations** and **86 individual
instruction-window byte mutations**. Private tests cover **4 bodies, 148 bytes,
66 instructions**, reject **992 record-leaf, 296 byte and 52 index-leaf
mutations**, and separately exercise **956 structural/byte/flow negatives**
with the outer record fingerprint deliberately refreshed in the test fixture.
Duplicate indices, duplicate JSON keys and truncated records also fail.
The public suite reports private replay as skipped when inputs are absent.

CI gains one additional test step. Existing evidence gates are preserved.
Follow independent review with the existing provenance/source tests and a full
13,694-source audit of the final integrated tree. Syntax progress remains
separate from original ABI recovery and tested behavior. Retail original code
is preserved; verified demo-only exclusions belong only at the later Reloaded
packaging boundary.
