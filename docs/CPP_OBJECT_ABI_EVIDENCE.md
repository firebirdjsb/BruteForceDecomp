# C++ object and virtual-dispatch evidence queue (2026-10-30)

**Status: recorded partial x86 evidence; NOT a reconstructed C++ class hierarchy.**
The project helpers below contain previously recorded original-Xbox instruction and data checks. Re-run all hash-pinned XBE checks before changing original game function bodies. The retail XBE is not stored in Git.

| Original site | Recorded evidence | Narrowly supportable model | Unresolved |
| --- | --- | --- | --- |
| 0x0022D3A3 | Writes table 0x0039ADEC at ESI+0x48. Table +0x14 targets 0x00059A50; thunk's indirect +0x04 call targets 0x0010F890, whose result is ECX-0x48. | One guest32 subobject vptr/adjustment chain | Class identity, inheritance, lifetime and complete this ABI |
| 0x00110DED | Writes vptr 0x0039DCE8 to argument+0x1B4; table +0x30 targets 0x0010FBF0, with recorded RET 4. | One virtual edge, vptr offset and cleanup | Other dynamic receivers, vtable slots and class lifetime |
| 0x00052120 | Two CALL [EAX+0x20] sites; constructor-referenced vtables 0x003A4748 and 0x003A4EB0 both target 0x00052C90 at +0x20. The method returns with RET 0x0C. | Two specific table-to-target edges, observed stack cleanup | Other possible vtables, the helper's ECX contract and complete outputs |

Evidence sources:
- include/bf_00155840_concrete_virtual.h and include/bf_00155840_virtual_621c0.h
- include/bf_0011c810_concrete_virtual.h and include/bf_0011c810_virtual_call_link.h
- scripts/verify_00052120_resolved_vtable_targets.py (original XBE digest, opcode windows and table words)

## Verification gates before a real class declaration

1. Authenticate the original XBE SHA-256, rerun original instruction checks, and test rejection of corrupted vtable words.
2. Recover all caller/callee ECX, stack DWORDs, RET cleanup, EAX/x87 results, adjusted-this offsets, vptr writes and object storage bounds.
3. Prove inheritance, constructor/destructor paths and required slots before adding a C++ class or virtual override. A bare indirect call does **not** prove a virtual call.
4. Keep 32-bit guest addresses separate from native host pointers. Host Clang++ C++17 parsing is not original Xbox MSVC-compatible ABI verification.
5. Differential-test original dispatch paths. Leave unknown dynamic method targets explicitly unresolved.

No original game function logic or class hierarchy is modified by this ledger.

## Compiler diagnostic grouping

The full source sweep produces cpp_compat_report.json; tools/classify_cpp_failures.py generates cpp_failure_groups.json and cpp_repair_queue.csv. The generated categories identify potential repair queues, not verified Xbox interface types or behavior.
