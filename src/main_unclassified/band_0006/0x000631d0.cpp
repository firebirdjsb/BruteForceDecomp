/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D42A5646E202DD66A5B4E9D7EE622ED22364CB50B94DF81C4F6B681F750BD3E
 * Entry: 0x000631d0, Ghidra index: 1071, label: FUN_000631d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000627f0(void);

void FUN_000631d0(byte param_1)

{
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 0xc) != 0) {
    FUN_000627f0(unaff_EBX + 8);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 0xc));
  }
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  *(undefined4 *)(unaff_EBX + 0x10) = 0;
  *(undefined4 *)(unaff_EBX + 0x14) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
