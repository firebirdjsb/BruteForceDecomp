/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B87C6FC95813B69814DEDE35576BFC46F23D0DEB3D52D8A255F26814F785CB6
 * Entry: 0x00049ca0, Ghidra index: 593, label: FUN_00049ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00049ca0(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_000388b0(*(undefined4 *)(unaff_ESI + 0x358));
  if (((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 100), iVar1 != 0)) && ((iVar1 < 3 || (4 < iVar1))))
  {
    iVar1 = FUN_00049c60();
    return *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}
