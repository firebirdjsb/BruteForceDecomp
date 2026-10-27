# Additional guest address representations: 0x0031C7CC and 0x0034F2B2

Status: **instruction-backed literal/data-address fixes; focused C11 syntax
passes; ABI_UNVERIFIED; no callback connection or runtime behavior claim**.

The original XBE was authenticated in full against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Complete ordered body ranges were read from that XBE and independently hashed:

| Original entry | Body bytes | Body SHA-256 |
| --- | ---: | --- |
| `0x0031C7CC` | 223 | `6BB9E15B51CE3422A3B71D07FEDC8AF6A4858886A5E1DA46050ADF9F157245AC` |
| `0x0034F2B2` | 448 | `A812D0C32C08F75AECCC753222FD29367FF086A92BD6C4B231E4CA2E0267C87A` |

Both source files preserve their original entry and embedded original body hash.
The full original bodies and all actual uses of the replaced label expressions
were inspected before editing. No host extern callback labels are introduced.

## 0x0031C7CC

Three unresolved `LAB_*` expressions are raw four-byte guest values:

- `0x0031C81B PUSH 0x31c6f6`: the existing KeInitializeDpc draft receives
  `UINT32_C(0x0031c6f6)` instead of an undeclared host symbol address.
- `0x0031C845 PUSH 0x31c6e5`: the existing KeInitializeInterrupt draft receives
  `UINT32_C(0x0031c6e5)`.
- `0x0031C890 LEA EAX,[EDI+12]`, followed by `0x0031C896 MOV DWORD [EAX],0x31c7b0`:
  the original four-byte field receives `UINT32_C(0x0031c7b0)` before the
  shutdown-notification import is called.

This is a representation fix only. The actual DPC call packet pushes EDI,
the literal code address and EDI+28; the existing C draft has only two
arguments. The interrupt call packet also contains additional original words
absent from its C draft. No missing arguments or callback prototypes are
invented here. The entry's implicit ECX and those platform interfaces remain
ABI_UNVERIFIED; successful syntax does not make the calls executable.

## 0x0034F2B2

`0x0034F369 MOV DWORD [ESI+0x24],0x34f155` proves the literal four-byte
assignment to `piVar2[9]`. It now uses `UINT32_C(0x0034f155)`.
`0x0034F3AF` and `0x0034F3C8` both push `0x34f165` in the argument packets
for direct calls to `0x0034E23D` at `0x0034F3BA` and `0x0034F3D0`.
Both source arguments now use `UINT32_C(0x0034f165)`. These values are not
ordinary host function addresses or calls to host label symbols.

The additional unresolved `KeTickCount_exref` expression was also grounded
in exact original data-address instructions: `0x0034F37D MOV EAX,[0x38648c]`,
`0x0034F382 MOV EAX,[EAX]`, `0x0034F384 MOV [ESI+0x2c],EAX`. The source
now explicitly performs the two four-byte guest loads from the original
literal import-slot address. No host import-object declaration, pointer-sized
guest slot, helper prototype or value for the imported pointer is invented.
Guest address translation and the import's actual runtime binding remain open.

## Original byte checks and validation

All seven windows below matched the authenticated XBE byte-for-byte:

| Window start | Exact bytes |
| --- | --- |
| `0031C81A` | `5768f6c631008d471c50ff157c633800` |
| `0031C837` | `6a016a00ff7508bef8fd3200505768e5c6310056ff158c633800` |
| `0031C890` | `8d470c6a0150c700b0c73100ff1584633800` |
| `0034F369` | `c7462455f13400` |
| `0034F37D` | `a18c6438008b0089462c` |
| `0034F3AF` | `6865f1340083c72b578bcbe87eeeffff` |
| `0034F3C3` | `8d460c50566865f13400578bcbe868eeffff` |

Both changed sources passed focused Clang syntax checks for
`i686-pc-windows-msvc` and `x86_64-pc-windows-msvc` with the existing repository
`tools/sweep_c11.py` flags and include directory. Scoped `git diff --check`
passed. No kernel/platform routines, callbacks or network operations were run.

Remaining implicit-register inputs, pointer-sized object fields elsewhere,
signed address arithmetic, imported platform behavior and helper contracts
remain unverified. In particular this does not repair the original AL/CL
interrupt-level handoff in `0x0034F2B2`. The separate `0x00316530` phantom
DPC-argument issue is outside this repair. At integration the coordinator updates only the affected inventory source
fingerprints/syntax labels and adds the original-byte windows to the verifier.
No common headers, ABI/behavior labels, other source files, game files, saves,
deployment or production data are changed. This evidence establishes representation facts
and syntax only, not complete interfaces, behavior or a byte-identical build.
