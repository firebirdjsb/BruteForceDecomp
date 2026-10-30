/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB6A3ECFF00A58AA18F47F0FA3052D80225B3FFDF7DFEE4C68F50080BA3D4E82
 * Entry: 0x000741c0, Ghidra index: 1316, label: FUN_000741c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000741e0(void);

void FUN_000741c0(byte param_1)

{
  FUN_000741e0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
