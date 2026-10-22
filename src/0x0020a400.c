/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4BDB9B71220376F03420291F993D09FB2D0DC7AC934BB8B77D55BC620284CF1E
 * Entry: 0x0020a400, Ghidra index: 7330, label: FUN_0020a400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_0020a400(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = param_2;
  cVar2 = FUN_001fedb0(param_1,param_2,param_3);
  param_3 = CONCAT31(param_3._1_3_,cVar2);
  if (cVar2 == '\0') {
    param_2 = 0xe1e59a9b;
    FUN_001faf20(param_1,&param_2,uVar1,&param_3);
    cVar2 = (char)param_3;
  }
  return cVar2;
}
