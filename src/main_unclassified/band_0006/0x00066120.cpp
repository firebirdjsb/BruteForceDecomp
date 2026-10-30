/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8009919AE4F17D51110DA9B0A877E42077118FBB1967BE2A4FBA3712618A2646
 * Entry: 0x00066120, Ghidra index: 1112, label: FUN_00066120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000649d0(void);

void FUN_00066120(byte param_1)

{
  FUN_000649d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
