/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED96B0EA864B6BEA668EF3B0111A28DFC7CAF3C2DEE5B8422E44AF5EAB055B1F
 * Entry: 0x00344812, Ghidra index: 12741, label: FUN_00344812
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern undefined4 FUN_0034470a(int param_1,uint param_2);
extern bool FUN_003447d5(undefined4 param_1,int param_2);
undefined4 FUN_00344812(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
  iVar1 = FUN_0034470a(param_1,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_003447d5(param_1,1), iVar1 != 0)) {
    **(char **)(param_1 + 0x24) = (param_3 == '\0') + -1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    return 1;
  }
  return 0;
}
