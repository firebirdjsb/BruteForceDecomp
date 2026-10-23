/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 609A182B3AE0544245991DD81B0C7A4B00ECE86C83747F203D2F9B3546AF507A
 * Entry: 0x002f427f, Ghidra index: 10853, label: XapiSelectCachePartition
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003876cc;
int XAPILIB__XapiSelectCachePartition(int param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  dword *__dest;
  int iVar5;
  dword *pdVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_230 [2];
  dword local_228;
  uint local_224 [2];
  dword local_21c [121];
  int local_38;
  undefined4 local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  dword local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  local_14 = XBE_CERTIFICATE_HEADER_00010180.TitleID;
  local_30 = 0;
  local_28 = 0x40;
  local_2c = &DAT_003876cc;
  local_10 = NtOpenFile(&local_c,0xc0100000,&local_30,local_24,3,0x10);
  if (local_10 < 0) {
    return local_10;
  }
  local_1c = 0x800;
  local_18 = 0;
  local_10 = NtReadFile(local_c,0,0,0,local_24,local_230,0x200,&local_1c);
  if (local_10 < 0) goto LAB_002f4499;
  iVar1 = *(int *)HalDiskCachePartitionCount_exref;
  if (((local_230[0] != 0x97315286) || (local_38 != -0x55ab0000)) || (local_230[1] != 2)) {
    puVar4 = local_230;
    for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_230[0] = 0x97315286;
    local_230[1] = 2;
    local_38 = -0x55ab0000;
  }
  uVar9 = 0;
  *param_3 = 1;
  uVar8 = *(uint *)HalDiskCachePartitionCount_exref;
  if (0x29 < uVar8) {
    uVar8 = 0x29;
  }
  uVar7 = uVar8 - 1;
  uVar3 = 0;
  local_8 = uVar7;
  uVar2 = iVar1 - 1;
  if (uVar8 != 0) {
    pdVar6 = &local_228;
    do {
      if ((local_14 == *pdVar6) && (pdVar6[2] != 0)) {
        uVar9 = local_224[uVar3 * 3] + 3;
        *param_3 = 0;
        uVar2 = uVar3;
        uVar7 = local_8;
        if (uVar9 != 0) goto LAB_002f4401;
        break;
      }
      uVar3 = uVar3 + 1;
      pdVar6 = pdVar6 + 3;
      uVar7 = local_8;
    } while (uVar3 < uVar8);
  }
  uVar3 = uVar2;
  param_3 = (undefined4 *)0x0;
  if (uVar8 == 0) {
LAB_002f43ef:
    uVar9 = local_224[uVar7 * 3] + 3;
  }
  else {
    do {
      local_8 = 0;
      puVar4 = local_224;
      do {
        if ((puVar4[1] != 0) && ((undefined4 *)*puVar4 == param_3)) break;
        local_8 = local_8 + 1;
        puVar4 = puVar4 + 3;
      } while (local_8 < uVar8);
      if (local_8 == uVar8) {
        uVar9 = (int)param_3 + 3;
      }
      param_3 = (undefined4 *)((int)param_3 + 1);
    } while (param_3 < uVar8);
    if (uVar9 == 0) goto LAB_002f43ef;
  }
LAB_002f4401:
  if (uVar8 + 3 <= uVar9) {
    uVar9 = uVar8 + 2;
  }
  uVar8 = -(uint)(param_1 != 0) & uVar7;
  *param_2 = uVar9;
  if (uVar8 < uVar3) {
    pdVar6 = &local_228;
    __dest = local_21c;
    uVar7 = uVar3;
LAB_002f444c:
    _memmove(__dest,pdVar6,uVar7 * 0xc);
  }
  else if (uVar3 < uVar8) {
    uVar7 = uVar7 - uVar3;
    __dest = &local_228 + uVar3 * 3;
    pdVar6 = local_21c + uVar3 * 3;
    goto LAB_002f444c;
  }
  (&local_228)[uVar8 * 3] = local_14;
  local_224[uVar8 * 3] = uVar9 - 3;
  local_224[uVar8 * 3 + 1] = (uint)(param_1 == 0);
  NtWriteFile(local_c,0,0,0,local_24,local_230,0x200,&local_1c);
LAB_002f4499:
  NtClose(local_c);
  return local_10;
}
