# Two original WORD limits: bounded extern-width correction

Status: original operand-width evidence and source-only representation correction.
**No global definitions, recovered object layout, alias/lifetime contract, guest
mapping, executable ABI, whole-function behavior or byte-match claim.**

Base source: `a8672a38c4079209c46d7d39c15d95031c800231`. The original-XBE pin
remains `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Private exports were read as bounded JSON data. Full original XBE authentication
was not performed, and neither original code nor canonical functions ran.

## Exact change

Four existing extern declarations change from `uint32_t` to `uint16_t`:

- `0x0037f9a9`: `DAT_004a8fe0` and `DAT_004a8fe4`.
- `0x0038620e`: `DAT_004a8fe4`.
- `0x0038624a`: `DAT_004a8fe0`.

Nothing else in those source files changes, including whitespace and line endings.
There are no new function declarations, object definitions, casts, arguments,
initializers or guest-address mappings. Both declarations of each changed symbol
must agree. Exact raw-byte source SHA-256 and Git-blob reversal establish the
four-edit boundary; text-mode newline normalization is not accepted as reversal.
The source's existing unresolved-type/storage warning remains intact.

These existing draft labels consistently associate the selected accesses with
the literal guest slots. Changing a declaration's width does not establish that
a real original/native independent object has that type, size, lifetime or
layout. The declarations are still unresolved placeholders.

## Original operands and complete bodies

| Entry | Complete inclusive body | Bytes / instructions | Original SHA-256 |
| --- | --- | --- | --- |
| `0037f9a9` | `0037f9a9..0037fb6d` | 453 / 142 | `ABB9727C43B05D5F2695E3895737ABB7FB01510211E56CA72D77E6344A2C4FB4` |
| `0038620e` | `0038620e..00386249` | 60 / 16 | `50261BA376B6D13B4548856EA3A439058A4E6CE88487D3EFCB1C18E6CBF9213F` |
| `0038624a` | `0038624a..00386285` | 60 / 16 | `DD000346FCE7B4B54E10A72DBEAC462BCA2790D6D2625245DE9C84078397FC72` |

Both callers begin with `66 8b 42 20`: a word load from `[EDX+0x20]` into AX.
The original comparisons are:

- `00386212`: `66 3b 05 e4 8f 4a 00`, AX against word `[004a8fe4]`.
- `0038624e`: `66 3b 05 e0 8f 4a 00`, AX against word `[004a8fe0]`.

Each is followed by `76 06` (unsigned JBE), accepting request <= limit. Otherwise
`b8 00 05 00 80; c3` returns EAX `80000500`. Equality must not reject, and values
with bit 15 set must not be treated as signed shorts.

The initializer corroborates word access at `0037fb0d`, `0037fb18`, `0037fb37`,
`0037fb43`, `0037fb50` and `0037fb56`. Its initial input bytes at `[EBX+0xc]` and
`[EBX+0xd]` are zero-extended into AX before word stores. Copies to the neighboring
word slots at `0037fb5e` and `0037fb65` are pinned as context but are not repaired.
The public manifest carries the relevant instruction windows; complete bodies
remain private. Ten absolute WORD encodings and both unsigned branch windows
have independent tuple/encoding checks, separate from the immutable manifest hash.

The private gate checks all 573 bytes, all 174 independent instruction boundaries,
all branch/call/RET/fallthrough metadata, body digests and absence of overrides.
The initializer has three indirect import operands. Their Ghidra EXTERNAL tags
are pinned as analyzed annotations, not resolved from the instruction bytes.
Actual import destinations, effects and calling conventions remain unverified.

A separate research census scanned the 13,694 exported functions and found 17
direct memory operands overlapping `004a8fe0..004a8fe7`, all word-width, with no
conflicting direct wider operand. This does **not** exclude computed aliases,
data-held addresses, unexported code or external writers. It does not establish
an original object schema. The integration gate pins the current source-region
labels and dependencies; it does not advertise that bounded census as global
alias analysis.

## Known problems deliberately retained

- `DAT_004a8fe2` and `DAT_004a8fe6` remain DWORD placeholders. Their initializer
  copies and counter operations retain known width mismatches. This is not a
  complete region repair or a claim that native objects are adjacent.
- Both no-argument callers retain unbound ECX/EDX pseudo-locals and missing drain
  declarations. A forward declaration would not recover register transport.
- The initializer retains inferred pointers/prototypes, pointer-conversion
  failures and unresolved state. Its source rereads and memory/alias behavior
  are not validated by fixing the two declarations.
- Downstream drain/register/stack contracts, guest32 addressing/wrap, object
  regions, indirect effects and complete behavior are unverified.
- Casting a DWORD value to `uint16_t` does not establish a word-width abstract
  memory access. Reinterpreting its address adds unproved alias/lifetime premises.
  Neither shortcut is used here.

## Reproducible checks

Public gate, requiring Clang:

```sh
python3 tools/test_cpp_20261105_word_limit_widths.py
```

Optional private complete-body and exact-source full-audit gates:

```sh
python3 tools/test_cpp_20261105_word_limit_widths.py --private-export <private-export> --tooldeps <capstone-directory> --audit <exact-tree-audit.json>
python3 tools/verify_cpp_20261105_word_limit_widths.py --private-export <private-export> --tooldeps <capstone-directory> --audit <exact-tree-audit.json>
```

At O0/O2, baseline and corrected sources retain exactly 19, 1 and 1 diagnostics
under unlimited strict checks. Full-sweep flags retain three failing entries.
There is **zero syntax-pass gain**. No prototype is added merely to obtain a pass.

Authored fixtures use four exact extern spellings only in unevaluated type
assertions. They supply no game-global definitions. Runtime checks use initialized
local `uint16_t` arrays, unsigned boundary pairs, word assignments/addition and
byte initializer arithmetic, with neighboring word guards. A positive run checks
65,664 cases. O0/O2 reject signed, inclusive/reversed, widened and byte-only
comparisons, missing/short/wrong-neighbor/over-wide-effect stores, omitted addition
and carry into the neighbor. All mutations use defined C++ operations rather than
invalid alias casts. These are isolated value-operation tests, not executions of
original or canonical functions and not proof of admissible game runtime states.

Separate authored operations emit i16 loads/stores at O0/O2. Unsigned word
comparison may lower at O0 to signed i32 comparison of two zero-extended i16
values because of C++ integral promotion; the gate checks this bounded form and
rejects sign extension. Wider and signed interpretation mutants fail. Object/IR
inspection is not linked-game or original-machine validation.

Public negative controls cover manifest fields, every selected operand/window
byte, source reversal, CRLF changes, added prototypes/definitions, region-label
changes, dependent sources/headers, the exact CI invocation and retained existing gates.
The package CI diff is only an additive two-line step; unrelated future additive
gates are allowed rather than freezing the entire shared workflow. Private
controls corrupt indexed metadata, every body byte and instruction coverage/
flow fields. An optional full audit validates all 13,694 current source hashes,
original-body labels against the immutable inventory, the complete unchanged
entry/status vector and aggregates. Stale-source, altered-count/body-digest,
scope, status and balanced pass/fail-swap mutants are rejected.

The preceding audit has 4,051 passes and 9,643 failures. Those are syntax counts,
not reconstructed-game percentages. Independent review and the coordinator's
final exact-tree audit remain required before integration. Rollback consists of
the three source files, manifest, verifier, tests, this note and additive CI step.
