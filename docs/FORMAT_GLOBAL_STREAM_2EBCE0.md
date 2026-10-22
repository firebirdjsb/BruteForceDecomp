# Global output-state formatted print wrapper (0x002EBCE0)

Brute Force original Xbox XBE body `0x002EBCE0..0x002EBD10` is 49 bytes and independently hashes to `62E170FCBAC1EFAD7BDB740FA4AE8B94D5302DA69729F2757DD2C2E35934E261`.

Original x86:
- Saves EBX/ESI/EDI, loads the fixed state address `0x003B69A8` into ESI and passes it to `__stbuf` (`0x002EF27E`).
- After that call, `lea eax,[esp+0x18]` forms the address of the first variadic argument on the **original** caller stack, and passes it to `FUN_002EDBDE` (`0x002EDBDE`) along with the format pointer and state address.
- Preserves `FUN_002EDBDE`'s return code while calling `__ftbuf` (`0x002EF306`) with the prior state value and the global stream pointer.
- Performs `add esp,0x18` to clean all six pushed internal arguments, restores the saved registers, and ends in plain `ret` (caller stack cleanup).

The Ghidra function label `FID_conflict__wprintf` conflicts between CRT printf and wprintf matches; its observed byte-oriented format pointer supports using `const char *` **in this C model**, not a claim of original source symbol identity. The real state layout at 0x003B69A8 remains unresolved.

The shared `FUN_002EDBDE` C interface now accepts `void *output_state`, because both the 16-byte local stack formatter state and the larger CRT global stream flow into this same backend. It was previously incorrectly constrained to `BF_FormatSinkState*` for every use.

Strict host Clang C11 and Windows i386-target C11 syntax checked locally; a linked mock test confirmed argument forwarding, call order, return value and fixed state address. Full CRT behavior, data symbol definition/linking, x86 executable equivalence and game runtime are **not verified**.
