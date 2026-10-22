# Second observed D3D command writer at 0x00062230

Original Brute Force Xbox x86 body is 76 bytes at `0x00062230..0x0006227b`, independently hashed as `C81423F4A97CF0299A44D5257E4C4BBE9B5AF7FFA9B8F3D63C90C557D70EC7DD` and mapped back to the original XBE.

The original function first prepares EBX from incoming EAX + 8 and calls `FUN_002386D0`, then loads ESI from global pointer stored at `[0x0037DD88]` and calls `FUN_003736B0`. The pointer-valued D3D symbol is **not** an embedded array. It reads a command cursor and bound from ESI[0] and ESI[1], calls identified Direct3D MakeRequestedSpace_8 if full, writes two DWORDs (constant `0x417FC` plus the incoming stack word), advances cursor eight bytes, and sets flag bit `0x800` in ESI[2]. It ends with `ret 4`.

Readable role `bf_emit_two_word_d3d_command` describes the observed data movement. **Unknown:** effects of preparatory calls, full game meaning of opcode, incoming EAX register contract, actual D3D object layout, direct linking to Xbox SDK and byte equivalence.

The C source changes only the global declaration and source name (retaining legacy `FUN_00062230` through the alias header). It passed host Clang C11 syntax under existing compatibility warnings. Not a full ABI or runtime validation.
