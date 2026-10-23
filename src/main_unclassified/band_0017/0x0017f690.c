/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3ECCF37B790E1C4FD81BC7B993EFDAC9E7275784B53F85FD3385A0D65464DF78
 * Entry: 0x0017f690, Ghidra index: 5130, label: FUN_0017f690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017f690(undefined4 param_1)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_0017beb0(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0017bf40(iVar1 + 4,&local_4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 8 + local_4 * 4);
    }
  }
  return 0;
}
