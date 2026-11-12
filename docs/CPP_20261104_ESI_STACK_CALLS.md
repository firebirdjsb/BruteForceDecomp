# Seven existing ESI/stack guest32 handoffs

This batch restores one call in each of seven drafts to the already-existing
`FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0)` model. It
adds an exact source-matched declaration where absent. Caller definitions,
callee definition/prototype, pointer and array operations, and all other source
text are unchanged. These are syntax-checked drafts, not recovered Xbox ABIs.

## Instruction-backed handoffs

| Caller | Original call | ESI represented by existing source | First pushed DWORD |
| --- | --- | --- | --- |
| `0014bd40` | `0014bd52` | `unaff_EBX + 0xac` | `unaff_EDI` |
| `00173270` | `00173295` | `iVar1 + 0x88` | `unaff_EDI` |
| `001fba60` | `001fba74` | `in_ECX + 0xb0` | `in_EAX` |
| `0020d710` | `0020d72f` | `param_1` | existing DWORD read at `unaff_EDI + 4` |
| `0020db30` | `0020db50` | `in_EAX` | existing DWORD read at `param_1 + 4` |
| `00226360` | `00226375` | `unaff_EDI + 0x1e8` | `in_EAX` |
| `0022dc60` | `0022dc75` | `unaff_EDI + 0x35c` | `in_EAX` |

All seven direct E8 instructions target `0008f6a0`. Each call is preceded by
one register DWORD push and followed immediately by `ADD ESP,4`; the original
conditional skip reaches the same continuation. The callee saves EBX, loads
its incoming stack DWORD from `[ESP+8]`, and ends in a plain return.

The `001fba60` producer is `MOV ESI,ECX` followed by `ADD ESI,0xb0`, rather
than a LEA. `00173270` obtains EBX through the same two loads already represented
by `iVar1`. `0020d710` loads ESI from incoming stack word zero after two saved
registers. `0020db30` initializes ESI from entry EAX and EDI from incoming stack
word zero after three saved registers. The latter two loops advance ESI by
eight, matching their existing logical source variables. No implicit-register
locals are initialized or promoted to new caller parameters.

The first argument casts the existing integer guest word to `std::uint32_t`
before any restored displacement addition, preserving modulo-2^32 arithmetic.
No native pointer is converted into a DWORD. Register payloads preserve all
32 bits through unsigned conversion. The two existing payload memory operands
are left textually unchanged, including their unresolved address semantics.

## Evidence and checks

The manifest `metadata/cpp_20261104_esi_stack_calls.json` pins the source
preimages, Git blobs, source results, original body identities, short instruction
windows, and the unchanged model declaration/definition. Thirty preexisting
`metadata/cpp_*.json` and `metadata/cpp_*.csv` records were checked for historical
caller overlap; none contains these seven caller entries.

`tools/test_cpp_20261104_esi_stack_calls.py` checks:

- Exact two-way reversal of only one declaration and one call per source,
  retained original body labels and inventory paths, and unchanged model files.
- Raw ESI producers, payload register/load, direct call target, conditional skip,
  stack cleanup, and continuation, with one-bit mutations of every retained
  instruction byte and changed source-expression/address controls.
- Complete source syntax and object compilation in strict C++17 at O0 and O2.
  At both levels and in both modes, each original source fails only for the
  absent declaration. Adding only the correct declaration instead produces the
  expected single wrong-arity failure.
- Initialized scalar capture fixtures at O0 and O2, including high bits, signed
  bit patterns, wrap boundaries, walking bits and 20,000 deterministic input
  pairs per caller. Wrong ESI, wrong payload, and deleted-call controls fail.
  Only in these synthetic fixtures, the two memory payload expressions are
  replaced by initialized signed DWORD values. The real pointer reads are
  compiled but are never executed by these tests.
- Optional private replay of the seven complete caller bodies plus callee:
  477 bytes and 164 independently decoded instructions, complete range
  coverage, exact inventory hashes, matching instruction boundaries, clean
  analyzed metadata, exact compact windows, and no intervening ESI or payload
  EAX overwrite on the straight handoff corridor.

Run with a Clang C++17 compiler:

```sh
python3 tools/test_cpp_20261104_esi_stack_calls.py -v
```

An outside-tree candidate can be checked with `--root REPO --candidate-root
CANDIDATE`. Private replay additionally accepts `--private-export EXPORT_DIR`;
Capstone must be importable. This private check reads bytes but never executes
them. Private exports, executable bytes, and local paths are not included here.

## Limits

The private Ghidra export matches the canonical original body hashes, but has
no stored original FileBytes. This batch does not reauthenticate the whole XBE.
The fixed original XBE digest remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

Live-in register contracts, guest-to-host memory translation, preexisting
signed address/loop arithmetic, nested-call effects, and complete caller
semantics remain unresolved. Neither canonical caller nor callee nor any game
bytes execute in the fixtures. No linkage, gameplay behavior, native Xbox ABI,
byte-identical rebuild, or new global syntax percentage is claimed.
