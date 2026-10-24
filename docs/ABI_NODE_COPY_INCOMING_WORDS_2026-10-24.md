# Two additional guest DWORD address forwards into 0x000FF730 (2026-10-24)

**Verification level:** original retail x86 instruction bytes, exact function-body SHA-256, direct-call targets, focused host Clang C11 syntax. **Not** a verified native ABI, complete 1:1 translation, integrated link, or game test.

Original Xbox `default.xbe` SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The retail executable remains outside the repository. Verification script: `scripts/verify_two_node_copy_incoming_words.py` (optional `--xbe`).

| Original entry | Original body SHA-256 | Address-forward instruction | Direct call | Incoming slot | Original cleanup |
| --- | --- | --- | --- | --- | --- |
| `0x000E0350` | `282079256055A6BE17C291E284511DA7E0FA0CD1B23580552A79A34EEC66D3FA` | `0x000E0365: 8D 44 24 1C` (`lea eax,[esp+1Ch]`) | `0x000E036D -> 0x000FF730` | entry `ESP+0Ch` | `ret 0Ch` |
| `0x002213B0` | `8C2EBF3F2BF497349E4B6A782C15136B9DCA62269B1D795FA61C5A176ACDCD21` | `0x002213CE: 8D 4C 24 14` (`lea ecx,[esp+14h]`) | `0x002213D6 -> 0x000FF730` | entry `ESP+08h` | `ret 08h` |

For `0x000E0350`, four saved registers precede the LEA: current `ESP = entry ESP - 16`; adding `0x1C` addresses the third incoming DWORD. The first two guest stack slots are independently observed at `0x000E0357` and `0x000E0352`. The source draft now explicitly names the third word, rather than inventing an uninitialized local.

For `0x002213B0`, three registers are saved, and the earlier `0x002213C0 -> 0x00221AF0` call consumes its one pushed stack argument (`0x00221DD1: ret 4`). Therefore the LEA's `ESP+0x14` addresses entry `ESP+8`, the **second** incoming guest DWORD. That same word is loaded into ECX at `0x002213B4` for the preceding call; the current C draft **does not** implement the resulting implicit ECX ABI. The first guest word is retained as a distinct placeholder in the C signature; it is not assigned an invented gameplay meaning.

At `0x000FF777/0x000FF77A/0x000FF77C`, the callee reads its fourth stack argument as an address, reads a full DWORD from it, and writes that DWORD to newly allocated node offset `+8`. Its original body SHA-256 is `A7EFB135B6B23F930DB5C6AB5EB5937EA2372D6FA711BA4AF6834F004D03753D`, and it ends in `ret 10h`.

**Unresolved:** implicit ECX/EAX register transfer at the `0x00221AF0` edge, guest32 address translation, allocation and Xbox SEH, all indirect dependencies, host calling conventions, integrated linkage and runtime equivalence. These two isolated syntax repairs do not resolve those contracts or justify increasing the roadmap percentage. The public README syntax percentage must only change after a completed full-tree audit.
