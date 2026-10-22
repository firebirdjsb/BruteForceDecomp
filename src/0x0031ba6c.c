/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8DB437B8EB0E6E3962037C5DB5C35114A554C5CD4737EC0B8C48FA3798CCC895
 * Entry: 0x0031ba6c, Ghidra index: 12306, label: FUN_0031ba6c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031ba6c(int *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  FUN_0031b9f5(*param_1,*param_2,&param_2,0);
  uVar2 = 0x1000U - (int)param_2;
  if (*puVar1 <= 0x1000U - (int)param_2) {
    uVar2 = *puVar1;
  }
  *param_1 = *param_1 + uVar2;
  *puVar1 = *puVar1 - uVar2;
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
  return;
}
