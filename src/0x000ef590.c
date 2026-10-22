/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5343786165CC5BDA66D4DE326319A37B7F6FE02877F20EF24F805AD9F83B419
 * Entry: 0x000ef590, Ghidra index: 2976, label: FUN_000ef590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_LAB_0039e5b0;
/* WARNING: Removing unreachable block (ram,0x000ef6b8) */
/* WARNING: Removing unreachable block (ram,0x000ef6c0) */
/* WARNING: Removing unreachable block (ram,0x000ef6d4) */
/* WARNING: Removing unreachable block (ram,0x000ef6e1) */
/* WARNING: Removing unreachable block (ram,0x000ef6dc) */
/* WARNING: Removing unreachable block (ram,0x000ef6cf) */
/* WARNING: Removing unreachable block (ram,0x000ef6e4) */
/* WARNING: Removing unreachable block (ram,0x000ef713) */
/* WARNING: Removing unreachable block (ram,0x000ef6f6) */
/* WARNING: Removing unreachable block (ram,0x000ef72c) */
/* WARNING: Removing unreachable block (ram,0x000ef762) */
/* WARNING: Removing unreachable block (ram,0x000ef733) */
/* WARNING: Removing unreachable block (ram,0x000ef77e) */
/* WARNING: Removing unreachable block (ram,0x000ef796) */
/* WARNING: Removing unreachable block (ram,0x000ef7aa) */
/* WARNING: Removing unreachable block (ram,0x000ef7a2) */
/* WARNING: Removing unreachable block (ram,0x000ef78a) */
/* WARNING: Removing unreachable block (ram,0x000ef7b0) */
/* WARNING: Removing unreachable block (ram,0x000ef6ba) */
/* WARNING: Removing unreachable block (ram,0x000ef6a7) */
/* WARNING: Removing unreachable block (ram,0x000ef7d8) */

uint FUN_000ef590(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  uint *puVar5;
  
  uVar4 = 0;
  iVar1 = (**(code **)(*DAT_00469b54 + 0x48))();
  puVar5 = *(uint **)(iVar1 + 0x578);
  uVar2 = iVar1 + 0x574;
  if (puVar5 != *(uint **)(iVar1 + 0x57c)) {
    uVar2 = *param_2;
    while (*puVar5 != uVar2) {
      puVar5 = puVar5 + 7;
      if (puVar5 == *(uint **)(iVar1 + 0x57c)) {
        return uVar2 & 0xffffff00;
      }
    }
    if (puVar5 != (uint *)0x0) {
      puVar3 = (undefined4 *)FUN_002ea01d(0x28);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &PTR_LAB_0039e5b0;
        puVar3[9] = 0;
        puVar3[8] = 0;
        puVar3[7] = 0;
        puVar3[9] = 0x1345ec09;
      }
      uVar2 = puVar5[4];
      puVar3[8] = uVar2;
      puVar3[7] = uVar2;
      puVar3[9] = puVar5[5];
      uVar2 = puVar5[5];
      if (uVar2 == 0x12bb72c7) {
        FUN_00074fb0();
      }
      else if (uVar2 == 0xfe50482) {
        FUN_00074fb0();
      }
      else {
        if (uVar2 != 0xe3788ab) {
          FUN_00074fb0();
          FUN_00074fb0();
        }
        FUN_00074fb0();
      }
      FUN_001611d0();
      uVar2 = 0;
      uVar4 = 1;
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),uVar4);
}
