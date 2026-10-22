/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 005298CD0C448BFE548CB6C3ACCE715E299D9C2AC71A51525E19A172974BAE37
 * Entry: 0x00264fd0, Ghidra index: 8718, label: FUN_00264fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_003ffe1c;
extern uint32_t DAT_003ffe20;
extern uint32_t _DAT_003ffe10;
extern uint32_t _DAT_003ffe14;
extern uint32_t _DAT_003ffe18;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00264fd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  piVar4 = *(int **)(param_1 + 0xc);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[8];
    if (piVar4[6] != 0) {
      uVar6 = 0x80004005;
    }
    piVar2 = (int *)piVar4[1];
    iVar3 = *piVar4;
    iVar5 = iVar3;
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar3;
      iVar5 = _DAT_003ffe10;
    }
    _DAT_003ffe10 = iVar5;
    if (iVar3 != 0) {
      *(int **)(iVar3 + 4) = piVar2;
      piVar2 = _DAT_003ffe14;
    }
    _DAT_003ffe14 = piVar2;
    piVar4[1] = 0;
    *piVar4 = 0;
    if (DAT_003ffe1c == (int *)0x0) {
      piVar4[1] = 0;
      _DAT_003ffe18 = piVar4;
    }
    else {
      *DAT_003ffe1c = (int)piVar4;
      piVar4[1] = (int)DAT_003ffe1c;
    }
    DAT_003ffe20 = DAT_003ffe20 + -1;
    DAT_003ffe1c = piVar4;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
    piVar4[4] = 0;
    piVar4 = piVar1;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar6;
}
