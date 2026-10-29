# 0x001F8DB0: incoming F32, node fields and SETE byte

Status: scoped C11/instruction repair. Full entry/caller ABI, guest pointer
translation, helper behavior, Xbox execution and byte equivalence remain
unverified. The function signature and original body identity are unchanged.

The private original XBE was authenticated against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The ordered body consists of 909 bytes at `0x001F8DB0`, 94 at `0x001F9140`
and 702 at `0x001F91AE`: **1,705 bytes**, digest
`E172DCC1CDA08273709F9E9839B28BF13A40DBB3C4E90BA83BBE0FDE8B7C5C8F`.
The verifier checks those exact ranges and ten instruction/data windows.

## Established facts

S is steady ESP after SUB ESP,0x54 and saved ESI/EBX/EBP/EDI. The early
return saves only ESI, so its offsets differ. On the main body, S+0x68 is
the first incoming guest DWORD and S+0x6c is the second.

- `0x001F8E7B` and `0x001F8EAF` use FLD m32fp on S+0x68. The original
  code later overwrites that same slot with a traversal pointer at
  `0x001F8F44`. The draft's pointer-typed first parameter is retained as
  an explicit host proxy. Its low 32 bits are decoded by bit copy into
  `incoming_step`, separately from the later pointer lifetime. No pointer
  is dereferenced and no numeric address-to-float conversion is performed.
  This does not establish how a host caller supplies original guest arguments.
- `0x001F8E6B..0x001F8E82` compares node+0x10 with zero using x87. Ordered
  nonnegative values accept an F32 argument addition and final FSTP m32fp.
  Negative and unordered values leave that field unchanged. C uses explicit
  F32 word views, extended comparison/addition and a four-byte store.
- `0x001F8EAF..0x001F8EC4` adds the incoming F32 to node+0x14, stores with
  FST (without popping), and compares the **unrounded extended sum** with
  the authenticated binary32 0.2. Ordered greater/equal accepts the branch;
  unordered does not. C retains that extended sum after storing its F32 copy.
- `0x001F8E22..0x001F8E35` and `0x001F9043..0x001F9059` establish F32
  comparisons with binary32 0.1 and the raw `0xbf800000` sentinel word.
  Numeric conversion of integer field contents is not the original operation.
- `0x001F90C1` writes SETE to BYTE[S+0x6c]. The C mask replaces only that
  low byte and retains all upper 24 bits; no zero-fill is introduced.

FENV_ACCESS ON protects the tested extended/store boundaries. The existing
default Windows float10 definition remains a host precision proxy.

## Focused evidence and limits

Full-source i686/x86_64 syntax passes with the repository sweep flags and
additional pedantic checks, excluding the existing pointer-sign warning
policy for unrelated list locals. No original external prototype was changed.

Actual-source excerpts cover the input-word decode, guarded field update,
retained extended sum, 0.1/sentinel predicate and low-byte write. The field and
comparison operations run against a separately transcribed host x87 reference.
At each of `-O0` and `-O2`, **26,980 numeric/predicate cases** cover signed
zeros, subnormals, finite extremes, infinities, NaNs, threshold boundaries and
4,000 deterministic random triples under four DAZ/FTZ settings. Finite results
and signed zeros compare by bits; arithmetic NaNs compare by class. Guarded
NaN fields must remain bit-exact, and untouched node words are checked.
Another **131,072 cases** cover low-byte replacement with retained upper bits.
CW/MXCSR are restored after execution. Numeric tests select 80-bit host storage,
masked x87 exceptions, 64-bit precision and nearest rounding.

A targeted input adds `-2^-30` to binary32 0.2: the extended sum is below
the threshold while the stored float rounds back to 0.2. A negative control
rejects comparing that stored float. A second rejects losing upper bytes on
the SETE replacement. These are scoped host-adapted excerpts, not execution
of the original list traversal or helper calls.

Entry EAX, complete list/node structure layouts, the source's pointer-width
proxies and address-of-argument uses, helper register outputs, event dispatch,
other frame aggregates, FP status/traps, NaN payloads and original Xbox hardware
behavior remain ABI_UNVERIFIED. No new structure fields, caller prototype,
guest-memory adapter or gameplay meaning is claimed.

No game process, installation, assets, saves, deployment or production data
was changed. Private XBE bytes and full disassembly remain outside Git.
