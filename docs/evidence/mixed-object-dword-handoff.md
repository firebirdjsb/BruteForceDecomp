# Mixed object DWORD storage: 0x0010A2E0 / 0x0010ABB0

Pinned original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Body digests and instruction windows: `scripts/verify_stack_storage_repairs.py`.
Source locations are resolved by `tools/source_layout.py`.

Both drafts incorrectly use numeric float conversion for DWORD object fields.
The original uses CMP DWORD [object+0x24],8 and unsigned JB. For values below
8 it uses LEA [object+0x10]; otherwise it loads a 32-bit guest address from
that location. Reads are repeated after calls rather than cached across them.
The +8 field is an integer flag: 0x10A2F5 compares it with 6;
0x10ABEA and 0x10AC05 store DWORD 0 and 6 respectively.
No complete structure or string encoding is inferred from these observations.

0x0010A2E0 also calls 0x000B2110 with the address of its reused second
incoming DWORD. The subsequent integer instructions at 0x10A3C2..0x10A3EB
assemble its original bytes in high-to-low order 3,0,1,2. The correction reads
four representation bytes, not a float-to-integer numeric conversion.
Helper implementation, full implicit inputs and x87 arithmetic remain unverified.

Known registers: 0x0010A2E0 reads an implicit EDI object; 0x0010ABB0 reads
implicit ESI and EDI. RET cleanup is 12 and 4 bytes respectively. Existing
C signatures and direct guest-address-to-host-pointer mapping are not validated
native interfaces. Allocation/destruction/layout beyond the observed offsets,
callers and full x87 precision/exception behavior are unresolved. Do not mark
these complete Level C/D contracts. This batch is limited Level B storage
recovery plus independently checked Level A syntax.

Next agent: recover the actual caller setup and 0x000B2110/0x000CCAE0/
0x000CCD20 interfaces before reorganizing these fields into a named structure.
Do not replace the unsigned capacity branch with a float comparison or enlarge
its guest-address load to host pointer width.
