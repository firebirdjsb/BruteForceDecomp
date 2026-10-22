/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4D512BE3514667763D390E6C790096B681EA06EE7C400A5D191FE1651DF7B6F
 * Entry: 0x00161450, Ghidra index: 4607, label: FUN_00161450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003a55f8;
extern uint32_t DAT_0040e6e8;
extern uint32_t PTR_FUN_003a401c;
void FUN_00161450(undefined4 *param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *in_EAX;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  int in_ECX;
  int *piVar9;
  undefined1 local_44 [4];
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined **local_28 [4];
  undefined1 local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  if (0x15555553 < *(uint *)(in_ECX + 8)) {
    local_2c = 0xf;
    local_30 = 0;
    local_40 = 0;
    pcVar5 = &DAT_0040e6e8;
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    FUN_0001fed0(&DAT_0040e6e8,pcVar6 + -0x40e6e8);
    FUN_002ea02b();
    local_28[0] = &PTR_FUN_003a401c;
    local_4 = 0xf;
    local_8 = 0;
    local_18 = 0;
    FUN_0001f4f0(local_44,0,0xffffffff);
    local_28[0] = &PTR_FUN_003a401c;
                    /* WARNING: Subroutine does not return */
    FUN_002fe573(local_28,&DAT_003a55f8);
  }
  piVar7 = (int *)FUN_001617e0(in_ECX,*(undefined4 *)(in_ECX + 4),in_EAX,*(undefined4 *)(in_ECX + 4)
                               ,param_3,0);
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  if (in_EAX == *(undefined4 **)(in_ECX + 4)) {
    (*(undefined4 **)(in_ECX + 4))[1] = piVar7;
    **(undefined4 **)(in_ECX + 4) = piVar7;
    *(int **)(*(int *)(in_ECX + 4) + 8) = piVar7;
  }
  else if (param_2 == '\0') {
    in_EAX[2] = piVar7;
    if (in_EAX == *(undefined4 **)(*(int *)(in_ECX + 4) + 8)) {
      *(int **)(*(int *)(in_ECX + 4) + 8) = piVar7;
    }
  }
  else {
    *in_EAX = piVar7;
    if (in_EAX == (undefined4 *)**(int **)(in_ECX + 4)) {
      **(int **)(in_ECX + 4) = (int)piVar7;
    }
  }
  cVar1 = *(char *)(piVar7[1] + 0x18);
  piVar9 = piVar7;
  while (cVar1 == '\0') {
    piVar8 = piVar9 + 1;
    piVar2 = (int *)*piVar8;
    piVar3 = *(int **)piVar2[1];
    if (piVar2 == piVar3) {
      iVar4 = ((undefined4 *)piVar2[1])[2];
      if (*(char *)(iVar4 + 0x18) == '\0') {
        *(undefined1 *)(piVar2 + 6) = 1;
        *(undefined1 *)(iVar4 + 0x18) = 1;
        *(undefined1 *)(*(int *)(*piVar8 + 4) + 0x18) = 0;
        piVar9 = *(int **)(*piVar8 + 4);
      }
      else {
        if (piVar9 == (int *)piVar2[2]) {
          FUN_000a7bd0(in_ECX);
          piVar9 = piVar2;
        }
        *(undefined1 *)(piVar9[1] + 0x18) = 1;
        *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x18) = 0;
        FUN_000a7c30(in_ECX);
      }
    }
    else if ((char)piVar3[6] == '\0') {
      *(undefined1 *)(piVar2 + 6) = 1;
      *(undefined1 *)(piVar3 + 6) = 1;
      *(undefined1 *)(*(int *)(*piVar8 + 4) + 0x18) = 0;
      piVar9 = *(int **)(*piVar8 + 4);
    }
    else {
      if (piVar9 == (int *)*piVar2) {
        FUN_000a7c30(in_ECX);
        piVar9 = piVar2;
      }
      *(undefined1 *)(piVar9[1] + 0x18) = 1;
      *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x18) = 0;
      FUN_000a7bd0(in_ECX);
    }
    cVar1 = *(char *)(piVar9[1] + 0x18);
  }
  *(undefined1 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x18) = 1;
  *param_1 = piVar7;
  return;
}
