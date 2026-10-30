/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD13CB6D459C35ACF8FC3D9925E89AD532F2994AC44E985412916EF00089EF4D
 * Entry: 0x000ffdc0, Ghidra index: 3208, label: FUN_000ffdc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000ffdc0(void)

{
  int iVar1;
  char cVar2;
  uint in_EDX;
  int unaff_EDI;
  
  if (((-1 < (int)in_EDX) && (iVar1 = *(int *)(unaff_EDI + 0x74), iVar1 != 0)) &&
     (in_EDX < (uint)(*(int *)(unaff_EDI + 0x78) - iVar1 >> 2))) {
    cVar2 = (**(code **)(**(int **)(iVar1 + in_EDX * 4) + 0x14))();
    if (cVar2 != '\0') {
      FUN_000ffd00();
      FUN_000ef210();
      return 1;
    }
  }
  return 0;
}
