/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2722444AE11DF2324E2C02672C5DE8F04B8BDD9AA3781B3FA9DD859DDCEF06A
 * Entry: 0x00384edf, Ghidra index: 13661, label: FUN_00384edf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_004128cc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00384edf(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *param_2;
  _DAT_004128cc = _DAT_004128cc + 1;
  uVar4 = *(uint *)(iVar1 + 0xc) & *(uint *)(iVar1 + 0x10);
  if ((uVar4 == 0) || ((*(uint *)(iVar1 + 0x10) & 0x80000000) == 0)) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x14) = 0x80000000;
    if ((uVar4 & 1) != 0) {
      *(undefined4 *)(iVar1 + 0xc) = 1;
      uVar4 = uVar4 & 0xfffffffe;
    }
    if ((uVar4 & 0x20) != 0) {
      uVar2 = param_2[0x106];
      param_2[0x106] = (uVar2 - ((*(ushort *)(param_2[2] + 0x80) ^ uVar2) & 0x8000)) + 0x10000;
      *(undefined4 *)(iVar1 + 0xc) = 0x20;
      uVar4 = uVar4 & 0xffffffdf;
    }
    if (uVar4 == 0) {
      *(undefined4 *)(*param_2 + 0x10) = 0x80000000;
    }
    else {
      param_2[0x10e] = uVar4;
      KeInsertQueueDpc(param_2 + 0x110,0,0);
    }
    uVar3 = 1;
  }
  return uVar3;
}
