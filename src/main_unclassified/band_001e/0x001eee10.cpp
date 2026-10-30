/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 883898142B518E4C6081F5A4D2381E3A2E77752528A32E4363AD64D6429DD23D
 * Entry: 0x001eee10, Ghidra index: 6964, label: FUN_001eee10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
extern uint32_t DAT_00469914;
extern uint32_t DAT_00469918;
extern uint32_t DAT_00469b58;
undefined4 FUN_001eee10(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  byte *pbVar6;
  int extraout_ECX;
  int iVar7;
  byte bVar8;
  int iVar9;
  int in_stack_00000214;
  uint in_stack_00000224;
  int in_stack_0000022c;
  int in_stack_00004244;
  
  FUN_002ebea0();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x10) + 0x30) = 60000;
  FUN_001ed400();
  FUN_001ed440();
  puVar4 = (undefined4 *)(extraout_ECX + 0x2e30);
  iVar9 = 8;
  do {
    iVar7 = 0x20;
    do {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  piVar1 = *(int **)(DAT_00469b58 + 8);
  FUN_001ed100();
  DAT_00469914 = *(undefined4 *)(in_stack_00004244 + 0x18);
  DAT_00469918 = 1;
  DAT_004698d0 = 0;
  (**(code **)(*piVar1 + 0x54))();
  (**(code **)(*piVar1 + 0x5c))();
  if (in_stack_00000214 == 1) {
    cVar3 = FUN_002e5880();
    if (cVar3 == '\0') {
      (**(code **)(*piVar1 + 0x1b0))();
      FUN_001ebed0();
      (**(code **)(*piVar1 + 0x220))();
    }
    (**(code **)(*piVar1 + 0x1bc))();
    (**(code **)(*piVar1 + 0x230))();
  }
  else {
    piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e4))();
    iVar9 = DAT_00469b58;
    *piVar5 = (in_stack_0000022c << 0xe) >> 0x18;
    iVar9 = (**(code **)(**(int **)(iVar9 + 8) + 0x1e4))();
    *(int *)(iVar9 + 4) = (in_stack_0000022c << 6) >> 0x18;
  }
  iVar9 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e4))();
  *(uint *)(iVar9 + 8) = (in_stack_00000224 & 0x4000000) >> 0x1a;
  *(undefined4 *)(extraout_ECX + 0x1c) = 3;
  iVar9 = 8;
  do {
    pbVar6 = (byte *)(**(code **)(*piVar1 + 0x130))();
    if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 1) != 0)) {
      iVar7 = -1;
      if (*(int *)(extraout_ECX + 0x1c) != 0) {
        cVar3 = FUN_002e5880();
        if (cVar3 == '\0') {
          iVar7 = FUN_002e5bf0();
          iVar7 = *(int *)(iVar7 + 0x2c);
        }
        else {
          iVar7 = 0;
        }
      }
      if ((*(int *)(pbVar6 + 8) == iVar7) && (iVar7 = (**(code **)(*piVar1 + 0x18c))(), iVar7 != 0))
      {
        pbVar6[0xa4] = pbVar6[0xa4] ^ (*(char *)(iVar7 + 0x34) << 4 ^ pbVar6[0xa4]) & 0x10;
        *(undefined4 *)(pbVar6 + 0xa0) = *(undefined4 *)(iVar7 + 0x2c);
        bVar8 = pbVar6[0xa4] ^ (*(char *)(iVar7 + 0x31) << 1 ^ pbVar6[0xa4]) & 2;
        pbVar6[0xa4] = bVar8;
        bVar8 = (*(char *)(iVar7 + 0x32) << 2 ^ bVar8) & 4 ^ bVar8;
        pbVar6[0xa4] = bVar8;
        iVar2 = DAT_00469b58;
        bVar8 = (*(byte *)(iVar7 + 0x30) ^ bVar8) & 1 ^ bVar8;
        pbVar6[0xa4] = bVar8;
        pbVar6[0xa4] = (*(char *)(iVar7 + 0x33) << 3 ^ bVar8) & 8 ^ bVar8;
        (**(code **)(**(int **)(iVar2 + 8) + 0x134))();
      }
    }
    iVar7 = DAT_00469b58;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *(undefined1 *)(extraout_ECX + 0x5770) = 1;
  piVar1 = *(int **)(iVar7 + 8);
  (**(code **)(*piVar1 + 0x1fc))();
  (**(code **)(*piVar1 + 0x30))();
  return 0;
}
