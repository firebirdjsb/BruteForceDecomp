# Two exact zero-argument source declarations with hidden inputs unbound

Base source: `a30a381222ab60c88a88e972cd677c93106c5bf3`.
Completed full queue audit: `a0d30ba20b5b7a4f222af2d42e0607388202ee1d`,
**4,049 / 13,694** isolated C++17 syntax passes. All four selected current
caller/callee preimage digests equal that audit. This package has two focused
old-fail/new-pass results. A complete final integrated-tree audit is required
before publishing an updated aggregate count.

## Scope

Only insert an existing callee definition's exact forward declaration and a
source-only limitation comment after the caller's include:

| Unchanged caller | Exact existing callee declaration |
| --- | --- |
| `0x002e5900` | `extern bool FUN_002e4940(void);` |
| `0x00288a70` | `extern int FUN_00234c90(void);` |

Both source calls have zero arguments. All caller signatures, expressions,
arguments, casts and returns remain unchanged. Both callees and shared headers
remain unchanged. The entire historical inventory remains byte-identical,
including its historical source-digest cells. The immutable manifest separately
pins source preimages/postimages, Git blob identities, four historical rows,
the inventory's raw SHA-256, headers and routing/validation dependencies.

This is **source declaration admission**, not a native ABI bridge or recovered
interface. Earlier declaration gates are unchanged. Five other source-only
candidates remain queued outside this package, including those with global
width mismatches, split original body ranges, x87 state or indirect calls.

## Original instruction evidence

All four selected original bodies are complete and contiguous:

| Entry and inclusive range | Bytes / instructions | Original body SHA-256 |
| --- | --- | --- |
| `002e5900..002e5912` | 19 / 9 | `C38DA8745B1C0FACD0665A954618905DBF72A8EFE5BB3ABF403EBB5D7D8A44BC` |
| `002e4940..002e494b` | 12 / 5 | `0CE6AEE2FF2FF0098F2A03E9A1BDAA45F30DC4FD034341698484D8A7F5D7F457` |
| `00288a70..00288ab1` | 66 / 32 | `82562A02D09D18E96EC67699629289D977179AEBD70705D122715691910A278B` |
| `00234c90..00234cc0` | 49 / 23 | `5D97BFA692D8A1C8C5472689A0142096B1E05E53F6051C222929D197CDFEA87E` |

The selected E8 calls are `002e5906 e835f0ffff -> 002e4940` and
`00288a96 e8f5c1faff -> 00234c90`. Callee `002e4940` calls `002e4600` at
`002e4940 e8bbfcffff`. That downstream target is verified as an operand only;
its complete body and interface are outside this package. All selected flow
is direct: no computed jump or indirect call is introduced or admitted.

Private replay checks all **146 bytes / 69 instructions**, exact original
body hashes and ranges, instruction boundaries, no-override metadata, every
CALL, conditional/unconditional branch, fallthrough and plain RET against
independent 32-bit Capstone decoding. All branches and fallthroughs stay on
instruction boundaries inside their own bodies. The index and export-record
fingerprints also pin analyzed metadata and display text. The public manifest
contains bounded instruction windows, not the private export.

These checks establish consistency with the canonical original-body inventory,
not reauthentication of the complete retail XBE. Its required SHA-256 remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

## Known omissions deliberately retained

### `002e5900 -> 002e4940`

The original caller preserves ESI, sets ESI to incoming **ECX+0x38**, copies
ESI into ECX, and calls `002e4940`. It consumes returned AL with NEG/SBB,
selects ESI or zero in EAX, restores ESI and returns. The original callee
forwards register state to its downstream CALL, then normalizes returned EAX
to zero or one before RET.

The unchanged source still has an unbound `in_ECX` local and a zero-argument
call that does not bind ECX. No caller/downstream register contract, native
pointer conversion or object layout is supplied by the new `bool(void)`
declaration. Reading AL versus native bool/char return handling is not a claim
that either host function implements the original interface.

### `00288a70 -> 00234c90`

The original caller selects EAX by loading through `[ESI+8]`, comparing
`[EAX+0x18]` with 0x10, and choosing `[EAX+4]` or EAX+4. It then sets
**EDX to incoming EBX** before CALL. The callee retains incoming EAX in ESI,
reads bytes through ESI and EDX, and eventually subtracts ECX from EAX.

That buffer-selection sequence is absent from the unchanged caller source,
as are the EAX/EDX call bindings. Register pseudo-locals remain unbound. The
callee's unsigned local values and signed `int` return are only its existing
source spelling; no signedness or conversion contract is recovered. No
pointer mapping, missing argument or substitute value is manufactured.

Both pairs retain unresolved guest32 memory access, object lifetime, flags,
register state and full semantics. **Do not execute these callers or callees
as reconstructed game code.** Checks compile source/object files only. No
original machine code, game draft, caller fixture or synthetic replacement is
executed. There is no native linkage, gameplay, behavior, 1:1 or byte-match claim.

## Reproducible checks

Public checks require Clang++ with C++17 support but not the private export:

```sh
python3 tools/verify_cpp_20261105_register_source_declarations.py
python3 tools/test_cpp_20261105_register_source_declarations.py -v
```

Optional private replay uses indexed data and a local Capstone module:

```sh
python3 tools/test_cpp_20261105_register_source_declarations.py \
  --private-export "$BF_PRIVATE_EXPORT" --tooldeps "$BF_TOOLDEPS" -v
```

Removing only each added comment/declaration block restores the exact original
file bytes and Git blob. All source, dependency and inventory checks use raw
bytes. Tests reject appended bytes, LF-to-CRLF and mixed-newline changes for
callers, callees, header, routing/support files, manifest and inventory.

At O0 and O2, each caller, unchanged callee and combined translation unit passes
both strict syntax and object compilation. Combined static assertions preserve
the exact `bool(void)` / `int(void)` callee types and `uint(void)` /
`undefined4(void)` caller types. Removing the declaration reproduces the original
undeclared-identifier error; changed return type, added pointer parameter and
changed arity are rejected: **24 positive compilations and 16 negative checks**.
No object is linked or executed, including when optimization discards code
whose source already contains unbound locals.

Public controls reject **366 metadata-leaf mutations** and **98 instruction
window byte mutations**. Private tests reject **1,038 record-leaf, 292 byte and
52 index-leaf mutations**, plus **982 independent structural/byte/flow controls**
that refresh only a test fixture's outer fingerprint to exercise deeper checks.
Duplicate indices, duplicate JSON keys, nonfinite JSON and truncated records
fail. Public-only tests explicitly skip the optional private replay.

CI gains one additional test step, retaining existing gates. Follow independent
review with the original provenance/source tests and a complete 13,694-source
audit of the final integrated tree. Syntax progress remains separate from
original ABI recovery and behavior. Retail code is preserved; verified
demo-only exclusions belong only at the later Reloaded packaging boundary.
