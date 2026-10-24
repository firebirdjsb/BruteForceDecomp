# Nine byte and float storage repairs

Original build SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original function identities and body hashes remain in each source header.
`scripts/verify_stack_storage_repairs.py` checks the original mapped bodies and
short instruction fingerprints, including ordered non-contiguous body spans
for the unchanged byte-copy helper `0x002EA100`.

| Entry | Evidence-backed change | Remaining limits |
| --- | --- | --- |
| `0x000B1CC0` | DWORD saved at `0xB1CE1`; bytes +1, +2 and AL feed the byte stores at object +0x3a, +0x39 and +0x38. Preserve the input pointer separately. | Other float conversions and implicit register inputs remain unverified. |
| `0x000EDDD0` | `0xEDDEC` saves AL into the reused stack byte; `0xEDE10` can set it to one; `0xEDE86` loads that byte for the return. | Source represents the result value, not the transient stack-slot mutation. The original pointer is separately saved. |
| `0x00149D30` | Writes at `0x149D46`, `0x149D4D`, and `0x149DC9` select the byte later read at `0x149DF6`. Use the existing boolean value. | Source represents return state, not the original stack byte's address. Other control flow and implicit registers are unverified. |
| `0x0017AB50` | `0x17AB50` reads the low byte of the initialized incoming pointer word; `0x17AB5C` saves its full value independently. | Object-representation view on the present little-endian host; guest relocation is unresolved. |
| `0x0017E510` | `0x17E524` overwrites entry ESP+4 with bits `0x4E6E6B28`. FCOM at `0x17E573` reads m32fp and FSTP at `0x17E57E` replaces it. EBP retains the original pointer. | Existing draft arithmetic grouping, x87 extended precision, comparison flags and EBX input remain unverified. Only the minimum slot is repaired. |
| `0x002AB210` | `LEA [ESP+0x24]` after 32 bytes of frame/saves addresses entry ESP+4. Virtual +0x6c receives its address. Use a four-byte sample slot initialized from the pointer word, separate from the running maximum. | Indirect targets, pointer relocation and complete return ABI remain unverified. |
| `0x002D5FF0` | Two address-passed DWORD locals are subsequently read by FLD/FADD at `0x2D6074/7B`; FSTP rounds their sum into the argument at `0x2D6085`. | The virtual output contract, implicit ESI and full x87 execution environment remain unverified. |
| `0x00314E18` | Object +0x50 and +0x48 hold guest DWORD pointers; the latter points to another DWORD pointer. Copy three words from source +4/+8/+c, then conditionally subtract floats at inner +4/+8/+c. | Guest-to-host mapping, address wrapping, x87 environment and other object fields remain unverified. |
| `0x0033C1E8` | The length-one calls at `0x33C230/0x33C2CD` address a byte in the reused incoming slot. `0x33C0D7` forwards the byte count to `0x2EA100`; the resulting byte feeds the final byte comparisons. | Source represents the observable marker byte, not the incoming pointer slot's transient mutation. Full caller and register contracts remain unverified. |

For `0x002AB210`, the first reduction is `MAXSS(sample, maximum)`; the second
is `MAXSS(maximum, recursive_result)`. Preserve these operand orders, including
the second-operand behavior for unordered values and equal signed zeros. The
recursive x87 return is stored to binary32 before the second reduction. No
virtual method prototype or write behavior is inferred from this caller alone.

For `0x00314E18`, the first source DWORD is read before the +0x48 pointer chain.
Each destination DWORD is then written before the next source DWORD is read,
and the state is read after those copies. Temporary DWORDs preserve that source
ordering and avoid overlapping-range `memcpy`. The subtracting reads remain
interleaved with stores. This is an instruction-level source view under the
documented guest-address assumptions, not a native memory translation layer.

Review caught and corrected two issues before integration: unsigned-versus-char
promotion could make matching marker bytes >=0x80 unequal; the initial audio
draft loaded its first source word too late. The final marker operands all use
`char`, and the audio copy follows the observed load/store order.

All nine changed drafts pass the project's isolated Clang C11 syntax flags for
Windows x86 and x64 (Level A). The listed storage/operand facts are limited
Level B evidence. Complete function contracts, Xbox ABI compatibility (Level C)
and whole-function behavioral equivalence (Level D) are not established. These
repairs do not establish a native PC build or a byte-identical reconstruction.

Five additional incoming-DWORD wrapper repairs were reviewed but already existed
in upstream main (`0x000BA410`, `0x000CDAE0`, `0x000DFB40`, `0x000DFB80`,
`0x00122900`). Upstream versions are retained and are not counted as new repairs.
The larger overlapping stack record in `0x000AEC10` remains deferred; no guessed
record or floating-point-to-pointer cast was introduced.
