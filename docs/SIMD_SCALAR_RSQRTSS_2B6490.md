# Scalar x86 SSE RSQRTSS wrapper, 0x002B6490

Source `default.xbe`, SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Function body (27 bytes) SHA-256 `E47D4B359F51995512CE21EC98637D7564B58FF6D76EB2D643B2A1CF894FE235`.

Original x86 sequence: pushes ECX to reserve a 4-byte temporary, copies caller stack arg at `[esp+8]`, executes `rsqrtss xmm0,[esp+8]`, writes low lane to the temporary with `movss`, loads that float with `fld dword`, restores ECX and returns using plain `ret` (caller cleanup).

The C reconstruction uses Clang/GCC `__builtin_ia32_rsqrtss` on a four-lane float vector whose only observed result is the low scalar lane. This preserves the **hardware reciprocal square root approximation** rather than substituting `1/sqrtf`, which would silently alter rounding and special values.

Strict host C11 and `clang -target i386-pc-windows-msvc -msse` syntax checks passed locally. The Windows-i386 generated assembly contains `rsqrtss`, `fld` and `ret`. This is still a reconstruction, not proven byte-identical, and it requires an x86 compiler with the intrinsic enabled. The descriptive alias does not alter the stable entry symbol `FUN_002b6490`.
