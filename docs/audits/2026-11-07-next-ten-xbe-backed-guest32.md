# Second ten-function C++17 guest32 source reconstruction batch (2026-11-07)

This review contains ten **independently syntax-failing original-address drafts** reconstructed from the user-provided, authenticated retail Xbox Brute Force XBE. The test contracts are **bounded original instruction-derived guest32 source models**; this is **not** recovered native Xbox ABI, original machine execution, cross-function linkage, complete game behavior, or a byte-identical build.

**Retail XBE pinned SHA-256:** `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The private original XBE is never committed.

| Address | XBE body bytes | Reconstructed instruction-level behavior |
|---|---:|---|
| `0x002506A0` | 28 | Flagged-list traversal: byte +0x11, return predecessor EAX |
| `0x0025D880` | 28 | Flagged-list traversal: byte +0x25, return predecessor EAX |
| `0x00270DD0` | 28 | Flagged-list traversal: byte +0x2D, return predecessor EAX |
| `0x0027CAC0` | 28 | Flagged-list traversal: byte +0x1D, return predecessor EAX |
| `0x0027CB90` | 28 | Flagged-list traversal: byte +0x21, return predecessor EAX |
| `0x001FAF70` | 34 | Follow next-pointer guest DWORD, compare +0x0C to one dereferenced key, store result |
| `0x000618D0` | 51 | Copy two DWORDs per record (read/write interleaving) and store destination end |
| `0x002F108B` | 27 | Copy exactly three DWORDs with overlapping guest addresses allowed |
| `0x002E7580` | 49 | Initialize record with byte writes, constant tag, four zero DWORDs, two -1 DWORDs |
| `0x001736A0` | 52 | Initialize record with two constant DWORDs and original non-monotonic byte-write order |

## Original evidence and test gates

`python3 scripts/verify_20261107_next_ten_guest32_xbe.py --xbe PRIVATE_XBE` authenticates the full XBE and checks **ten full contiguous source-provenance body SHA-256 digests (353 bytes)**, **34 exact original-instruction operand windows**, **16 original branch destinations**, and **369 negative mutation controls**.

`python3 tools/test_cpp_20261107_next_ten_guest32.py` compiles the actual ten edited canonical translation units under strict Clang C++17 at both `-O0` and `-O2` and executes **8,192 isolated guest-memory traces per function per optimization**, for **163,840 trace comparisons**. Independent mock guest-memory oracles verify original read/write order, byte and DWORD widths, modeled live-out EAX, empty and nonempty loops, and select guest-address wrap/overlap cases. Ten intentionally changed original offsets, reads, stores or strides are rejected. Source identity and `Input x86 body SHA-256` labels remain unchanged.

The original XBE is **not executed** in the public tests. Inputs are explicit host-side `uint32_t` guest register/stack word models and are **not reconstructed original C++ prototypes**. The test mock does **not** implement fault behavior, physical guest VA translation, whole-machine CPU flags, guest stack aliasing, unmodeled register live-outs, thread concurrency, or native linkage. Five list traversals require a terminating flag and are not claimed to terminate on malformed records. `ABI_UNVERIFIED`, `CROSS_FUNCTION_UNVERIFIED`, and `NOT_NATIVE_LINKED` remain in each canonical source.

### Preserving original instruction details

- Five flagged-list functions read the next guest pointer at offset `+0`, check the original individual **byte** flag, and return the original predecessor EAX when the terminating flag becomes nonzero. They do not promote the flag to a 32-bit read.
- `0x001FAF70` performs the third-stack-word key **DWORD read only if the list is nonempty**, then compares at `+0x0C`; its return EAX is the original guest output address.
- `0x000618D0` reads and writes alternating 32-bit words before advancing by eight. The empty path writes the original destination unchanged. Copying through a temporary structure or hoisting all reads would alter original overlap semantics.
- `0x002F108B` makes exactly three source-DWORD reads interleaved with destination-DWORD writes, with a 32-bit wrapped source-pointer return.
- `0x002E7580` writes three individual bytes before the tag, another byte after, then four zero DWORDs, then two all-one DWORDs.
- `0x001736A0` writes eight bytes at offsets `0x0E..0x15` before offsets `0x0C..0x0D`, then `0x16..0x17`; the order is deliberate.

### Exact body identity ledger

- `0x002506A0`: 28 bytes, original body SHA-256 `1B615C5A819D609B490DA97A0AC27A23E456C4EF7F934A67F1CD8F370A733431`
- `0x0025D880`: 28 bytes, original body SHA-256 `E15B4AF8376AD8D6BD10BBE873C59BA03249057D053F61A63FE8168CB3A1D219`
- `0x00270DD0`: 28 bytes, original body SHA-256 `C6256B14628E62147483E2E7A8718F2169479FCFDEBEA7168C8F7F3E569DD3DB`
- `0x0027CAC0`: 28 bytes, original body SHA-256 `31C31481B3FD03C996A9BA81B4155FB3D88C630A81D884F5F729CC2C0E48864C`
- `0x0027CB90`: 28 bytes, original body SHA-256 `33266985A320CB0B9FF63D516833A6A4C295378D580A496DCE9C7D3A7D233725`
- `0x001FAF70`: 34 bytes, original body SHA-256 `545C2D8C55EC9C0879D9B077005DFDFBCFC36BEB8DE7F1BF1DEB48CB5C4C982B`
- `0x000618D0`: 51 bytes, original body SHA-256 `BAA5DACA98E69D531ECCDB4CA4C7DDCB5C15A3BC92E78CE82276BC361C398B79`
- `0x002F108B`: 27 bytes, original body SHA-256 `5A528C5CD9161A40EE3ADCF2610D926C9C800753337218F0661092D1D2929180`
- `0x002E7580`: 49 bytes, original body SHA-256 `205EC72C6826C01320D87261F17580333696C778127427C642D63532DBCCC1F2`
- `0x001736A0`: 52 bytes, original body SHA-256 `DD9E08C3484F856CCED33FC3C5F5512CE2C69949645BCA707669312BF262B4C8`

**No compilation-only casts, invented C++ member fields, guessed calling conventions, or new game systems are included.** The test signatures model known source inputs without asserting original ABI parity.
