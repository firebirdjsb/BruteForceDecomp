/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19CEC495A3153DCA2A17467BE816FFAC72DB39D7208B5C830D32F415C737EB1C
 * Entry: 0x000edea0, Ghidra index: 2956, label: FUN_000edea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000edea0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int in_ECX;
  
  uVar1 = param_2;
  cVar2 = FUN_000ecfe0(param_1,param_2,param_3);
  param_3 = CONCAT31(param_3._1_3_,cVar2);
  if (cVar2 == '\0') {
    param_2 = 0xed6a720;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),param_1,&param_2,uVar1,2);
    param_2 = 0x7d197b6;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),param_1,&param_2,uVar1,2);
    param_2 = 0x1cd8c60c;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),param_1,&param_2,uVar1,2);
    param_2 = 0x15dff69a;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),param_1,&param_2,uVar1,2);
    cVar2 = (char)param_3;
  }
  return cVar2;
}
