# 0x002dd4a0 double word reconstruction

- Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Entry `0x002dd4a0`; original function-body SHA-256 `9E521E65D821EBCF8C49579823463B0BBD0C11590BA977C8179D99266CBAF8E8`. The local inspection helper checked the body bytes and hash against the pinned XBE.
- `0x2dd4e0` loads the QWORD at `[esp+0xc8]` (incoming words 10/11); `0x2dd4eb` loads `[esp+0xc0]` (incoming words 8/9). The draft now reconstructs those values by copying each low/high word pair into a `double`, without integer-to-double conversion.
- `0x2dd525` stores the interpolated x87 result as a QWORD at `[esp+0x18]`; `0x2dd54a` stores the corrected result to that same slot. `0x2dd55a` and `0x2dd55e` move its high and low DWORDs into ESI and EBP. Both `0x2dd569..0x2dd581` calls push ESI then EBP, so each callee receives the low word followed by the high word. The C11 draft snapshots those words with `memcpy` and reuses them for the two calls and later branch assignments.
- On the result path, `0x2dd635` stores the high word to output `+4`, then `0x2dd639` stores the low word to output `+0`. The draft retains that destination write order. The early limit path at `0x2dd619..0x2dd61b` still copies the original endpoint words.
- Focused Clang C11 syntax passed with the repository's existing implicit-call and pointer-conversion warning suppressions; `git diff --check` passed. This is an assembly-informed draft. The x87 precision/control state, indirect callback, guest stack layout, host/guest pointer translation, and runtime behavior remain unverified.

Independent integration review confirmed the original 422-byte body, the
word-pair input loads, the scratch-slot snapshots, the loop endpoint writes
and the final high/low output order. The existing interpolation expression
is not an exact model of x87 extended-precision intermediates. EDI/EBX
inputs to 0x2b3500 also remain unresolved; no full interface verification
is claimed. The representation copies assume the supported little-endian
x86/x64 host. Both target syntax checks passed.
