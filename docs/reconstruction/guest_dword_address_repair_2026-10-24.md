# Three original guest DWORD address repairs (2026-10-24)

**Evidence source:** user-owned original Xbox `default.xbe`, SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The binary is not committed. These are *partial storage/address contracts*, **not**
whole-function 1:1, host ABI, or runtime verification.

| Entry | Original body SHA-256 | x86 evidence | Bounded C11 storage mapping |
| --- | --- | --- | --- |
| `0x00122900` | `E0827CBAD16EBFCE2E888572839B5933FC337D20CCC9AF37BEB06E68F91F1C36` | `0x122900 PUSH EBX/ESI/EDI`; `0x122914 LEA EAX,[ESP+0x10]`; `0x122918 PUSH EAX`; `0x12291C CALL 0xFF730`; `0x12293A RET 4` | Address of incoming guest DWORD at entry `ESP+4`, represented as `&guest_incoming_word`. |
| `0x002864F0` | `D2240C44D169A02A2B3A50C4FED769EE9EDC56F6CAB66A588D9481836C707F24` | `0x2864F0 PUSH EBX/ESI/EDI`; `0x2864FC LEA EAX,[ESP+0x10]`; `0x286500 PUSH EAX`; `0x286504 CALL 0xFF730`; `0x286522 RET 4` | Address of incoming guest DWORD at entry `ESP+4`, represented as `&guest_incoming_word`. |
| `0x002B55C0` | `423FF3DD83B013290E0AC8CBBE860510B2535C35AEFAB5FF9B12E8B6FCCF9CD2` | `0x2B55CD MOV [EBP-4],EDI`; `0x2B55DD LEA EAX,[EBP-4]`; `0x2B55E0 PUSH EAX`; `0x2B55E1 CALL [EDX]` | Dedicated `undefined4 guest_edi_word` whose address is passed to the indirect call. |

For both direct-call cases, the callee at `0x000FF730` reads the fourth
argument as a pointer to a **single DWORD**: `0xFF777 MOV ECX,[EBP+0x14]`,
`0xFF77A MOV EDX,[ECX]`, and `0xFF77C MOV [EAX+8],EDX`. Its `RET 0x10`
at `0xFF796` confirms four 32-bit stack arguments. The two call targets were
computed from original `E8 rel32` displacements rather than inferred from
the C draft.

## Verification and limitations

`scripts/verify_three_guest_dword_addresses.py --root . --xbe /path/to/default.xbe`
checks the original executable identity, three original function-body hashes,
12 opcode signatures, two direct-call destinations, four callee instructions,
source invariants, and isolated host Clang C11 syntax. Without `--xbe`,
GitHub Actions checks only source invariants and isolated syntax; it **must not**
claim to have inspected original machine code.

Original register inputs (EAX for `0x00122900`, ECX for `0x002864F0`,
EDI/indirect-call ECX for `0x002B55C0`) remain `ABI_UNVERIFIED`. The
native host does not yet have a verified mapping between a C argument address
and a guest 32-bit stack address. In particular, the virtual-call target and
implicit `this` contract in `0x002B55C0` remain unresolved.

No source syntax result is credited as native linkage, platform compatibility,
or 1:1 behavior. Progress numbers must come from a successful complete
repository-wide audit, not this focused repair.
