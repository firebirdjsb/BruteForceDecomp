/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FAF503920D388044330411ECC00B4B4CF2638048837711C92F423FFBF8E9894
 * Entry: 0x002f4a8e, Ghidra index: 10868, label: WaitForMultipleObjectsEx
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int XAPILIB__WaitForMultipleObjectsEx
              (uint param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_10c [64];
  undefined1 local_c [8];
  
  if (param_1 < 0x41) {
    puVar4 = local_10c;
    for (uVar3 = param_1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar1 = FUN_002f8a4b(local_c,param_4);
    while (iVar2 = NtWaitForMultipleObjectsEx
                             ((int)(char)param_1,local_10c,param_3 == 0,1,param_5,uVar1), -1 < iVar2
          ) {
      if (param_5 == 0) {
        return iVar2;
      }
      if (iVar2 != 0x101) {
        return iVar2;
      }
    }
    XapiSetLastNTError(iVar2);
  }
  else {
    XapiSetLastNTError(0xc000000d);
  }
  return -1;
}
