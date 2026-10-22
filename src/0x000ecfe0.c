/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9ACF00350755F9660026D465AD4EA861C0CE03E05542E46F83ED531CD35DA720
 * Entry: 0x000ecfe0, Ghidra index: 2944, label: FUN_000ecfe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000ecfe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = param_2;
  cVar2 = FUN_000ecdc0(param_1,param_2,param_3);
  param_3 = CONCAT31(param_3._1_3_,cVar2);
  if (cVar2 == '\0') {
    param_2 = 0xc3008e9;
    FUN_000ee4d0(param_1,&param_2,uVar1);
    cVar2 = (char)param_3;
  }
  return cVar2;
}
