/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25BF3EBDBB5990634EFAE726E623503C4C43B5E6CF7C03472C5FC1F11295259D
 * Entry: 0x002f8521, Ghidra index: 10952, label: FUN_002f8521
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002f8521(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_50 [8];
  uint local_30;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  uint local_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  /* Only the low byte is initialized by the guest; the other bytes remain unverified. */
  local_c = ((local_c & UINT32_C(0xffffff00)) | UINT32_C(1));
  do {
    iVar2 = NtQueryDirectoryFile(param_1,0,0,0,local_14,iVar1,0x146,1,0,local_c);
    local_c = local_c & 0xffffff00;
    if (iVar2 < 0) break;
    uVar3 = *(uint *)(iVar1 + 0x38);
    *(undefined1 *)(*(int *)(iVar1 + 0x3c) + 0x40 + iVar1) = 0;
    uVar3 = uVar3 >> 4;
    RtlInitAnsiString(local_1c,iVar1 + 0x40);
    local_24 = local_1c;
    local_28 = param_1;
    local_20 = 0x40;
    iVar2 = NtOpenFile(&local_8,(uVar3 & 1) != 0 | 0x110100,&local_28,local_14,7,
                       (-(uint)((uVar3 & 1) != 0) & 0xffffffc1) + 0x40 | 0x4000);
    if (iVar2 < 0) break;
    if ((uVar3 & 1) == 0) {
      uVar3 = *(uint *)(iVar1 + 0x38);
      if ((uVar3 & 1) != 0) {
        puVar4 = local_50;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        local_30 = uVar3 & 0x3126 | 0x80;
        iVar2 = NtSetInformationFile(local_8,local_14,local_50,0x28,4);
      }
      if (-1 < iVar2) {
        param_2 = (int)(((uint32_t)param_2 & UINT32_C(0x00ffffff)) | UINT32_C(0x01000000));
        iVar2 = NtSetInformationFile(local_8,local_14,(int)&param_2 + 3,1,0xd);
      }
    }
    else {
      FUN_002f8521(local_8,iVar1);
    }
    NtClose(local_8);
  } while (-1 < iVar2);
  if ((iVar2 == -0x7ffffffa) || (iVar2 == -0x3ffffff1)) {
    puVar4 = local_50;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_30 = *(uint *)(iVar1 + 0x38) & 0x3126 | 0x80;
    NtSetInformationFile(param_1,local_14,local_50,0x28,4);
    param_2 = (int)(((uint32_t)param_2 & UINT32_C(0x00ffffff)) | UINT32_C(0x01000000));
    iVar2 = NtSetInformationFile(param_1,local_14,(int)&param_2 + 3,1,0xd);
  }
  return iVar2;
}
