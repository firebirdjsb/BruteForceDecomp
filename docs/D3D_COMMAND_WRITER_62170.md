# Original D3D command writer at 0x00062170

The 66-byte body at `0x00062170..0x000621B1` has original-XBE SHA-256 `6393E988F920BFAAEA64E8BE4AB963B1A36AEF3B60F1D911A1C190043EEA9485` and was checked against the uploaded Brute Force executable.

The x86 opcode `mov esi, dword ptr [0x0037DD88]` loads a pointer from the Direct3D global, and then uses `[esi]` and `[esi+4]` as cursor/end pointers. The C global therefore needs pointer-valued storage (`extern uint32_t *D3D8__D3D_g_pDevice;`), not an array declaration. When cursor reaches end it calls the identified D3D MakeRequestedSpace helper at 0x00371E10. It then writes exactly three DWORDs: `selector*8 + 0x81880`, payload A, payload B; updates the cursor by 12 bytes and returns 0. `ret 16` cleans four input stack DWORDs. This is evidence for the conservative readable role `bf_emit_three_word_d3d_command`, **not** a claimed game object/device structure.

The existing Ghidra-draft C still has imprecise external callee signatures and unverified Xbox calling conventions. Only the pointer-storage declaration and readable alias were changed; full D3D command semantics, Xbox ABI/linker resolution and byte-equivalent recompilation are not asserted.

Host Clang C11 `-fsyntax-only` with the repository's existing compatibility flags passed after this declaration. Do not use a generic host `uintptr_t` object as a substitute for the Xbox global's actual storage until linking and ABI evidence exist.
