/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 806A1660ADDA2FD51ACDB35DB2329B9398C1116B744E3867F6037C0B384FDFF5
 * Entry: 0x0007cc60, Ghidra index: 1483, label: FUN_0007cc60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_0007cba0(int param_1,int param_2,int param_3);

extern uint32_t DAT_0046995c;
uint FUN_0007cc60(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0;
  piVar1 = (int *)(**(code **)(*in_ECX + 0x58))();
  bVar5 = *(int *)(DAT_0046995c + 0x1c) == 0;
  if (*piVar1 == 0x120785ef) {
    if (!bVar5) {
      return param_2;
    }
    uVar4 = 0;
    while (iVar2 = FUN_0007cba0(uVar4,param_1,param_2), iVar2 != 0) {
      uVar4 = uVar4 + 1;
      if (3 < (int)uVar4) {
        return 0;
      }
    }
  }
  else if (*piVar1 == -0x104e72d8) {
    if (bVar5) {
      iVar2 = FUN_0007cba0(0,param_1,param_2);
      iVar3 = FUN_0007cba0(1,param_1,param_2);
      return (uint)(iVar3 < iVar2);
    }
    uVar4 = param_2 & 0x80000001;
    if ((int)uVar4 < 0) {
      return (uVar4 - 1 | 0xfffffffe) + 1;
    }
  }
  return uVar4;
}
