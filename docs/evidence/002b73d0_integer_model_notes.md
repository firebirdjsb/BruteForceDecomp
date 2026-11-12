# Proposed native 0x002b73d0 operation: model evidence

Original function-body SHA-256 supplied by coordinator:
`D040EB9CFF629D1CE789332F83C6CC75F57B8E0DC023661597F400B4BE619636`.
This identifies the target; these tests do not execute or validate original machine code.

## Provenance

`generate_002b73d0_three_term_integer_model.py` reuses the integer scalar
`add`, `multiply`, constants, and edge list verbatim from canonical
`tests/generate_002b3e60_multiply_add_integer_model.py` (source SHA-256
`914ce626554bef5148e7224565bd074ae777e1518766193af133c20553cef4c5`).
These scalar primitives are reused, not newly independent implementations.
New work comprises the three-term packed instruction composition, corpus,
and independent finite rational cross-checks. The generator uses no native
floating-point arithmetic as its numeric oracle.

The Fraction cross-check decodes finite binary32 values into rational numbers,
performs exact real arithmetic, and rounds by binary-searching adjacent finite
binary32 encodings. It cross-checks six named cases under all 16 control modes
(96 checks), including staged multiply/add rounding, subnormals, signed zero,
and cancellation. It is an independent finite **value** check, not an independent
exception-status derivation. These anchors intentionally exclude overflow,
NaNs, infinities, and the tiny-result-rounding-to-normal boundary. The integer
corpus separately includes those cases, but their expected status/payload
semantics depend on the reused scalar model.

## Composition and scope

Each step rounds independently: packed A*x, packed B*y, packed A+B,
packed C*z, packed (A+B)+C. A/B/C contain matrix triplets at indices 0/4/8,
with positive zero inserted as lane 1. Outputs are lanes 0, 2, 3; hidden lane
exceptions still accumulate. NaN destination/source order is preserved.
Matrix indices 3 and 7 are never operands; named matrices poison them with
signaling NaNs to test that they are ignored.

8,148 input sets x16 RC/DAZ/FTZ modes =130,368 records. Corpus size is
9,907,968 bytes. Contents: 12 named anchors; 2,312 edge-pair combinations;
1,728 selected edge triples; 4,096 deterministic random sets (seed 0x2b73d0).
Binary layout is 19 little-endian uint32 words per record:
MXCSR; matrix[11]; vector[3]; expected output[3]; expected full MXCSR.
Corpus SHA-256:
`a5044a16d47ec792c737cb7c390849217758d43fdb33d7c6d804792b3877fc90`.

The compiled harness calls the proposed `void FUN_002b73d0(float*,float*,float*)`
wrapper in matrix, vector, output order. It uses initialized native float arrays,
not guest addresses or an emulated register ABI. Seven output layouts cover
separate output and exact/partial matrix/vector overlap. It checks all surrounding
memory, output bits, and full MXCSR. All 64 preexisting sticky seeds are checked
for every named anchor in every mode; other disjoint records additionally check
a rotating nonzero seed. Aliased records check zero initial sticky state. Input
matrix and vector remain disjoint. The caller's MXCSR is restored by RAII on
all ordinary returns after capture, including failures. Unmasked exception/trap
behavior, guest memory faults, input-input aliasing, original CPU behavior,
original ABI, original-versus-reconstruction equivalence and byte matching are
not established.

## Run

From package root:

```
python3 tests/generate_002b73d0_three_term_integer_model.py model.bin
clang++ -std=c++17 -O2 -Wall -Wextra -Werror -fno-fast-math -ffp-contract=off \
  -msse2 -Iinclude -I"$REPO/include" tests/test_002b73d0_three_term_integer_model.cpp \
  src/0x002b73d0.cpp -o model-check
./model-check model.bin
```

`--single-anchor` accepts a one-record file for negative-control testing.
The checker rejects incorrect record counts, read errors, and trailing bytes.

Validation completed at `-O0` and `-O2` using strict C++17, `-Wall -Wextra -Werror`,
`-fno-fast-math -ffp-contract=off -msse2`: both passed all 130,368 records and
1,054,848 wrapper comparisons. This validates only the proposed native wrapper
against this modeled contract on the test host.
