/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 178FA2B4FE43F40D215386F0A89960D41B58B64213FA387A2BC48A091FAF44F6
 * Entry: 0x002f387b, Ghidra index: 10841, label: FUN_002f387b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f387b(ushort *param_1,int param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  uVar1 = *param_1;
  while (uVar1 != 0) {
    lVar6 = __allmul(uVar7,0x10000,0);
    uVar7 = __aullrem(lVar6 + (ulonglong)uVar1,0xffffffc5,0xffff);
    param_1 = param_1 + 1;
    uVar1 = *param_1;
  }
  iVar5 = 0xb;
  iVar4 = 0;
  do {
    uVar3 = __aullshr();
    uVar2 = FUN_002f3867(uVar3 & 0xf);
    *(undefined1 *)(iVar5 + param_2) = uVar2;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar4 < 0x2d);
  *(undefined1 *)(param_2 + 0xc) = 0;
  return;
}
