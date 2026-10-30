/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F26C70A13C360946AEFFE1460D9A2071DB8E73A358DEEC5AC1D9DD66DAD7C0FA
 * Entry: 0x00298640, Ghidra index: 9362, label: FUN_00298640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_00298640(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  undefined4 local_14;
  
  puVar10 = DAT_00469888;
  if ((int)DAT_00469888[5] < 1) {
    iVar9 = 0;
  }
  else {
    iVar9 = DAT_00469888[4] + 1;
  }
  iVar6 = FUN_00289e20();
  if ((iVar6 != -4) && (iVar6 != -5)) {
    FUN_00295240();
    puVar10 = DAT_00469888;
  }
  if (iVar9 == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)((puVar10[1] - 0x10) + iVar9 * 0x10);
  }
  uVar1 = puVar7[3];
  uVar2 = *puVar7;
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  FUN_0028a460();
  puVar10 = (uint *)DAT_00469888[0x16];
  puVar8 = DAT_00469888;
  if (puVar10 == (uint *)0x0) {
    return;
  }
  do {
    if (puVar10[4] != 0xfffffffa) {
      puVar7 = (undefined4 *)*puVar8;
      *puVar7 = 0xfffffffe;
      puVar7[1] = local_14;
      puVar7[2] = puVar10;
      puVar7[3] = uVar1;
      if (puVar8[2] <= *puVar8) {
        FUN_0028a460();
        puVar8 = DAT_00469888;
      }
      uVar5 = *puVar8;
      *puVar8 = uVar5 + 0x10;
      *(undefined4 *)(uVar5 + 0x10) = uVar2;
      *(undefined4 *)(uVar5 + 0x14) = uVar3;
      *(undefined4 *)(uVar5 + 0x18) = uVar4;
      *(undefined4 *)(uVar5 + 0x1c) = uVar1;
      uVar5 = *puVar8;
      *puVar8 = uVar5 + 0x10;
      *(undefined4 *)(uVar5 + 0x10) = 0xfffffffe;
      *(undefined4 *)(uVar5 + 0x14) = local_14;
      *(uint **)(uVar5 + 0x18) = puVar10;
      *(undefined4 *)(uVar5 + 0x1c) = uVar1;
      if (puVar8[2] <= *puVar8) {
        FUN_0028a460();
        puVar8 = DAT_00469888;
      }
      uVar5 = *puVar8;
      *puVar8 = uVar5 + 0x10;
      *(uint *)(uVar5 + 0x10) = puVar10[4];
      *(uint *)(uVar5 + 0x14) = puVar10[5];
      *(uint *)(uVar5 + 0x18) = puVar10[6];
      *(uint *)(uVar5 + 0x1c) = puVar10[7];
      *puVar8 = *puVar8 + 0x10;
      FUN_0028a8b0(2,1);
      puVar8 = DAT_00469888;
      if (*(int *)(*DAT_00469888 - 0x10) != -6) {
        uVar5 = *DAT_00469888;
        *DAT_00469888 = uVar5 - 0x10;
        *(undefined4 *)(uVar5 - 0x20) = *(undefined4 *)(uVar5 - 0x10);
        *(undefined4 *)(uVar5 - 0x1c) = *(undefined4 *)(uVar5 - 0xc);
        *(undefined4 *)(uVar5 - 0x18) = *(undefined4 *)(uVar5 - 8);
        *(undefined4 *)(uVar5 - 0x14) = *(undefined4 *)(uVar5 - 4);
        return;
      }
      *DAT_00469888 = *DAT_00469888 - 0x20;
    }
    puVar10 = (uint *)*puVar10;
    if (puVar10 == (uint *)0x0) {
      return;
    }
  } while( true );
}
