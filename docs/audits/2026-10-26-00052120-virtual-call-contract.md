# Original Xbox virtual-call evidence — `0x00052120` (2026-10-26)

**Scope:** authenticated call-site/storage reconstruction and C11 syntax. **Not:** complete method-body equivalence, an Xbox emulator, native gameplay, or a certified guest32 linkage.

## Immutable original evidence

- XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721` (4,366,336 bytes in the locally supplied original).
- Function entry: `0x00052120`; its original **157-byte** body SHA-256: `A9BB04FF684DF913B8D6F81E92E4D06B88773586B58567CF41746BE7570BEA45`.
- Original `SUB ESP,0x28` at `0x52120`; the incoming float argument is read at `[ESP+0x2C]` and both original exit paths execute `RET 4`.
- First dispatch `0x52132`: `MOV EAX,[ESI]`, `LEA ECX,[ESP+0x10]`, `PUSH ECX`, `LEA EDX,[ESP+4]` **after one push**, `PUSH EDX`, `PUSH EBX`, `MOV ECX,ESI`, `CALL DWORD PTR [EAX+0x20]`.
- Second dispatch `0x52144`: reload `EAX=[ESI]`, `LEA ECX,[ESP+0x1C]`, `PUSH ECX`, `LEA EDX,[ESP+8]` **after one push**, `PUSH EDX`, `PUSH EDI`, `MOV ECX,ESI`, `CALL DWORD PTR [EAX+0x20]`.
- Neither call site contains a caller-side `ADD ESP,0xC`. The generated native `__thiscall` contract uses an ECX receiver and three guest32 stack arguments. Two constructor-referenced vtables now resolve this virtual slot to `0x00052C90`, whose original `RET 0x0C` at `0x00052D1B` and helper `0x00236670`'s `RET 0x0C` paths have been authenticated against the XBE. This establishes **those observed targets'** 12-byte callee cleanup, not exhaustive runtime vptr resolution.

## Derived 40-byte guest-frame layout

Offsets below are relative to ESP **after** `SUB ESP,0x28`, not relative to the ESP used by `LEA` following a push.

| | First dispatch | Second dispatch |
| --- | --- | --- |
| ECX receiver | ESI | ESI |
| Stack argument 1 (object) | EBX | EDI |
| Stack argument 2 (output A) | frame +0x00 | frame +0x04 |
| Stack argument 3 (output B) | frame +0x10 | frame +0x1C |
| Observed float A lane 0 | [ESP+0x00] | [ESP+0x04] |
| Observed float B lane 1 | [ESP+0x14] | [ESP+0x20] |

**Aliasing matters:** two output-A regions overlap if treated as 12-byte buffers. The two output-B regions do not overlap, and the second B buffer has only **12 bytes available** before the end of the 40-byte frame. Separately allocating A/B arrays would erase this observed shared-storage relationship.

An independent use of the **same** vtable slot at `0x52825` passes a B-output pointer and subsequently reads three float32 lanes from it (`0x52860`, `0x52867`, `0x5286E`). This supports a **three-DWORD working capacity**; it does not independently establish every possible callee write or lifetime. Synthetic 12-byte output tests are capacity and aliasing regressions **only**.

## Caller/callee evidence

- Near-call at `0x52322` resolves exactly to `0x52120`; caller loads EBX and ESI at `0x52315` and `0x52319`, and pushes float bits `0x3F800000`.
- Near-call at `0x5284C` resolves to `0x52120`; `MOV EBX,EAX` at `0x5284A` supplies its EBX argument. The caller pushes float bits `0x3F333333` at `0x52840`, **before** an intervening `MOV ECX,EBP; CALL [EAX+4]` at `0x52845`–`0x52847`. For `0x52120` to receive the pending word, the intervening target must preserve the intended guest stack depth. Its actual `RET` opcode has not been located: this is a cross-function contract needing separate validation, not an assumed method signature.
- The source now represents the two indirect calls with an explicit receiver and output addresses. Clang i386 GNU and Windows/MSVC-target probes verify that **both** invocations use LLVM `x86_thiscallcc`. This verifies compiler lowering of the declared ABI, **not** the runtime vtable target or x86-register state of the reconstructed caller.
- `scripts/verify_00052120_guest_float_slots.py` checks original opcodes, original function hash, two parent near-calls, six source negative controls, the expected stack offsets, source C11 syntax, and synthetic frame boundaries; GitHub CI runs the source-only mode. The copyrighted XBE is never committed.

## Resolved original virtual targets (bounded static proof)

The authenticated XBE has constructor-side references to vtable bases **0x003A4748** and **0x003A4EB0**. In both, the DWORD at offset \`+0x20\` is **0x00052C90**. The original body of this method is 142 bytes, SHA-256 \`7C722A7C22D357E209576DAAA96229B3BA997347E8CF2F69338A39AE91F6858D\`. These are **known possible static targets**; their presence does not establish the runtime provenance of ESI for either individual call.

- The method reads its object as the first guest stack argument (\`[ESP+8]\` after \`PUSH EDI\`). Types **2/26/31** select a guarded tail path: the handle from \`[EDI+0x6c]\` becomes \`ECX\`, the first stack argument is overwritten with flag **1**, and \`JMP 0x00236670\` forwards **output A and output B** unchanged. With an invalid handle, that path returns without output writes.
- Type **3** may call the same helper with flag 1 and both output pointers, but then overwrites output A with \`0x3F000000\` and writes three DWORDs at output B offsets **0, 4, and 8** from a separate object method. The three-word write and \`RET 0x0C\` are observed original instructions.
- Helper \`0x00236670\` has original 599-byte body digest \`6C4E9FF97FAD7BC65B6785B0219EE5FFC14E999AC651A7AA2E9585D197E84496\`; verified exits store scalar A and three DWORDs to B, and execute \`RET 0x0C\`. Its full recursive branches and x87 precision remain unverified.
- Other types take the no-write return path in this method. **Do not manufacture initialized stack outputs** when no original write occurred.

A draft defect was found and corrected in \`0x00052C90.c\`: the types 2/26/31 tail branch previously called \`FUN_00236670()\` with **no C arguments**, despite the original tail transfer preserving flag 1 and both out pointers. It now calls \`FUN_00236670(1,param_2,param_3)\` just like the documented type-3 helper path. This improves explicit cross-function argument consistency; the helper's original **implicit ECX** and host ABI remain unresolved.

The regression verifier \`scripts/verify_00052120_resolved_vtable_targets.py\` checks the three original body hashes, 39 small opcode windows, constructor vptr writes, both vtable slots, case-selector table, direct helper transfers, and correct C call arguments. Its GitHub CI mode validates source invariants and isolated Clang C11 syntax **without distributing the copyrighted XBE**. Run it locally with \`--xbe\` for opcode/hash checks.

## Unresolved before claiming 1:1 behavior

1. Enumerate all possible **runtime** vptrs reaching `[ESI]`, beyond the two statically constructor-referenced XBE tables. Confirm every additional slot `+0x20` implementation, including its output writes and stack cleanup.
2. Reconstruct the true guest32 ESI/EBX/EDI provenance and 32-bit address translation without relying on uninitialized host register proxies.
3. Verify float32 store timing, x87 comparisons, exception/NaN behavior and return width.
4. Exercise linked caller/callee regression tests against authentic guest-memory and runtime traces. Isolated Clang syntax alone does not establish compatibility.

**Audit counts must come from a completed full-tree run at an exact commit.** Neither this ledger nor focused passing tests change the published progress percentage.
