/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3EA1483EA7B1CCCE3E432F22D93F0B6583C5C76B3B1EEEE252895077F7C7007
 * Entry: 0x0023d8e0, Ghidra index: 7960, label: FUN_0023d8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0023d8e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_002ea01d(0x3c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(byte *)(iVar2 + 0x1c) = *(byte *)(iVar2 + 0x1c) & 0xfe;
  }
  cVar1 = FUN_00266540(iVar2,param_2,param_3);
  if (cVar1 == '\0') {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(iVar2 + 0x24));
    }
    return (undefined4 *)0xffffffff;
  }
  param_3 = (undefined4 *)FUN_002ea01d(8);
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)0x0;
  }
  else {
    *param_3 = 1;
    param_3[1] = iVar2;
  }
  FUN_001611d0();
  return param_3;
}
