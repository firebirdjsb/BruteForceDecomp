# Original x86 variadic format wrappers at 0x002EAA19 and 0x002EAEFA

Original `default.xbe` SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The original body SHA-256 values are embedded in both updated C source files.

`0x002EAA19` uses an EBP frame, three fixed caller arguments at `[ebp+8]`, `[ebp+0xC]`, `[ebp+0x10]`, and passes `lea eax,[ebp+0x14]` to the formatter at `0x002EDBDE`. It constructs a 16-byte record: output cursor, remaining count, initial buffer and flag `0x42`. After formatting, for a non-null buffer, it decrements the count in 32-bit arithmetic and either writes a NUL at the cursor or calls `__flsbuf(0,&state)`. Plain `ret` indicates caller stack cleanup. The replacement uses C11 variadics and unsigned decrement plus explicit sign-bit check to avoid C signed-overflow UB.

`0x002EAEFA` has two fixed stack arguments (output buffer and format) followed by variadic words. It reads the original buffer to its first NUL without a safety bound, sets up the same 16-byte record with count equal to original byte-string length and flags `0x49`, and forwards the variadic pointer to `0x002EE515`. Its return type is void. We do not infer the behavior of this much larger formatter backend.

**Completed tests:** strict host Clang C11 and Windows-i386-target C11 syntax; host linked tests with mocked `FUN_002EDBDE`, `FUN_002EE515`, and `__flsbuf`. The original 87- and 58-byte function bodies map to the XBE and match their saved Ghidra byte digests.

**Not established:** entire formatting backend semantics, Xbox CRT/global variable linking, safety of unbounded buffers, ABI equivalence of C11 `va_list` beyond the verified i386 calling shape, original game behavior, or byte-identical rebuilding.
