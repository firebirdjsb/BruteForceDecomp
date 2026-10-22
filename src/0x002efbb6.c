/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 337FED4A9DBC37C23D8CDFC9653AFBB43DB50334B0D4A23053EC23635ECAD7E6
 * Entry: 0x002efbb6, Ghidra index: 10727, label: FUN_002efbb6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c34;
extern uint32_t DAT_0040f554;
extern uint32_t DAT_0040f558;
undefined1 * FUN_002efbb6(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  piVar1 = DAT_0040f554;
  if (DAT_0040f558 == '\0') {
    piVar1 = (int *)FUN_002f1965(*param_1,param_1[1]);
    FUN_002f182c(param_2 + (uint)(0 < param_3) + (uint)(*piVar1 == 0x2d),param_3 + 1,piVar1);
  }
  else {
    FUN_002efb93();
  }
  puVar2 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  puVar3 = puVar2;
  if (0 < param_3) {
    puVar3 = puVar2 + 1;
    *puVar2 = *puVar3;
    *puVar3 = DAT_003b6c34;
  }
  puVar6 = (undefined4 *)(puVar3 + param_3 + (uint)(DAT_0040f558 == '\0'));
  *puVar6 = 0x30302b65;
  *(undefined2 *)(puVar6 + 1) = 0x30;
  if (param_4 != 0) {
    *(undefined1 *)puVar6 = 0x45;
  }
  if (*(char *)piVar1[3] != '0') {
    iVar4 = piVar1[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *(undefined1 *)((int)puVar6 + 1) = 0x2d;
    }
    if (99 < iVar4) {
      iVar5 = iVar4 / 100;
      iVar4 = iVar4 % 100;
      *(char *)((int)puVar6 + 2) = *(char *)((int)puVar6 + 2) + (char)iVar5;
    }
    if (9 < iVar4) {
      iVar5 = iVar4 / 10;
      iVar4 = iVar4 % 10;
      *(char *)((int)puVar6 + 3) = *(char *)((int)puVar6 + 3) + (char)iVar5;
    }
    *(char *)(puVar6 + 1) = *(char *)(puVar6 + 1) + (char)iVar4;
  }
  return param_2;
}
