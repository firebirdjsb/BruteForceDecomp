# 0x0023d240 incoming scalar word

- Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Local inspection of the pinned XBE confirmed entry `0x0023d240`, 348 body bytes, and body SHA-256 `0B216BC764B023224B4A87F6970B2C48788E24296FBA1899A0E990A7E7A6D1A9`.
- Entry stack argument four is a DWORD. `0x23d285` uses `FLD DWORD [ESP+0x64]` to interpret its bits as m32fp, and `0x23d28c` compares against the zero float at `0x003a4f88` (pinned bytes `00000000`). `0x23d2aa` tests x87 status bits C0 and C2; `0x23d2b9 JP` takes the `0x23d150` path for greater, equal and unordered results. The C draft copies the word representation to a float for this branch and uses `!(incoming_scalar < 0.0f)` to retain the unordered edge. This is a limited comparison mapping, not verification of x87 exception/control state.
- On that path, `0x23d2c6 MOV EAX,[ESP+0x64]`, `0x23d2ca PUSH EAX`, `0x23d2cb PUSH EBP`, then `0x23d2cc CALL 0x23d150` forward the original argument word, not a numeric conversion from an integer or a heap pointer. The draft passes the raw word at this implicit call site; its host ABI and `0x23d150` interface remain unverified. Existing callers include a float-valued fourth expression in `0x00150670.c` and the raw `0xbf800000` word in `0x001171d0.c`, so this repair does not impose a new shared C prototype on them.
- Later, `0x23d326..0x23d33d` allocate an eight-byte object and store its pointer into `[ESP+0x64]`, reusing the incoming argument slot. The C draft uses a distinct local pointer for this later object. `0x23d341..0x23d348` pass the address of that stack slot to `0x1611d0`; the existing C draft omits those register inputs, and this repair does not establish their ABI.
- Focused Clang C11 syntax passed for i686 and x86_64 Windows with repository sweep flags; `git diff --check` passed. No execution, full interface, or byte-match claim follows from this repair.

Independent integration review checked the pinned body, fourth argument
location, x87 status/parity branch (including unordered), unchanged raw-word
forwarding and later heap-slot reuse. These are limited representation and
control facts; all unspecified helper inputs and complete interfaces remain
unverified. Original body, comparison, call and reuse windows are pinned by
scripts/verify_stack_storage_repairs.py. Focused checks passed on both targets.
