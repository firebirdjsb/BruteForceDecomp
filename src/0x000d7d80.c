/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B22EEF96E313F11BD2AC8ADE4308FD278F2154E538B9D99FA88AD89A3DBBFF1A
 * Entry: 0x000d7d80, Ghidra index: 2672, label: FUN_000d7d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t *DAT_004698d4;
extern uint32_t DAT_004698d8;
void FUN_000d7d80(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int in_EAX;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int local_34;
  int local_24;
  undefined1 local_20 [4];
  uint *local_1c;
  uint *local_18;
  int local_14;
  undefined1 local_10 [4];
  uint *local_c;
  uint *local_8;
  int local_4;
  
  local_c = (uint *)0x0;
  local_8 = (uint *)0x0;
  local_4 = 0;
  FUN_0001b650();
  local_1c = (uint *)0x0;
  local_18 = (uint *)0x0;
  local_14 = 0;
  FUN_0001b650();
  iVar6 = local_24;
  if (*(undefined4 **)(in_EAX + 0x28) == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)**(undefined4 **)(in_EAX + 0x28);
  }
  if (piVar5 != *(int **)(in_EAX + 0x28)) {
    do {
      puVar14 = local_8;
      if ((local_c == (uint *)0x0) ||
         ((uint)(local_4 - (int)local_c >> 2) <= (uint)((int)local_8 - (int)local_c >> 2))) {
        FUN_000a7d80(local_8,piVar5 + 2);
      }
      else {
        FUN_0003efa0(local_8,1,local_10,iVar6);
        local_8 = puVar14 + 1;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(in_EAX + 0x28));
  }
  iVar6 = local_24;
  piVar5 = (int *)0x0;
  if (*(undefined4 **)(in_EAX + 0xf8) != (undefined4 *)0x0) {
    piVar5 = (int *)**(undefined4 **)(in_EAX + 0xf8);
  }
  if (piVar5 != *(int **)(in_EAX + 0xf8)) {
    do {
      puVar14 = local_18;
      if ((local_1c == (uint *)0x0) ||
         ((uint)(local_14 - (int)local_1c >> 2) <= (uint)((int)local_18 - (int)local_1c >> 2))) {
        FUN_000a7d80(local_18,piVar5 + 2);
      }
      else {
        FUN_0003efa0(local_18,1,local_20,iVar6);
        local_18 = puVar14 + 1;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(in_EAX + 0xf8));
  }
  iVar13 = (int)local_8 - (int)local_c >> 2;
  FUN_000e2970(local_c,local_8,iVar13,local_24);
  puVar14 = local_1c;
  iVar6 = (int)local_18 - (int)local_1c >> 2;
  FUN_000e2a90(local_1c,local_18,iVar6,local_24);
  local_24 = in_EAX + 0xc18;
  puVar7 = (undefined4 *)0x0;
  if (*(undefined4 **)(in_EAX + 0xc1c) != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)**(undefined4 **)(in_EAX + 0xc1c);
  }
  puVar1 = *(undefined4 **)(in_EAX + 0xc1c);
  local_34 = 0;
  do {
    if (puVar7 == puVar1) {
      puVar7 = *(undefined4 **)(local_24 + 4);
      if (puVar7 == (undefined4 *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *puVar7;
      }
      FUN_001298b0(&local_24,uVar9,puVar7);
      if (puVar14 == (uint *)0x0) {
        if (local_c == (uint *)0x0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_c);
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puVar14);
    }
    piVar5 = (int *)puVar7[3];
    puVar14 = local_c;
    if (0 < iVar13) {
      iVar10 = iVar13;
      do {
        iVar8 = iVar10 / 2;
        if (*(uint *)(puVar14[iVar8] + 4) < (uint)puVar7[2]) {
          puVar14 = puVar14 + iVar8 + 1;
          iVar8 = iVar10 + (-1 - iVar8);
        }
        iVar10 = iVar8;
      } while (0 < iVar8);
    }
    if ((puVar14 == local_8) || (uVar12 = *puVar14, *(int *)(*puVar14 + 4) != puVar7[2])) {
      puVar14 = local_1c;
      if (0 < iVar6) {
        iVar10 = iVar6;
        do {
          iVar8 = iVar10 / 2;
          if (*(uint *)(puVar14[iVar8] + 4) < (uint)puVar7[2]) {
            puVar14 = puVar14 + iVar8 + 1;
            iVar8 = iVar10 + (-1 - iVar8);
          }
          iVar10 = iVar8;
        } while (0 < iVar8);
      }
      uVar11 = 0;
      if ((puVar14 != local_18) && (uVar12 = *puVar14, *(int *)(*puVar14 + 4) == puVar7[2]))
      goto LAB_000d7fda;
    }
    else {
LAB_000d7fda:
      uVar11 = uVar12;
    }
    cVar4 = FUN_000d7cd0();
    uVar12 = piVar5[1];
    if (cVar4 == '\x01') {
      if (uVar12 != uVar11) {
        if ((uVar12 != 0) && ((uVar12 & 1) == 0)) {
          piVar5[1] = 0;
          iVar10 = *(int *)(&DAT_00414da0 + (uVar12 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          piVar3 = (int *)(&DAT_00414da0 + (uVar12 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          while (iVar10 != 0) {
            piVar2 = (int *)*piVar3;
            if (piVar2 == piVar5) {
              *piVar3 = *(int *)*piVar3;
              break;
            }
            piVar3 = piVar2;
            iVar10 = *piVar2;
          }
        }
        piVar5[1] = uVar11;
        if ((uVar11 != 0) && ((uVar11 & 1) == 0)) {
          uVar12 = uVar11 * 0x19660d + 0x3c6ef35f >> 0x15;
          *piVar5 = *(int *)(&DAT_00414da0 + uVar12 * 4);
          *(int **)(&DAT_00414da0 + uVar12 * 4) = piVar5;
        }
      }
    }
    else if (uVar12 != 0) {
      if ((uVar12 & 1) == 0) {
        piVar5[1] = 0;
        iVar10 = *(int *)(&DAT_00414da0 + (uVar12 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        piVar3 = (int *)(&DAT_00414da0 + (uVar12 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        while (iVar10 != 0) {
          piVar2 = (int *)*piVar3;
          if (piVar2 == piVar5) {
            *piVar3 = *(int *)*piVar3;
            break;
          }
          piVar3 = piVar2;
          iVar10 = *piVar2;
        }
      }
      piVar5[1] = 0;
    }
    iVar10 = local_34 % 100;
    local_34 = local_34 + 1;
    if ((iVar10 == 0) && (DAT_004698d4 != (code *)0x0)) {
      (*DAT_004698d4)(DAT_004698d8);
    }
    puVar7 = (undefined4 *)*puVar7;
    puVar14 = local_1c;
  } while( true );
}
