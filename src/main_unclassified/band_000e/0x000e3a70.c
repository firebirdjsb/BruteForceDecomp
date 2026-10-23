/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF2E47DDD300B1A9AD94FF6BC8CBE7C5B84F798B9BC8B7CDBC8EB8D57BC635DE
 * Entry: 0x000e3a70, Ghidra index: 2824, label: FUN_000e3a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3a70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (*param_4)(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = (*param_4)(*param_3,*param_2);
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  cVar2 = (*param_4)(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}
