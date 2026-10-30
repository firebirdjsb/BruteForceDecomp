/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 425B514CB9F060F561B66C4A1392E61CBFBE1F8AD33599A9217F3881247B745C
 * Entry: 0x002107d0, Ghidra index: 7426, label: FUN_002107d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002107d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_80 [32];
  
  iVar1 = FUN_00210740(local_80);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(*(int *)local_80[iVar2] + 0x18))(param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
    if (0 < iVar1) {
      return local_80[0];
    }
  }
  return 0;
}
