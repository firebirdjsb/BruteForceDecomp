# D3D guest command writers with register and stack inputs

The private retail XBE supplies the instruction evidence. The manifest records
each original body digest and ordered range, the refill and YUV helper calls,
the FrontFace tail jump, and the observed return cleanup. The strict C++17
baseline is source commit f12513fb95dfa9d48833cae4692d15be6126f3ca.

| Entry | Guest inputs | Evidence modeled |
| --- | --- | --- |
| 0x0036ccf0 | EDI and four stack DWORDs | Special all-ones method, four raw payload writes, cursor and EAX |
| 0x0036dcc0 | ESI device | Ordered record rotation, command words, late flag reads and EAX |
| 0x0036fb10 | Stack output address | Signed count arithmetic, flag guard, refill minima, zero fill and output offset |
| 0x003702e0 | Stack DWORD | Front-face command and replacement argument to 0x00370260 |
| 0x00370600 | Stack DWORD | Byte format lookup, flag transition, conditional command and EAX |
| 0x00370680 | Stack DWORD | Global state store and call to 0x00371190 with device and EDX cursor |
| 0x00370b40 | ESI stage and stack DWORD | Deferred state, mode branches, byte store, masked shift, dirty word and EAX |
| 0x00370c50 | EAX stage and two stack DWORDs | Conditional command, unconditional deferred store and original state in EAX |
| 0x00371190 | EDX cursor and stack device | Register-to-stack handoff from the YUV writer, format-byte cases and EAX |

Run the linked C++17 fixture and, on Linux with ELF32 execution available,
the retail differential using a private XBE.

    python3 tools/check_cpp_d3d_guest_mixed_writers.py
    python3 tools/check_cpp_d3d_guest_mixed_writers.py --xbe /path/to/private/default.xbe

The checker links the nine edited functions and the existing CullMode model
with the fixture at -O0 and -O2. It checks EAX, the full mapped memory windows,
refill call counts and last refill arguments. The Linux harness executes the
same address-pinned writer bytes, including the original CullMode tail target
and YUV helper, and checks stack cleanup at return. The varied cases include
room and refill paths, high-bit and raw floating-point payload DWORDs, writes
overlapping device and global storage, and inactive branches.

The refill routine is authenticated by body hash and replaced in both harnesses
with a fixture that captures arguments and returns an injected cursor. Valid
mapped memory and DF clear are fixture assumptions. A general guest memory
adapter, refill behavior, live registers other than EAX, EFLAGS, arbitrary
aliasing with the machine stack, Xbox linkage, GPU behavior and byte matching
remain unverified.
