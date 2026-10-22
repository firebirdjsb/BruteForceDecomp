# Formatting dependency reconstruction — 0x002EB322

Machine code at `0x002EB322..0x002EB377` constructs a four-field stack record using these offsets relative to the initial EBP-0x20 address:

| Offset | Write observed | C analysis field |
|---:|---|---|
| 0 | supplied output-buffer pointer | `cursor` |
| 4 | supplied output capacity | `remaining_bits` |
| 8 | supplied output-buffer pointer | `initial_buffer` |
| 12 | constant `0x42` | `flags` |

The state pointer and the format/argument-list pair are passed to `FUN_002EDBDE`. Its 32-bit return value is preserved. When output buffer is non-null, the assembly decrements the word at offset 4 in 32-bit arithmetic, then tests the signed-result flag. When negative it invokes `__flsbuf(0,&state)`; otherwise it writes zero to `*cursor`. The updated C uses unsigned 32-bit decrement plus sign-bit test to model wrapping without introducing C signed-overflow UB.

The C interface is shared by `0x0033DF31`, `0x0037A3E0`, and `0x002EB322`. All three original body hashes have been independently remapped to bytes in the supplied XBE and matched the Ghidra manifest.

**Checks completed:** strict host Clang C11 and Windows i386-target syntax-only checks on all three source units. A host test linked all three with mock `FUN_002EDBDE`, `__flsbuf` and `DbgPrint` and passed under AddressSanitizer and UndefinedBehaviorSanitizer.

**Limitations:** x86 stack layout of the 16-byte state is evidenced; the `FUN_002EDBDE` and `__flsbuf` algorithms and linked Xbox CRT definitions remain unverified. Mock tests cannot prove original-game behavior or Xbox builds. Do not mark this as byte-equivalent or recovered original C. The C `va_list` representation is platform-specific and the linker/prototype equivalence must be checked with Xbox x86 ABI expectations. The struct is *not* binary-layout compatible on x86-64 hosts.
