# Original register-dependent wrapper at 0x000563B0

XBE original byte hash `2B41EC3E748E911C3564529F86F1C082B674F5D19B6F0BC15D9F4AD7CF1FE8C1` for original 62-byte body `0x000563B0..0x000563ED`.

The original function reads the context from **EAX** and accesses offsets `+0x08`, `+0x0C`, `+0x10`, `+0x14` as 32-bit words. The context at `+0x10` is decremented if nonzero and greater than or equal to `+0x14`, with word at `+0x0C` incremented and reset when the incremented value reaches `(word_at_08 << 2)`; the word at `+0x0C` is also zeroed when the count reaches zero. The original does an `lea ecx,[esp+4]` and pushes the **address of the first incoming caller stack argument** before calling `0x000384A0`, preserving EAX as the context pointer. Original wrapper ends in `ret 4`.

The x86 callee at `0x000384A0` also reads EAX, receives that stack pointer, and ends in `ret 4`. This makes a compiler-specific C `__attribute__((regparm(1),stdcall))` model appropriate **for the wrapper's incoming and outgoing register/stack shape**. Other toolchains may need an explicit assembly bridge; there is no pretend MSVC 32-bit compatible declaration.

The source defines a 0x18-byte **observed structure window**, not a full recovered C++ object/class. Names describe only observed counter arithmetic, not gameplay meaning.

**Checks performed:** strict ISO C11 host compilation and mocked callee execution; Clang Windows i386 emitted `ret 4` and a call with an EAX/stack argument shape. These tests do not establish complete Xbox linking: `src/0x000384a0.c` still uses the old Ghidra signature, and its nested helper `FUN_00056AA0` additionally depends on ESI. **Do not** mark this callee integration verified until those register uses are reconstructed.
