# D3D Command DWORD and Multisample State: 0x0036f320

## Pinned source evidence

Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

- Target `0x0036f320`, range `0x0036F320-0x0036F43C` (285 bytes), body SHA-256 `3DEA9D09E0D916691968326915DB6B88CEBCEF02762C8A5E83FFF20E54999B8D`.
- Corroborating setter `0x00370910`, range `0x00370910-0x0037094D` (62 bytes), body SHA-256 `8FFAFB7699C7BDF1DDC150C5E769846889DCAA2BAF94931CAEB974ECDCECE02F`.

The inspector verified the ordered body bytes and both hashes against the pinned XBE.

## Repairs and instruction support

The failed C draft assigned `&LAB_00200b80` to `puVar6[2]`. The original instruction instead writes the literal DWORD directly:

```text
0036f3a6: c74008800b2000         mov dword ptr [eax + 8], 0x200b80
```

The source now assigns `0x00200b80` to that DWORD slot.

The other failure is `D3D8__D3DRS_MultiSampleAntiAlias`. Its declaration already exists in `include/bf_xbox_d3d_state_globals_x86.h`; the target now includes that existing header. The original setter confirms the global's storage address, and the target reads that same DWORD:

```text
0037091c: a3f8df3700             mov dword ptr [0x37dff8], eax
0036f3f5: 391df8df3700           cmp dword ptr [0x37dff8], ebx
```

The edit adds no global declaration or inferred initialization. It records the existing source-level name as the DWORD observed at `0x0037dff8` in these two pinned instruction bodies.

## Verification boundary

The focused repository-flag Clang C11 syntax check passes for `0x0036f320`.
An independent reviewer authenticated the target and setter against the pinned
XBE, checked the existing declaration and confirmed the changed literal's
four-byte width. This does not establish ABI, runtime behavior, or a
byte-identical rebuild. No shared header, installed game, production data or
deployment was changed; rollback restores this source and its evidence record.
