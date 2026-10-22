/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B17E6C6B05A5F42049C9EAEE56E9E531FE5BE44AE8EE918D0BFB826D8B74167
 * Entry: 0x0017dd30, Ghidra index: 5091, label: FUN_0017dd30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017dd30(void)

{
  int iVar1;
  int *unaff_EBX;
  
  iVar1 = *unaff_EBX;
  if (iVar1 == 0) {
    *unaff_EBX = 0;
    return;
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    FUN_000e3c30(*(undefined4 *)(iVar1 + 0x10),iVar1 + 8);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 0xc));
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
