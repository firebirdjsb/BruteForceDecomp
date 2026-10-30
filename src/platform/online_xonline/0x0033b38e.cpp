/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FC651B64E751B3524AFC558B1F1896E0A831CCEAA474D86E77F22C1BDB897A3
 * Entry: 0x0033b38e, Ghidra index: 12517, label: FUN_0033b38e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033b38e(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 unaff_EDI;
  bool bVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_EAX == 0) {
    in_EAX = -0x7ffffffe;
  }
  iVar1 = FUN_003449ff(unaff_EDI,in_EAX,&local_c);
  if ((iVar1 == 0) || (iVar1 = FUN_003449ff(unaff_EDI,0x10,&local_8), iVar1 == 0)) {
    bVar2 = false;
  }
  else {
    for (param_1 = (undefined4 *)*param_1; param_1 != (undefined4 *)0x0;
        param_1 = (undefined4 *)*param_1) {
      iVar1 = FUN_0033aa53(unaff_EDI,0,param_1 + 1);
      if (iVar1 == 0) goto LAB_0033b3fe;
    }
    iVar1 = FUN_00344a56(unaff_EDI,local_8);
    if (iVar1 == 0) {
LAB_0033b3fe:
      bVar2 = false;
    }
    else {
      iVar1 = FUN_00344a56(unaff_EDI,local_c);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}
