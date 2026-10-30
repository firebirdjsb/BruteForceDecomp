/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD2AE0FE14E2CF02A96937DE39ACDBC97C28691145B5AE8A517E76CC7BFB980E
 * Entry: 0x0005a440, Ghidra index: 903, label: FUN_0005a440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00059b60(void);
extern void FUN_000e1150(int param_1,undefined4 *param_2,int *param_3,int *param_4);
extern undefined4 FUN_00059f70(int param_1,float *param_2,float param_3);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_00038440(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern int FUN_00059d40(int param_1);
extern void FUN_000e0c80(void);
extern undefined1 FUN_00059000(int param_1,uint param_2,int param_3);
extern void FUN_0005a690(void);
extern void FUN_00042880(void);
extern void FUN_00012680(int32_t unaff_ESI, uint32_t in_EAX);
extern void FUN_00022d70(void);
extern void FUN_00038320(void);
extern void FUN_00012540(uint32_t* in_ECX);
extern void FUN_00012140(int32_t unaff_ESI);
extern void FUN_0005a360(void);
extern void FUN_00059bf0(void);

char FUN_0005a440(undefined4 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int in_EAX;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char local_79;
  undefined1 *local_78;
  undefined4 local_70;
  int iStack_6c;
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_38 [8];
  int local_30;
  uint local_14;
  undefined1 local_c [4];
  undefined4 *local_8;
  
  local_79 = '\0';
  if (*(int *)(in_EAX + 0xc) == *(int *)(param_2 + 0xc)) {
    return '\0';
  }
  FUN_00059b60();
  local_14 = local_14 | 0x1000;
  if (local_8 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *local_8;
  }
  FUN_000e1150(local_c,&local_70,uVar3,local_8);
  local_14 = local_14 | 0xffff0000;
  bVar2 = false;
  if ((*(byte *)(in_EAX + 0x10) & 1) == 0) {
    local_78 = *(undefined1 **)(in_EAX + 0xc);
  }
  else if (*(int *)(in_EAX + 0xc) == 0) {
    bVar2 = true;
    local_78 = (undefined1 *)FUN_00059f70(param_1);
  }
  else {
    local_78 = local_38;
    (**(code **)(local_30 + 8))();
    iStack_6c = 0;
    if (*(int *)(in_EAX + 0xc) != 0) {
      FUN_0008f6a0(*(int *)(in_EAX + 0xc));
    }
    FUN_00038440();
    if (iStack_6c != 0) {
      FUN_0008f6e0();
    }
  }
  iVar4 = *(int *)(param_2 + 0xc);
  bVar1 = false;
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    if (iVar4 == 0) {
      iVar4 = FUN_00059f70(param_1,param_2,0x41a00000,1);
    }
    else {
      if ((*(byte *)(param_2 + 0x10) & 2) == 0) goto LAB_0005a589;
      iVar4 = FUN_00059d40(param_2);
    }
    bVar1 = true;
  }
LAB_0005a589:
  if ((local_78 != (undefined1 *)0x0) && (iVar4 != 0)) {
    iStack_64 = FUN_000e0c80(auStack_68);
    uStack_60 = 0;
    local_79 = FUN_00059000(local_78,iVar4,auStack_68);
    if (local_79 != '\0') {
      puVar5 = (undefined4 *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iStack_64 + 4) + 0xc) + 8) + 4))();
      local_70 = puVar5[2];
      uStack_58 = puVar5[1];
      uStack_5c = *puVar5;
      uStack_54 = local_70;
      FUN_0005a690();
      if (bVar1) {
        FUN_00042880();
      }
      FUN_00012680();
      if (bVar1) {
        FUN_00022d70();
        FUN_00038320();
        FUN_00012540();
      }
    }
    FUN_00012140();
  }
  if (bVar2) {
    FUN_0005a360();
  }
  if (bVar1) {
    FUN_0005a360();
  }
  FUN_00059bf0();
  return local_79;
}
