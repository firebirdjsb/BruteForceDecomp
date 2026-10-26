# 0x00232BE0 scalar SSE reconstruction

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original 349-byte body SHA-256:
`104CDE5AD565A5444DD515A4744D7BD78CE63290CAED96243DFC37262547C65C`.

The prior draft used array assignments, numeric float/integer casts and
unresolved RCPSS pseudo-operations. The corrected C11 draft represents the
observed low-lane SSE operations with compiler intrinsics. Constants are
copied from their exact original binary32 words, without decimal rounding.
The instruction and constant windows are pinned by the shared stack-storage
verifier; its name does not imply that every pinned fact is stack storage.

## Original control and arithmetic facts

MOVSS at 0x232be3 loads the input word. RCPSS at 0x232bec computes its
approximate reciprocal. ORPS applies the sign mask at 0x38d900 for comparison
with -1.0 at 0x38d870. COMISS/JB at 0x232bfb/0x232c02 takes the other path
for unordered values too. CMPNGE's low predicate reproduces this branch
selection; this is a result predicate mapping, not exception equivalence.

Each path squares its selected value (input or initial reciprocal), then
performs the scalar ADDSS, RCPSS and MULSS ladder in the observed order.
The final small-path multiplication is scaled-input times final-reciprocal;
the large path multiplies final-reciprocal by scaled-initial-reciprocal,
then subtracts from the sign-selected half-pi word. Operand order is retained.
MOVSS/FLD at 0x232d33/0x232d38 forms the original return bridge; the C return
retains the draft float10 type without establishing the whole guest ABI.

## Executed comparison

`tests/x86_232be0_reference.S` follows the original scalar SSE sequence,
adapting memory bases and x64 callee-save state for a host test. It does not
execute an original Xbox binary. `tests/test_00232be0_scalar_sse.c` includes
the actual repaired C function and compares its binary32 result bits with
that instruction-derived oracle. Each optimization level (-O0/-O2) passed
160,176 cases: finite randomized inputs, signed zeros, subnormals, branch
boundaries, infinities and quiet NaNs under eight MXCSR settings. The script
uses `-ffp-contract=off`. Both negative controls must report mismatches:
replacing initial RCPSS with exact division, and forcing the small path.

Independent review checked constants, low-lane operand order, branch
selection and oracle construction, and reran both executables successfully.
These are bounded current-CPU scalar-result comparisons. They do not verify
Xbox RCPSS approximation accuracy, inherited upper XMM values, exception
flags/traps or instruction scheduling, signaling-NaN behavior, x87 return
state, callers, or a byte-identical rebuild. Full function levels C/D are
unverified; syntax and the identified instruction/dataflow facts are checked.

Run `python scripts/verify_00232be0_scalar_sse.py` for the public comparison;
add `--xbe <private-original>` to recheck pinned original evidence locally.
The XBE and private disassembly are never committed.
