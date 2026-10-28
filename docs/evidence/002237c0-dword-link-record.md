# 0x002237C0: reused scalar storage and a two-DWORD link record

Status: scoped instruction/storage correction and C11 syntax repair. Original
entry and body digest are unchanged. Full function ABI, helper behavior, guest
address translation, game behavior and byte-identical rebuilding are unverified.

The private original XBE was freshly authenticated against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The complete contiguous 1,286-byte body at `0x002237C0` hashes to
`459BEC554406C2459C8F0F7008F0FB2786B1F40C7025C436571956D6598D1C6B`.
`scripts/verify_002237c0_link_words.py` checks that body and 17 instruction windows.

Let S be ESP after the aligned allocation and saved EBX/ESI/EDI. Observed facts:

- The slot at S+0x14 initially receives an m32fp cosine and, after traversal,
  an m32fp converted integer. At `0x00223BE0`, MOV overwrites it with a raw
  DWORD link. These earlier scalar values now use bit-copy interpretation
  within the same raw storage rather than float/address numeric conversions.
- `0x00223BB9..0x00223BC5` initializes S+0x18 and saves the nonzero value
  there. The C source represents S+0x14/S+0x18 with one contiguous
  `uint32_t[2]`, retaining all bits and the original reset timing. It does not
  initialize unknown bytes merely to satisfy syntax.
- `0x00223BC7..0x00223BE4` computes an unsigned wrapping multiply/add, shifts
  right by 21, reads a DWORD at `0x00414DA0 + index*4`, saves it to S+0x14,
  and publishes that slot's address. The original C draft both treated links
  as floats and multiplied an already DWORD-scaled pointer offset by four.
- Both explicit copy-call paths receive the two-word record's base. The
  existing-capacity path also pushes its raw first DWORD as the fifth explicit
  argument, then advances the output pointer by eight bytes. The patch retains
  those argument expressions and existing branch structure. The callees'
  implicit register contracts and implementations are not established here.
- `0x00223C52..0x00223C86` recomputes the same bucket, clears S+0x18, and
  follows first-DWORD links until zero or the temporary record's address.
  Removal copies that record's first DWORD into the incoming link. The C now
  uses DWORD loads, zero tests and pointer-to-link traversal without any
  numeric float conversion. Loop and final cleanup remain in place.

Validation:

- The original full-source baseline failed on float-to-pointer casts. The
  repaired full source passes isolated Clang C11 syntax for Windows i686 and
  x86_64 using the existing sweep flags. The additional pedantic checks retain
  `-Wno-strict-prototypes` for the shared, intentionally unresolved `code()`
  declaration; no guessed external prototypes were introduced.
- The verifier extracts the actual edited insertion/call/removal block into
  a host fixture. At both `-O0` and `-O2`, 108 cases cover zero/odd/even values,
  unsigned multiply/add overflow, both capacity branches, empty/nonempty
  chains, callback-inserted prefixes, a callback that already removed the
  temporary node, raw fifth-argument bits, value reset and an adjacent canary.
- Three negative controls deliberately corrupt the table stride, fifth
  argument and value reset. Each is rejected by the fixture.
- Independent read-only review approved this limited correction against the
  authenticated disassembly. The original body, aliases and unresolved ABI
  labels remain distinct from the host syntax and fixture results.

The fixture supplies low-address host storage and substitutes copy callbacks.
It is not execution of the original Xbox function or proof of either helper.
The actual source's host stack address still requires a guest-memory binding
before publication as a 32-bit address; the explicit cast does not implement
that binding. Other Ghidra register inputs, aggregates, scalar/SIMD operations,
x87 state and indirect calls remain unverified. No game, assets, saves,
deployment or production data were changed.
