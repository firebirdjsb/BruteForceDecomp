# 0x00224320 stack word and alias

- Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Local pinned-XBE inspection confirmed entry `0x00224320`, 490 body bytes and body SHA-256 `F8076A986C0939E3FFBC01C803CD5C1733ECF4885551129450163A7D8F1BA426`.
- At `0x2243a6`, `MOV [ESP+0x2c], EDX` saves the complete tree candidate word. The alias selected by `0x2243b1..0x2243bb` addresses either this slot or `[ESP+0x18]`. `0x2243bf` loads the selected pointer into EAX, `0x2243c1` compares it with the tree root, and only then does `0x2243c4` set the low byte of `[ESP+0x2c]` to 1. The C draft now snapshots the selected pointer before the partial write. In the existing-node branch, `0x22444a` reads `[EAX+0x10]` using that prior pointer; `0x22444d` clears only the saved word's low byte.
- The saved word persists to `0x2244fb`, which loads its low byte into AL for return. The whole-word assignment followed by byte writes preserves the other bytes. The mutated stack word is not dereferenced; the separate EAX snapshot is used by the existing-node branch.
- Focused Clang C11 syntax passed for i686 and x86_64 Windows with repository sweep flags (one pre-existing signed-pointer warning); `git diff --check` passed. This verifies the local stack-word order and alias lifetime only. Helper interfaces, x87 behavior, guest pointer mapping, and runtime behavior remain unverified.

Independent integration review confirmed the full-word save, both alias
choices, pre-write pointer snapshot, and low-byte stores against original
instructions. The return expression now reads the low byte directly; an
independent reviewer approved that change against 0x2244fb. Original upper
EAX return state is unresolved; the existing uint signature is not an
established full-width return contract. Verification: A and limited B,
not full C or D. The persistent stack-storage verifier pins the body and
six instruction windows. Both focused target checks passed after review.
