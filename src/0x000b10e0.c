/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E3DDE992466EEDCB0EA1FDA974E3DCB35B657DD03159ADB2022109FE2050373
 * Entry: 0x000b10e0, Ghidra index: 2106, label: FUN_000b10e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_000b10e0(int *param_1,int param_2)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x2c != 0) {
      iVar1 = (param_2 - iVar1) / 0x2c;
      goto LAB_000b1129;
    }
  }
  iVar1 = 0;
LAB_000b1129:
  FUN_000b1370(param_2,1);
  *param_1 = iVar1 * 0x2c + *(int *)(unaff_EDI + 4);
  return param_1;
}
