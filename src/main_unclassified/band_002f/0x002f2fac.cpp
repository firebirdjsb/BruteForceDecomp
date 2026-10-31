/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82ADE40CF6072945A0C17BE09CBD0C23F73118C2FB4BE240D9C4418B56835C84
 * Entry: 0x002f2fac, Ghidra index: 10819, label: FUN_002f2fac
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-aligned draft declaration only: guest Xbox ABI_UNVERIFIED. */
extern bool FUN_002f2cca(int param_1,undefined4 param_2,code *param_3,undefined4 param_4,undefined4 param_5,uint param_6);
void FUN_002f2fac(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_002f2cca(param_1,param_2,0,0,0,param_3 != 0);
  return;
}
