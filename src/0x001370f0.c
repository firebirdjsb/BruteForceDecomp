/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E50C454CB4BC684D5B4EC31D5FCCB20E2596CBBD006221CA9A37ABB528529B7C
 * Entry: 0x001370f0, Ghidra index: 3899, label: FUN_001370f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001370f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00137dc0();
  iVar1 = FUN_00137300();
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    if (iVar3 != *(int *)(iVar1 + 8)) {
      do {
        iVar2 = FUN_00137360(param_1,param_3,0);
        if ((*(int *)(iVar3 + 4) <= iVar2) && (iVar2 <= *(int *)(iVar3 + 8))) {
          FUN_00137930(iVar3);
        }
        iVar3 = iVar3 + 0x2c;
      } while (iVar3 != *(int *)(iVar1 + 8));
    }
    if (*(int *)(in_EAX + 4) != 0) {
      return (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x2c;
    }
  }
  return 0;
}
