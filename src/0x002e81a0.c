/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6FA9D2F7B1FDE21CA34E8C62DE639904D7E7B99E07FA12F6E4560EC41D1FDBC
 * Entry: 0x002e81a0, Ghidra index: 10534, label: FUN_002e81a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6974;
extern uint32_t DAT_003b6978;
extern uint32_t DAT_0040e89c;
int FUN_002e81a0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *local_14;
  undefined4 uStack_10;
  int *piStack_c;
  int *piStack_8;
  char cStack_4;
  
  uVar7 = 0;
  local_14 = (int *)0x0;
  iVar3 = FUN_002e8b40(param_5,&local_14,0);
  if (-1 < iVar3) {
    local_14[2] = param_2;
    local_14[1] = param_1;
    local_14[3] = param_3;
    local_14[4] = param_4;
    uStack_10 = (**(code **)(in_ECX + 0x38))();
    uVar8 = 0;
    cStack_4 = '\x01';
    piStack_c = local_14;
    piStack_8 = local_14;
    piVar5 = local_14;
    if (DAT_003b6974 != 0) {
      uVar6 = DAT_003b6974;
      if (DAT_003b6974 == 0) goto LAB_002e8256;
      do {
        piVar1 = *(int **)(DAT_003b6978 + uVar8 * 4);
        if (piVar1 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar1 + 4))(&uStack_10);
          piVar5 = piStack_8;
          if ((iVar3 < 0) || (cStack_4 == '\0')) break;
          piStack_c = piStack_8;
          uVar6 = DAT_003b6974;
        }
LAB_002e8256:
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
    }
    if (iVar3 == 0) {
      iVar4 = (**(code **)(*piVar5 + 0x14))();
      iVar9 = iVar4 * 0x10 + DAT_0040e89c;
      if (*(char *)(iVar4 * 0x10 + 0xc + DAT_0040e89c) != '\0') {
        do {
          iVar3 = (**(code **)**(undefined4 **)(iVar9 + uVar7 * 4))(piStack_8);
          if (iVar3 != 1) {
            return iVar3;
          }
          uVar7 = uVar7 + 1;
          iVar3 = 1;
        } while (uVar7 < *(byte *)(iVar9 + 0xc));
      }
      cVar2 = (**(code **)(*piStack_8 + 0x20))();
      if ((cVar2 != '\0') && (uVar7 = piStack_8[3], uVar7 < *(uint *)(in_ECX + 8))) {
        if ((uVar7 != 0xffffffff) && (piStack_8[4] != -1)) {
          iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x10) + uVar7 * 4) + 0xc))(piStack_8);
          return iVar3;
        }
        return -0x7fffbffb;
      }
      FUN_002e8b90();
    }
  }
  return iVar3;
}
