# D3D Initialization Literal and Device Offset: 0x003764c0

## Pinned source evidence

Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

- Entry `0x003764c0`, body range `0x003764C0-0x00376E0E` (2,383 bytes).
- Original body SHA-256: `95B71225750E8E250472F2424F057FB5B8CAB48179975A9AA75E0D1E4D900220`.
- Corroborating existing declaration: `include/bf_xbox_d3d_device_x86.h` declares `D3D8__D3D_g_pDevice`.

The local inspector verified the complete ordered body against the hash-pinned original XBE before the source changes.

## Supported corrections

The unresolved `LAB_0036e9d0` value is written into a DWORD slot; this site does not call it:

```text
00376db3: c7401cd0e93600         mov dword ptr [eax + 0x1c], 0x36e9d0
```

The address contains x86 code bytes (`0036e9d0: 8b442404`, `mov eax, dword ptr [esp + 4]`), but is not an indexed function entry in the supplied `FunctionExport` inventory. The source now stores the original 32-bit value `0x0036e9d0` in the DWORD array. No callback prototype or function identity is inferred.

The device pointer now comes from the existing declaration. Original instructions show the base load and byte offset used by the source:

```text
00376dd1: a188dd3700           mov eax, dword ptr [0x37dd88]
00376de0: 8b90c8170000         mov edx, dword ptr [eax + 0x17c8]
```

The access uses byte offset `0x17c8`; the source now casts the existing pointer to `uint8_t *` before adding that offset. No shared header changed.

## Verification boundary

The focused Clang C11 syntax check with repository sweep flags passes for
i686 and x64 Windows targets. An independent reviewer authenticated the pinned
body and checked the literal store, global-pointer read, byte displacement and
existing declaration. The edits preserve these observations only; callback
behavior, full ABI, runtime behavior and byte-identical rebuild remain
unverified. No installed game, production data or deployment was changed.
Rollback restores this source and its evidence/inventory records.
