/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E79C729541D6AA7A7B33DB367ED5909D6CE3BE4A37D695C32110820CC991242
 * Entry: 0x00079510, Ghidra index: 1449, label: FUN_00079510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040ddcc;
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
void FUN_00079510(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_aa4 [128];
  undefined1 local_a24 [4];
  undefined1 local_a20 [128];
  undefined1 local_9a0 [396];
  int iStack_814;
  undefined1 local_80c [4];
  int local_808;
  undefined1 local_800 [2048];
  
  uVar2 = FUN_001e97c0();
  uVar3 = FUN_001e97c0();
  uVar1 = *param_2;
  if (uVar1 < 0xe4b87e3f) {
    if (uVar1 == 0xe4b87e3e) {
      FUN_001ed100(local_a24);
      uVar2 = FUN_001e97c0((local_808 << 6) >> 0x18);
      FUN_002ea9a9(local_aa4,0x40,uVar2);
      puVar5 = local_aa4;
      goto LAB_000797ba;
    }
    if (uVar1 < 0x1dc05994) {
      if (uVar1 == 0x1dc05993) {
        FUN_001ed100(local_a24);
        FUN_002ea9a9(local_aa4,0x40,&DAT_0040ddcc,(local_808 << 0xe) >> 0x18);
        puVar5 = local_aa4;
        goto LAB_000799c0;
      }
      if (uVar1 < 0x1ab9904c) {
        if (uVar1 != 0x1ab9904b) {
          if (uVar1 != 0x93c5b7b) {
            bVar7 = uVar1 == 0xd2825a5;
            goto LAB_00079906;
          }
          goto LAB_00079923;
        }
        FUN_001ed100(local_a24);
        uVar2 = FUN_001e97c0();
        uVar2 = FUN_001e97c0(uVar3,uVar2);
        FUN_002ea9a9(local_800,0x401,uVar2);
      }
      else {
        if (uVar1 != 0x1c038d3f) goto LAB_00079908;
        FUN_001ed100(local_a24);
        uVar2 = FUN_001e97c0(uVar3,local_9a0);
        FUN_002ea9a9(local_800,0x401,uVar2);
      }
    }
    else {
      if (uVar1 == 0x1f93ecb3) {
        FUN_001ed100(local_a24);
        uVar2 = FUN_001e97c0((local_808 << 6) >> 0x18);
        FUN_002ea9a9(local_aa4,0x40,uVar2);
        uVar2 = FUN_001e97c0(uVar3,local_aa4);
        FUN_002ea9a9(local_800,0x401,uVar2);
        piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        (**(code **)(*piVar4 + 0xc))(local_800,0,0);
        FUN_002ea9a9(&stack0xfffff550,0x40,&DAT_0040ddcc,(iStack_814 << 0xe) >> 0x18);
        uVar2 = FUN_001e97c0(uVar3,&stack0xfffff550);
        FUN_002ea9a9(local_80c,0x401,uVar2);
        piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        goto LAB_00079773;
      }
      if (uVar1 == 0x1fc473e7) {
LAB_00079728:
        uVar3 = FUN_001edcc0(param_4);
        FUN_002ea9a9(local_800,0x400,uVar2,uVar3);
        if (*(int *)(DAT_0046995c + 0x1c) != 5) {
          return;
        }
      }
      else {
        bVar7 = uVar1 == 0xe41d7079;
LAB_00079906:
        if (!bVar7) goto LAB_00079908;
LAB_00079923:
        uVar3 = FUN_001edc30(DAT_0046995c);
        FUN_002ea9a9(local_800,0x400,uVar2,uVar3);
      }
    }
  }
  else if (uVar1 < 0xf63ee1fc) {
    if (uVar1 == 0xf63ee1fb) {
      FUN_001ed100(local_a24);
      iVar6 = FUN_00079480();
      if (iVar6 == 0) {
        return;
      }
      uVar2 = FUN_001e97c0(uVar3,iVar6);
      FUN_002ea9a9(local_800,0x401,uVar2);
    }
    else if (uVar1 < 0xf06c6119) {
      if (uVar1 == 0xf06c6118) {
        FUN_001ed100(local_a24);
        puVar5 = (undefined1 *)FUN_001e97c0();
      }
      else {
        if (uVar1 == 0xedf960de) goto LAB_00079728;
        if (uVar1 != 0xef2ff709) goto LAB_00079908;
        FUN_001ed100(local_a24);
        puVar5 = local_a20;
      }
LAB_000797ba:
      uVar2 = FUN_001e97c0(uVar3,puVar5);
      FUN_002ea9a9(local_800,0x401,uVar2);
    }
    else {
      if (uVar1 == 0xf141d44f) {
        FUN_001ed100(local_a24);
        uVar2 = FUN_001e97c0();
        uVar2 = FUN_001e97c0(uVar3,uVar2);
        FUN_002ea9a9(local_800,0x401,uVar2);
        piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        (**(code **)(*piVar4 + 0xc))(local_800,0,0);
        uVar2 = FUN_001e97c0();
        uVar2 = FUN_001e97c0(uVar3,uVar2);
        FUN_002ea9a9(local_80c,0x401,uVar2);
        piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        goto LAB_00079773;
      }
LAB_00079908:
      FUN_002ea9a9(local_800,0x400,uVar2);
    }
  }
  else if (uVar1 == 0xf96b518e) {
    FUN_001ed100(local_a24);
    puVar5 = (undefined1 *)FUN_001e97c0();
LAB_000799c0:
    uVar2 = FUN_001e97c0(uVar3,puVar5);
    FUN_002ea9a9(local_800,0x401,uVar2);
  }
  else {
    if (uVar1 != 0xfc77ca65) {
      bVar7 = uVar1 == 0xff501bca;
      goto LAB_00079906;
    }
    FUN_001ed100(local_a24);
    uVar2 = FUN_000794c0();
    uVar2 = FUN_001e97c0(uVar3,uVar2);
    FUN_002ea9a9(local_800,0x401,uVar2);
  }
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
LAB_00079773:
  (**(code **)(*piVar4 + 0xc))(local_800,0,0);
  return;
}
