/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D93A5837E1FB0BA435094F3F967D480B2E073ECC2DF6BF2B12DCB23FCB9BDC5E
 * Entry: 0x00146e00, Ghidra index: 4233, label: FUN_00146e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
uint FUN_00146e00(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *unaff_EBX;
  int *piVar10;
  undefined4 *local_8;
  
  iVar8 = *(int *)(param_1 + 8);
  puVar1 = *(undefined4 **)(iVar8 + 0x74);
  uVar5 = 0;
  local_8 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    local_8 = (undefined4 *)*puVar1;
  }
  puVar2 = *(undefined4 **)(iVar8 + 0x68);
  puVar9 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar9 = (undefined4 *)*puVar2;
  }
  puVar3 = *(undefined4 **)(iVar8 + 0x68);
  puVar4 = *(undefined4 **)(iVar8 + 0x74);
  do {
    if ((((puVar9 == puVar3) && (puVar2 == puVar3)) && (local_8 == puVar4)) && (puVar1 == puVar4)) {
      return CONCAT31((int3)((uint)puVar4 >> 8),uVar5);
    }
    if (puVar9 == puVar2) {
      piVar10 = (int *)local_8[3];
    }
    else {
      piVar10 = (int *)puVar9[3];
    }
    if ((piVar10 != (int *)0x0) && ((*(byte *)(piVar10 + 0x1c) & 1) == 0)) {
      if (unaff_EBX != (int *)0x0) {
        uVar7 = (**(code **)(*unaff_EBX + 4))(param_1,piVar10);
        if ((char)uVar7 != '\0') {
LAB_00146f2c:
          return uVar7 & 0xffffff00;
        }
        cVar6 = (**(code **)*unaff_EBX)(param_1,piVar10);
        if (cVar6 == '\0') goto LAB_00146f10;
      }
      iVar8 = (**(code **)(piVar10[0x6d] + 0x9c))();
      if ((((iVar8 == -1) || (param_2 == -1)) ||
          ((iVar8 != param_2 || ((&DAT_003ffd80)[iVar8 * 10 + param_2] != '\0')))) &&
         (piVar10 != param_3)) {
        (**(code **)(*piVar10 + 0x40))();
        cVar6 = FUN_00146cb0();
        if (cVar6 != '\0') {
          uVar5 = 1;
        }
      }
      else {
        (**(code **)(*piVar10 + 0x40))();
        uVar7 = FUN_00146cb0();
        if ((char)uVar7 != '\0') goto LAB_00146f2c;
      }
    }
LAB_00146f10:
    if (puVar9 == puVar2) {
      local_8 = (undefined4 *)*local_8;
    }
    else {
      puVar9 = (undefined4 *)*puVar9;
    }
  } while( true );
}
