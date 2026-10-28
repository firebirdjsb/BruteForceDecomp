# 2026-10-28 — original guest-stack producer/consumer call chains

**Status: authenticated, bounded caller-side interface evidence.** This audit does not claim resolved virtual callee implementations, a syntax repair, full guest-memory lifetime safety, or 1:1 behavior. The original private XBE SHA-256 is `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The previous source evidence note has been corrected where its loop-relative offsets missed the extra `PUSH EBX`.

## Caller 0x00257B50, direct writer 0x002329E0 and encoder 0x00252C60

At `0x257C05..0x257C0C`, the original virtual slot `+0x24` receives exactly three pushed words, in right-to-left order: pointer `T+0x1C`, index in ESI and object in EAX. `0x257C17` loads DWORD at `T+0x1C` and `0x257C24` loads another at `T+0x20`, then both are supplied separately to direct `0x002329E0` (`0x257C1F`, `0x257C2C`). **This proves the caller reads two DWORDs; it does not prove the unidentified virtual implementation writes eight bytes on every path.** Keep these two output words adjacent until call-site and callee writes are established.

`0x002329E0` consumes the stream in original EAX, the pushed DWORD from the caller, and returns with `RET 4`. The flag loaded at `0x2329E3` (`[0x00469924]`) selects between an unsigned variable-length write through `0x00252C60` and a direct four-byte write at virtual stream slot `+0x14`. `0x00252C60` takes EAX=value and ESI=stream, masks seven bits at a time, writes through slot `+0x14` with size one, and returns with plain `RET`. The existing Ghidra C drafts do not yet faithfully bind these mixed-register and virtual-call contracts.

Both string reads in `0x00257B50` point to the *same* `T+0x24` byte buffer, with size `0x104`. The first scan and second scan return to that same address, after saving EBX on the second path. The per-item pair at `T+0x1C/+0x20` and the closing output at `T+0x14` must **not** be merged with the string buffer.

## Caller 0x002A75D0, direct helper 0x002A7510

Set `S` to ESP after `0x2A7610 PUSH EDI`. At `0x2A7615`, `PUSH EBX` establishes `B = S-4` for each loop iteration. The one-byte read uses `[B-8+0x40] = S+0x34`; the other branch's four-byte read uses `[B-4+0x3C] = S+0x34`. Neither output is the CRC string buffer: zero/scan at `0x2A763F/0x2A766C` address `S+0x50`. The separate post-four-byte-read `MOV EAX,[ESP+0x34]` accesses `S+0x30`, **not** `S+0x34` — an important producer/consumer distinction. Upper bytes in the one-byte-read output word are not proven initialized and must not be fabricated.

The indirect QueryInterface-like call at `0x2A7711..0x2A7718` receives an output pointer `S+0x0C` and IID `0x00402B90`. Its result word is reloaded at `0x2A771C`. The next `+0x84` virtual call uses another output address at `S+0x10`. The direct `0x2A7510` helper receives its packet through original EDI; `0x2A7514` loads the byte stream from `[EDI+4]`, it uses the stream `+0x10` read method, then may invoke `0x2A6F50`. Direct `0x2B28E0` at `0x2A777E` participates in the later interface handoff. These are observed register and pointer uses, not invented host-C callback signatures.

## Further guest-stack first-error class: actual stack allocator 0x002EBEA0

This function is **not** a plain pointer allocator. EAX supplies the byte count, `0x2EBEA4` tests 4096-byte pages, `0x2EBEB4 XCHG ESP,EAX` changes the guest stack on the small path, and `0x2EBED8 MOV ESP,ECX` does likewise on the larger probed path. Its return address is relocated to the new ESP. `0x002C2530` passes a signed 16-bit size rounded up to four bytes, then uses the newly allocated stack region as a dynamic visited-byte array via `REP STOSD/STOSB`. `0x00269600` makes a fixed 0x14B4-byte probe and constructs copy/scratch data at the resulting stack coordinates.

These three first-error guest-stack cases therefore require an original guest32 stack model or tightly validated function-specific representation; replacing unresolved `stack0x...` with an independent static C array or ordinary host pointer is **not approved**. The unusual signed-length and stack-unwind paths remain unverified.

## Regression and disposition

The source-controlled `scripts/verify_guest_stack_pair_20261028.py` has an expanded exact-instruction fingerprint and branch-specific stack-offset arithmetic gate; invoke it with the locally retained private XBE. The checker verifies that the recorded machine-code observations match the supplied original binary; it cannot resolve dynamic vtables, instruction-equivalent SSE/x87 behavior, Xbox SEH state or native linkage.

**Source files changed: zero. New C11 passes claimed: zero.** The published 13,614/13,694 syntax metric still refers to audited commit `c7cf23f`, not this documentation-only commit. Next repair gate: obtain actual virtual target function bodies and inspect their writes to both output DWORDs and the interface objects. Only then bind an atomic C11 storage/call repair, compile isolated files for 32-bit and 64-bit Windows targets, and run the full audit without weakening compiler flags.
