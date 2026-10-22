# Variable-argument formatting wrapper at 0x002FF500

Original Brute Force Xbox x86 function body hash:
`6D864C33CF3C54F3159B5EA6F50B8DBBA0767EBC786933AAC79AFF4ADB9F7A44`.
Original body `0x002FF500..0x002FF545`, verified against source XBE bytes.

Observed caller stack layout: original first stack word at `[esp+4]` is not read; original second at `[esp+8]` is the format pointer; variadic arguments begin at `[esp+0xc]`. The wrapper passes the argument-list address to both `0x002EBD11` (Ghidra name `FID_conflict__vprintf`) and `0x002EBA94` (vsprintf-style unbounded buffer formatter), then passes the 2048-byte local text buffer to `0x002F463D` (`XAPILIB__OutputDebugStringA`).

**Important:** Original code formats into a fixed 2048-byte local buffer but invokes an apparently unbounded formatting function. We intentionally did not introduce a length cap or other behavioral modification. The separately compiled C uses two `va_copy` passes to make both consumers see the same arguments even on host platforms where `va_list` is mutable state; on Xbox x86 the original passes the same by-value variadic-list pointer to both calls.

Validation: strict Clang ISO C11 and Windows-i386-target syntax checks; sanitized host test linked with mocked external formatters and verified both see identical arguments. This does NOT verify the original formatting backends, link compatibility of the rest of the repository, the original game's runtime, or byte-for-byte reconstruction. The exact behavior of all external calls still requires callee-level analysis.
