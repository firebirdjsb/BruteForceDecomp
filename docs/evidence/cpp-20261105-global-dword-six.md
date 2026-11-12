# Six absolute guest DWORD operands in 0x00087cc0

Status: bounded original-operand evidence and isolated C++17 checks only.
**ABI_UNVERIFIED. No recovered global mapping, callback identity, whole-caller
behavior, linked game, original-machine comparison or byte-match claim.**

Base: `ecbdf69bb2c6ccd6c92fa336c355d64e70875a13`. The unchanged original-XBE
identity pin is `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The private indexed export was used as bounded JSON data. Its complete body
bytes agree with the canonical inventory; the complete original XBE was not
available or reauthenticated. No original machine code or game caller ran.

## Evidence and exact scope

Entry `0x00087cc0`, label `FUN_00087cc0`, has the complete inclusive body
`00087cc0..00087d11`: 82 bytes and 14 instructions, with SHA-256
`93CBE7D076AD040F798E96BC4C2CC58049D955F52052206A8244E1CBE367739B`.

Each instruction below is an unprefixed `C7 05 disp32 imm32` absolute DWORD
memory store. The destination and immediate are distinct operands.

| Instruction | Exact bytes | Destination guest VA | Immediate DWORD |
| --- | --- | --- | --- |
| `00087cc5` | `c70550c63b00a0792300` | `003bc650` | `002379a0` |
| `00087ccf` | `c70554c63b00d0792300` | `003bc654` | `002379d0` |
| `00087cd9` | `c70558c63b00007a2300` | `003bc658` | `00237a00` |
| `00087cee` | `c70550c63b0010782300` | `003bc650` | `00237810` |
| `00087cf8` | `c70554c63b0010792300` | `003bc654` | `00237910` |
| `00087d02` | `c70558c63b00a0782300` | `003bc658` | `002378a0` |

Only the six source RHS operands change: `&UNK_........` becomes the matching
`UINT32_C(0x........)`. The existing `uint32_t` global declarations and lvalues
remain unchanged. A boundary comment is added. Reversing those edits and
removing the comment reproduces the entire preimage SHA-256 and Git blob ID.
The source entry, body digest, signature, all declarations, direct-call
declaration and statement, and all other operations remain byte-for-byte intact.

The unchanged direct CALL at `00087ce3` has bytes `e838000000` and target
`00087d20`. Its presence does not prove the existing host declaration's ABI.
The three initial stores and three later stores stay in their original source
order around that call. No address is cast from a host symbol or bound to a
host callback. No type, argument, register input or external prototype is added.

The exact contract and reversible source pins are in
[`cpp_20261105_global_dword_six.json`](../../metadata/cpp_20261105_global_dword_six.json).
This entry overlaps neither the 100-function literal cases nor their quarantine.

## Limitations

The existing global symbols are syntax-only storage hypotheses. Their linker
definitions, guest-to-host mapping, identities and runtime alias relationships
are not established. A proven 32-bit immediate is not a host function pointer.
The remaining param_1 memory operations, existing direct call, return/register
state and complete caller behavior are outside this repair. Public instruction
tuples and private body hashes do not independently authenticate a complete XBE.

## Reproducible checks

Public CI gate:

```sh
python3 tools/test_cpp_20261105_global_dword_six.py
```

It requires Clang and checks exact source reversal and canonical body identity,
70 manifest-leaf mutations, all 60 store-byte mutations, independent tuple-field
checks, invalid C7 memory encodings and additive CI wiring. The complete repaired
translation unit passes strict C++17 syntax and object compilation at O0/O2,
with `-ferror-limit=0` and `-Werror=pointer-to-int-cast`. Restoring the original
six RHS operands reproduces six pointer-to-integer errors at both levels.
An object file is not a linked or executable game.

The authored fixture extracts the six exact repaired statements. Each isolated
store receives fresh initialized, aligned `uint32_t` array objects, with three
adjacent slots corresponding only to the destination ordering. Six seeds and
all neighboring words are checked after each store. Fresh storage for every
store is necessary: reusing the initial stores' identical high halfwords could
hide later short-write mutants. O0/O2 runs reject wrong-value, zero-value,
wrong-destination, missing-store, short-write and over-wide-effect mutants for
each of the six assignments: 72 negative runs and two positive runs.
The over-wide mutant performs two defined DWORD stores, avoiding an invalid
`uint64_t` alias. This fixture executes no game caller or callee and supplies no
guest-memory mapping or original-machine oracle.

Optional complete private-body validation:

```sh
python3 tools/verify_cpp_20261105_global_dword_six.py --private-export <private-export-directory> --tooldeps <capstone-directory>
python3 tools/test_cpp_20261105_global_dword_six.py --private-export <private-export-directory> --tooldeps <capstone-directory>
```

The verifier reads one bounded indexed record, checks all 82 original body
bytes, exact instruction coverage, all 14 independent Capstone boundaries,
every analyzed flow edge/fallthrough/type and absence of overrides. The six
exact destination/value/width tuples and unchanged direct-call target are
independently decoded. The private test adds 231 corruption controls, including
every body byte and every instruction's coverage and control-flow fields.
Private complete bodies and local paths remain outside Git.

Independent review, inventory/progress updates and a full exact-tree audit
belong to the coordinator. The expected one additional syntax pass is not
published coverage until that audit completes. Rollback covers the one source,
manifest, standalone verifier, tests, this evidence note and additive CI step.
