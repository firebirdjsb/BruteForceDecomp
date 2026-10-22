/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EEDD930D4B865A335BE6A66C784FEE808A5D3A8BD2B6C090A9592903CBC52A0
 * Entry: 0x00166180, Ghidra index: 4710, label: FUN_00166180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00166180(int param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (param_2 - in_EAX) / 0x520;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00166510(in_EAX + iVar1 * 0xa40,param_3);
    FUN_00166510(iVar1 * 0x520 + param_1,param_3);
    FUN_00166510(param_2,param_3);
    FUN_00166510(param_2 + iVar1 * -0x520,param_3);
    return;
  }
  FUN_00166510(param_2,param_3);
  return;
}
