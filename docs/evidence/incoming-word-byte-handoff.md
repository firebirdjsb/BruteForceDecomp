# Incoming-word byte views: follow-on handoff

The source authority is the original XBE with SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
`scripts/verify_stack_storage_repairs.py` pins body hashes, ordered body ranges,
and the specific original byte loads/stores. Sources retain all original labels.

- `0x001F3FB0`: after SUB ESP,0x24 and EBP/ESI saves, entry ESP+8 is
  ESP+0x34. 0x1F3FE7 writes zero to that byte, and 0x1F4062 writes one
  at ESP+0x38 after EBX is additionally saved. 0x1F401D and 0x1F403F read
  bytes 2/3 of the helper-written first incoming word; the latter follows
  the EBX save. Keep the existing signed-byte tests. The indexed body has
  disjoint ranges; its hash does not claim verification of every switch target.
  Existing x87 expressions, helper outputs, EDI output and full ABI remain open.
- `0x00209F40`: four saved registers place the third incoming word at
  ESP+0x1C. It is saved in EDI before byte writes beginning at 0x209F5C.
  0x20A058 passes the slot address; 0x20A079 reads the same byte at ESP+0x38
  while 28 argument bytes remain pending. Preserve upper bytes and saved
  output pointer. The complete 0x0020D430 helper interface remains unverified.
- `0x002710E0`: 0x271128 and 0x271159 load the low byte of the first
  incoming pointer word at ESP+0x14, then write it into object +0x80/+0x8C.
  This is neither a dereference of the pointer nor a known zero byte.
  Helper behavior, object layout and guest-address translation remain open.

Only invalid byte-member operations and pointer-to-char reads were replaced
with the existing byte object-representation helpers. No whole-word clearing,
structure invention, or guessed native interface was introduced. Independent
review approved this limited instruction correspondence. Focused i686/x64 C11
checks use the repository sweep flags. Full interface and runtime equivalence
are not established; this is Level A and limited Level B evidence.
