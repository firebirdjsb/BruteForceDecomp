/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89AC270609CE4DBCAF9C32C8E1808DA72C40550C31A8E3E3FE1A360C65528278
 * Entry: 0x000bf040, Ghidra index: 2327, label: FUN_000bf040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041b1a8;
extern uint32_t DAT_00469aac;
extern uint32_t DAT_00469ac0;
extern uint32_t DAT_004a5b98;
uint FUN_000bf040(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = *(undefined4 **)(in_EAX + 0xe0);
  DAT_00469ac0 = 0;
  uVar3 = (**(code **)(*(int *)puVar1[0x169] + 0x9c))();
  if ((((char)uVar3 != '\0') && (uVar3 = puVar1[0x1ea], uVar3 == 0)) &&
     ((iVar4 = (**(code **)(**(int **)(puVar1[2] + 0xbec) + 0xc))(puVar1), iVar4 == 0 ||
      (((*(int *)(iVar4 + 0x30) == 0 ||
        (uVar3 = *(uint *)(*(int *)(iVar4 + 0x30) + 0x44), uVar3 == 0)) ||
       ((*(byte *)(uVar3 + 0x13) & 1) != 0)))))) {
    puVar5 = (undefined4 *)0x0;
    if (*(int **)(DAT_00469aac + 0x68) != (int *)0x0) {
      puVar5 = (undefined4 *)**(int **)(DAT_00469aac + 0x68);
    }
    puVar2 = *(undefined4 **)(DAT_00469aac + 0x68);
    puVar6 = puVar5;
    for (; puVar5 != puVar2; puVar5 = (undefined4 *)*puVar5) {
      puVar6 = (undefined4 *)puVar5[3];
      if (((puVar6 != (undefined4 *)0x0) && (puVar6 != puVar1)) &&
         ((puVar6 = (undefined4 *)puVar6[400], puVar6 != (undefined4 *)0x0 && (DAT_00469ac0 < 0x80))
         )) {
        (&DAT_0041b1a8)[DAT_00469ac0] = puVar6;
        DAT_00469ac0 = DAT_00469ac0 + 1;
        if (DAT_004a5b98 < DAT_00469ac0) {
          DAT_004a5b98 = DAT_00469ac0;
        }
      }
    }
    return CONCAT31((int3)((uint)puVar6 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}
