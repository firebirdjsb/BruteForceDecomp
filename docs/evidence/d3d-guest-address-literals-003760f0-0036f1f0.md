# D3D Guest Address Literals: 0x003760f0 and 0x0036f1f0

## Pinned original

Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

| Entry | Original body range | Body bytes | Original body SHA-256 |
| --- | --- | ---: | --- |
| `0x003760f0` | `0x003760F0-0x003761E4` | 245 | `DBAD93505EE4F3CB9BDFF75E9EECF959BEF26F00881CFB9E9E934F7AF2A9BB4F` |
| `0x0036f1f0` | `0x0036F1F0-0x0036F312` | 291 | `8ACF6BE3408E1E7603D680AA4FFD5A929AC5234CB2772F9E628D38439A49B74C` |

Private inspection verified each ordered function body against the pinned XBE and these digests before the edits. The shared `scripts/verify_stack_storage_repairs.py` pins these bodies and the changed instruction windows.

## Instruction evidence and source changes

At `0x003760f0`, the original code stores literal DWORDs into the command words:

```text
00376199: c74008500a1000         mov dword ptr [eax + 8], 0x100a50
003761b8: c7402800002100         mov dword ptr [eax + 0x28], 0x210000
```

The C source now stores those immediates directly in `puVar2[2]` and `puVar2[10]`, replacing unresolved `&LAB_...` expressions.

At `0x0036f1f0`, the original code loads an absolute guest address and copies twelve DWORDs from that address, then writes the other literal into a command word:

```text
0036f265: be50b33700             mov esi, 0x37b350
0036f26a: f3a5                   rep movsd dword ptr es:[edi], dword ptr [esi]
0036f2e5: c78624010000500a1000   mov dword ptr [esi + 0x124], 0x100a50
```

The C source represents the copy source as `uintptr_t` cast from the evidenced 32-bit guest address `0x0037b350`; this preserves the source address value without assigning a new type or meaning to the referenced bytes. The destination value is now the immediate DWORD `0x00100a50`.

## Verification boundary

Both changed functions pass focused Clang C11 syntax checks using the repository sweep flags on i686 and x64 Windows targets. An independent reviewer rechecked the original bytes, the twelve-DWORD extent, source address, destination offsets and changed literal widths. This verifies the listed facts and syntax only. The absolute guest-address pointer requires a guest mapping before native execution; host runtime mapping and behavior remain unverified. No target data meanings or wider ABI claims are made.

Only these source expressions and their evidence/inventory records are in scope. No game, installed binary, production data or deployment was changed. Restore the two source files and their records to roll back.
