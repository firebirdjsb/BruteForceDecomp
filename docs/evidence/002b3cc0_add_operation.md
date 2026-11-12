# 0x002b3cc0 bounded packed ADDPS operation

The canonical C++ wrapper retains the original void(float*, float*) interface
and exact body identity. It now invokes an ordered native SSE memory operation
instead of unresolved decompiler bit-concatenation arithmetic. This remains a
bounded host operation, not an Xbox ABI adapter, original-machine-code test,
original-CPU equivalence claim, cross-function game integration or rebuild.

The original complete 52-byte/15-instruction body was independently reviewed
against the private immutable program-memory export. Its SHA-256 is
`A8EC695777DE4EF1C9E6389D84A07A1AF70D214CF5A961E877EEB5DFA8A3374F`.
Original FileBytes are unavailable; complete XBE reauthentication is not claimed.
The private body record is not a repository artifact or CI dependency.

## Operation and limitations

Memory-form MOVSS plus MOVHPS fully define each operand as [x,+0,y,z]. Both
three-float inputs are loaded before ADDPS and before either output store. ADDPS
retains destination/source order, including NaN payload precedence. The packed
zero lane stays +0 and contributes no exception flags. Stores write exactly
12 bytes; native whole-float overlaps in either direction and exact alias are
covered. The helper uses no C++ floating arithmetic and no x87 instruction.

The supported host is GNU/Clang x86-64 Linux SysV with IEEE binary32 objects.
Both pointers cover three live alignof(float)-aligned objects. MXCSR exceptions
must all be masked; RC/DAZ/FTZ controls and accumulated status flags are retained.
No spare x87 entry is required. Tests preserve FCW, FSW, FTW, FOP and live80
values, including a full stack; FIP/FDP and inactive/reserved bytes are excluded.

Original scratch overwrites the saved ECX: final EAX=ECX=destination, EDX=source,
XMM1=result and XMM2=loaded source. Integer EFLAGS are unchanged and RET 8 removes
the argument words. The native wrapper intentionally does not implement those
guest outputs, guest cleanup or 32-bit addresses. Guest stack/argument/scratch
aliasing, address wrapping, faults, unmasked exceptions, MMIO and concurrent
observers remain excluded. Native NaN/DAZ/FTZ tests do not prove original
Pentium-III behavior.

## Frozen evidence and canonical-path gate

The [reviewed proposal](002b3cc0_add_operation_reviewed_proposal.md) is preserved
verbatim as historical evidence, including its then-outside-tree status and
artifact names. The evidence manifest
`metadata/cpp_20261105_002b3cc0_add_operation.json` is also unchanged, SHA-256
`3cad7e8096a7d3772b6c4b60ef1ad4cebcdf2153f9f040dc7306885226fa99c8`.

`tools/test_cpp_002b3cc0_add_operation.py` maps those frozen artifact names to
the actual canonical source through `source_layout.source_path`, the installed
include header, tests, generator and historical proposal. It validates their
exact digests and exact reversal to `tests/fixtures/002b3cc0_before.cpp.txt`.
It compiles that canonical source directly for its positive behavior and
codegen checks. There is no shadow replacement source used as the positive
implementation. Temporary copies exist only for deliberate negative mutations.

The gate checks the exact seven ordered SSE operations, forbids extra SIMD or
x87 arithmetic/calls/wider accesses, and requires one normal native RET without
immediate cleanup. Both Clang O0 and O2 execute 5,378,048 independent Python
integer-model comparisons and 638,976 native/oracle/overlap/state comparisons,
with exact 12-byte guard-page boundaries and a read-only source. Public CI runs
45 negative controls; optional private full-body validation adds 52 corrupted
body-byte controls for 97 in total. The gate refuses unsupported MXCSR modes.

Run the public check, without any private original data:

```sh
python3 tools/test_cpp_002b3cc0_add_operation.py
```

The existing C++ compatibility workflow invokes this command alongside the
other bounded native-operation gates. An optional `--program-record` argument
can validate a separately held private record; it must not be uploaded to CI.

## Independent and staged validation

Independent review approved the unchanged wrapper/header/tests. It reran the
full Clang gate, inspected Clang/GCC O0/O2/O3 codegen and separately exercised
9,216 hand-derived bit/status anchors at each compiler/optimization combination.
It also checked the unused packed lane in all 16 RC/DAZ/FTZ modes.

On the staged integration tree, the canonical-path focused gate was rerun at
Clang19 O0/O2, with and without the optional private record. GCC14 O1 ASan+UBSan
also passed all 5,378,048 model and 638,976 native cases, including guard pages.
LeakSanitizer was disabled and is untested. Compiler sanitizers do not observe
all inline-assembly accesses; separate page/sentinel guards enforce the span.
Clang sanitizer success is not claimed: packaged ASan runtime libraries were
unavailable during independent review.

These focused results do not replace the final exact-tree full-inventory
C++17 audit and repository safety/provenance checks required before publishing.
