/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CB4C50FDD0E2ED9752BFA91C6C356BA110A402628240116FD56B52E8FE75C16
 * Entry: 0x002e6db0, Ghidra index: 10501, label: FUN_002e6db0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386738;
undefined4 FUN_002e6db0(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  uint local_28;
  undefined **local_20 [6];
  undefined4 local_8;
  int *local_4;
  
  iVar8 = 0;
  if (*(int *)(in_ECX + 0x48a8) != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x48a8) + 4);
    iVar6 = XAPILIB__WaitForSingleObject(*(undefined4 *)(in_ECX + 0x48a4),0);
    if (iVar6 == 0) {
      local_28 = 0;
      if (**(int **)(in_ECX + 0x48a8) != 0) {
        piVar9 = (int *)(in_ECX + 0x38);
        do {
          bVar1 = *(byte *)(*(int *)(in_ECX + 0x48a8) + 8 + iVar8);
          if (((bVar1 & 4) == 0) && (((bVar1 & 1) == 0 || ((bVar1 & 2) != 0)))) {
            if (((*(int *)(in_ECX + 0x48b0) == 2) && ((bVar1 & 1) != 0)) &&
               (cVar4 = FUN_002e4940(), cVar4 != '\0')) {
              if (*(short *)(*(int *)(in_ECX + 0x48a8) + 0xc + iVar8) == 0) {
                FUN_002e5e80(3,local_28);
              }
              else {
                cVar4 = FUN_002e4460(*(undefined2 *)(*(int *)(in_ECX + 0x48a8) + iVar8 + 0x16));
                cVar5 = FUN_002e44f0(*(undefined4 *)(*(int *)(in_ECX + 0x48a8) + 0x18 + iVar8));
                if ((cVar5 != '\0') || (bVar3 = false, cVar4 != '\0')) {
                  bVar3 = true;
                }
                cVar4 = FUN_002e4520(*(undefined4 *)(*(int *)(in_ECX + 0x48a8) + 0x1c + iVar8));
                if ((cVar4 != '\0') || (bVar3)) {
                  FUN_002e5e80(2,local_28);
                }
              }
            }
          }
          else {
            cVar4 = FUN_002e4940();
            if (cVar4 != '\0') {
              FUN_002e8c40();
              local_20[0] = &PTR_FUN_00386738;
              local_8 = 3;
              local_4 = piVar9;
              FUN_002e7f50(0,local_20,1,1);
              FUN_002e4880(0);
              (**(code **)(*piVar9 + 0x18))();
              FUN_002e8b80();
            }
          }
          local_28 = local_28 + 1;
          iVar8 = iVar8 + 0x18;
          piVar9 = piVar9 + 0x9a;
        } while (local_28 < **(uint **)(in_ECX + 0x48a8));
      }
      XAPILIB__ResetEvent(*(undefined4 *)(in_ECX + 0x48a4));
    }
    iVar8 = 0;
    if ((*(int *)(in_ECX + 0x48ac) == 0) ||
       (uVar7 = XAPILIB__GetTickCount(), uVar7 < *(uint *)(in_ECX + 0x48ac))) {
      if (iVar2 != 0) {
        return 0;
      }
    }
    else {
      iVar2 = *(int *)(in_ECX + 0x48b0);
      *(undefined4 *)(in_ECX + 0x48ac) = 0;
      local_28 = 0;
      if (**(int **)(in_ECX + 0x48a8) != 0) {
        piVar9 = (int *)(in_ECX + 0x38);
        do {
          bVar1 = *(byte *)(*(int *)(in_ECX + 0x48a8) + 8 + iVar8);
          cVar4 = FUN_002e4940();
          if ((cVar4 != '\0') && (((bVar1 >> 1 & 1) == 0 || ((iVar2 == 2 && ((bVar1 & 1) == 0))))))
          {
            FUN_002e8c40();
            local_20[0] = &PTR_FUN_00386738;
            local_8 = 3;
            local_4 = piVar9;
            FUN_002e7f50(0,local_20,1,1);
            FUN_002e4880(0);
            (**(code **)(*piVar9 + 0x18))();
            FUN_002e8b80();
          }
          local_28 = local_28 + 1;
          iVar8 = iVar8 + 0x18;
          piVar9 = piVar9 + 0x9a;
        } while (local_28 < **(uint **)(in_ECX + 0x48a8));
      }
    }
    FUN_00345063(*(undefined4 *)(in_ECX + 0x48a8));
    *(undefined4 *)(in_ECX + 0x48a8) = 0;
    *(undefined4 *)(in_ECX + 0x48ac) = 0;
    *(undefined4 *)(in_ECX + 0x48b0) = 0;
  }
  return 0;
}
