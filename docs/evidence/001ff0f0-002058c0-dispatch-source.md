# Parser dispatch source recovery: 0x001FF0F0 and 0x002058C0

Original user-provided Brute Force XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The following instruction sequences were read from that XBE, not inferred from the decompiler.

## 0x001FF0F0

```asm
001FF12C e8 2f fa ff ff          call 0x001FEB60
001FF131 84 c0                   test al,al
001FF140 8b 7c 24 10             mov edi,[esp+0x10]
001FF144 8b 47 08                mov eax,[edi+0x08]
001FF147 83 c0 fe                add eax,-2
001FF14A 83 f8 2a                cmp eax,0x2a
001FF153 0f b6 80 94 f4 1f 00   movzx eax,byte ptr [eax+0x001ff494]
001FF15A ff 24 85 64 f4 1f 00   jmp dword ptr [eax*4+0x001ff464]
```

The draft's `switch(uRam00000008)` does **not** mean the original code loads absolute guest address 8. It reads the `+8` field of a pointer loaded from a local stack slot. The pointer is assigned after `FUN_001FEB60`; its complete C-level alias/ownership relationship remains to be recovered.

## 0x002058C0

```asm
0020590F e8 4c 92 ff ff          call 0x001feb60
00205914 84 c0                   test al,al
00205920 8b 74 24 10             mov esi,[esp+0x10]
00205924 8b 46 08                mov eax,[esi+0x08]
00205927 83 c0 fc                add eax,-4
0020592A 83 f8 1f                cmp eax,0x1f
00205933 0f b6 88 48 5a 20 00   movzx ecx,byte ptr [eax+0x00205a48]
0020593A ff 24 8d 28 5a 20 00   jmp dword ptr [ecx*4+0x00205a28]
```

Again, `switch(uRam00000008)` is a Ghidra artifact: the original reads `[ESI+8]`, where ESI came from `[ESP+0x10]`. These are two different dispatch tables and adjustment constants (-2 and -4). **Do not repair either by declaring an external `uRam00000008` or dereferencing absolute guest address 8.**

Both source files remain `ABI_UNVERIFIED`; no source edit, compiler success or runtime equivalence is claimed. Next step: reconstruct `FUN_001FEB60` outputs and the stack slot identities, then introduce a verified C-level parser-item pointer in each caller.

## Recovered helper outputs; native representation still blocked

The original 77-byte `0x001feb60` body has digest
`42606AB29F564BC92F0122FFAA816C7872E1284F940D7E44EB260D28AD75A3CC`.
Its observed entry contract is EAX = address of cursor DWORD, EBX = address
of output DWORD, ESI = selection address, EDI = owner address. It zeros
`[EBX]`, traverses nodes through DWORD +0, obtains a candidate at node+8,
compares selection+4/+8 with candidate+4/+0xc, and requires signed
candidate+0x14 < candidate+0x10. On success it writes the candidate into
`[EBX]`, advances the cursor, and returns AL=1; exhaustion returns AL=0.
Only AL is changed in EAX at return; a normal whole-EAX integer return is
not established.

Both callers supply output at live ESP+0x10 and cursor at ESP+0x14.
The first/next setup sites are `0x001ff122`/`0x001ff43f` and
`0x00205905`/`0x00205a07`; each places the two slot addresses in EBX/EAX
and owner in EDI before CALL. Their dispatch reads output+8, never guest
absolute address 8. These facts were independently reviewed.

The existing helper's C draft does not convey these implicit inputs or
the output slot. Replacing the switch alone would leave an uninitialized
pointer; adding normal C arguments would require an explicit guest memory
and register adapter and audited caller inputs. No such adapter, duplicate
helper, or global register convention is introduced here. The two failing
drafts remain deferred, with zero syntax improvement claimed.
