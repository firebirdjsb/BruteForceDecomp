/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5A8DCAFCC0EED6F73410AFDDEADFE82CA950097075A7DDD850C21C06EE00949
 * Entry: 0x002b39f0, Ghidra index: 9769, label: FUN_002b39f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b39f0(undefined4 param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int in_EAX;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_EDX;
  undefined4 *extraout_EDX;
  undefined4 *unaff_EDI;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_34 [9];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x90);
  local_60 = *unaff_EDI;
  local_5c = unaff_EDI[1];
  local_58 = unaff_EDI[2];
  local_54 = unaff_EDI[3];
  local_70 = *in_EDX;
  local_6c = in_EDX[1];
  local_68 = in_EDX[2];
  local_64 = in_EDX[3];
  if ((*(uint *)(in_EAX + 0x70) & 0xc00) == 0) {
    puVar3 = local_34;
    iVar4 = 3;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    local_4 = 0;
    FUN_002b4100();
    local_c = extraout_EDX[1];
    local_10 = *extraout_EDX;
    local_8 = extraout_EDX[2];
    local_50 = -*(float *)(in_EAX + 0x2c);
    local_4c = -*(float *)(in_EAX + 0x30);
    local_44 = 0.0;
    local_48 = -*(float *)(in_EAX + 0x34);
    FUN_00150930();
  }
  pfVar2 = *(float **)(in_EAX + 0x28);
  if (pfVar2 != (float *)0x0) {
    local_44 = pfVar2[3];
    local_50 = -*pfVar2;
    local_4c = -pfVar2[1];
    local_48 = -pfVar2[2];
    FUN_002b3d00();
  }
  local_74 = uVar1;
  FUN_002c6a00(&local_74,&local_60,&local_70,param_1);
  return;
}
