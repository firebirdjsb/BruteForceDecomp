/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41D821BF3ACFA0421019F857532B4B3DC514CDE40D2C092FD7FF7BE697DC4340
 * Entry: 0x001e7450, Ghidra index: 6806, label: FUN_001e7450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00396868;
void FUN_001e7450(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = 0;
  piVar4 = (int *)(param_1 + 0x21c);
  do {
    iVar1 = FUN_002ea01d(0xe4);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_001f2b00();
    }
    *piVar4 = iVar1;
    puVar5 = (undefined4 *)(iVar1 + 0xc);
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = (undefined4 *)(iVar1 + 0x60);
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(int *)(*piVar4 + 0xbc) = iVar6;
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar6 < 4);
  iVar6 = 1;
  puVar5 = (undefined4 *)(param_1 + 0x230);
  do {
    puVar2 = (undefined4 *)FUN_002ea01d(0xcc);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[0x2e] = puVar2 + 0x18;
      *(undefined1 *)((int)puVar2 + 5) = 0;
      *(undefined1 *)(puVar2 + 1) = 0;
      puVar2[2] = 0;
      puVar2[0x2d] = puVar2 + 3;
      puVar2[0x2f] = 0xbaad00;
      *puVar2 = &PTR_LAB_00396868;
      puVar2[0x30] = 9;
      puVar2[0x31] = 0;
      *(undefined1 *)(puVar2 + 0x32) = 0;
    }
    *puVar5 = puVar2;
    puVar7 = puVar2 + 3;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    puVar7 = puVar2 + 0x18;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    puVar2[0x30] = iVar6;
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar6 < 9);
  return;
}
