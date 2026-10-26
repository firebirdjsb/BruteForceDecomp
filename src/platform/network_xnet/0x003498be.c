/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B363FCE64CAE85744EFF7DCC02FC5894023C032474EBF9BFDC444CAC4D09EA3
 * Entry: 0x003498be, Ghidra index: 12921, label: FUN_003498be
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003569b8;
undefined4 FUN_003498be(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_28 [20];
  undefined8 local_14;
  int local_c;
  uint32_t local_8;
  
  iVar7 = *(int *)(in_ECX + 0xbcc);
  local_c = in_ECX;
  if (*(int *)(in_ECX + 0xae4) != 3) goto LAB_00349a09;
  if (0x11c < *(ushort *)(iVar7 + 2)) {
    local_8 = *(ushort *)(iVar7 + 2) - 0x11c;
    FUN_0034c3e0(&local_8,4,iVar7 + 0x11c,local_8,0,0,local_28,0x14);
    /* XBE 0x00349916: push DWORD PTR [0x00386480].
     * This imports a 32-bit Xbox public-key pointer, never key bytes.
     * Guest import mapping is deferred until the native runtime. */
    uint32_t guest_public_key =
        *(const uint32_t *)(uintptr_t)UINT32_C(0x00386480);
    cVar3 = XcVerifyPKCS1Signature((undefined4 *)(iVar7 + 0x1c),
                                   (const void *)(uintptr_t)guest_public_key,
                                   local_28);
    if (cVar3 == '\0') {
      *(undefined1 *)(iVar7 + 0x948) = 0x53;
    }
    else {
      puVar8 = (undefined4 *)(iVar7 + 0x1c);
      for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      FUN_00347c97();
      KfLowerIrql();
      puVar8 = (undefined4 *)(iVar7 + 0x1c);
      puVar9 = (undefined4 *)(iVar7 + 0x948);
      for (iVar6 = 0x40; in_ECX = local_c, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
    }
  }
  *(undefined4 *)(in_ECX + 0xae4) = 4;
  *(undefined4 *)(iVar7 + 0xa48) = 0;
  puVar8 = (undefined4 *)(iVar7 + 0x11c);
  for (iVar6 = 0x200; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if (*(int *)(iVar7 + 4) == 0) goto LAB_00349a09;
  iVar6 = ObReferenceObjectByName(&PTR_LAB_003569b8,0x40,0,0,&local_8);
  if (iVar6 < 0) {
LAB_003499fc:
    if (iVar6 == 0x103) goto LAB_00349a09;
  }
  else {
    *(int *)(iVar7 + 0xa50) = local_8;
    local_14 = (ulonglong)*(uint *)(iVar7 + 4) * 0x800;
    iVar6 = IoBuildSynchronousFsdRequest
                      (2,local_8,iVar7 + 0x11c,0x800,&local_14,*(undefined4 *)(in_ECX + 0xaec),
                       (undefined4 *)(iVar7 + 0xa48));
    *(undefined4 *)(iVar7 + 0xa48) = 0x103;
    if (iVar6 != 0) {
      iVar6 = IofCallDriver();
      goto LAB_003499fc;
    }
    iVar6 = -0x3fffff66;
  }
  *(int *)(iVar7 + 0xa48) = iVar6;
LAB_00349a09:
  if ((*(int *)(in_ECX + 0xae4) == 4) && (iVar6 = *(int *)(iVar7 + 0xa48), iVar6 != 0x103)) {
    if (iVar6 < 0) {
      *(undefined1 *)(iVar7 + 0x920) = 0x45;
      *(int *)(iVar7 + 0x921) = iVar6;
    }
    else {
      uVar1 = *(ushort *)(iVar7 + 8);
      if (uVar1 < 0x800) {
        FUN_0034c3e0(uVar1 + 0x11c + iVar7,0x800 - (uint)uVar1,0,0,0,0,iVar7 + 0x920,0x14);
      }
      if (*(ushort *)(iVar7 + 10) < 0x7ed) {
        puVar8 = (undefined4 *)(*(ushort *)(iVar7 + 10) + 0x11c + iVar7);
        puVar9 = (undefined4 *)(iVar7 + 0x934);
        for (iVar6 = 5; in_ECX = local_c, iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
    }
    if (*(int *)(iVar7 + 0xa50) != 0) {
      ObfDereferenceObject();
      *(int *)(iVar7 + 0xa50) = 0;
    }
    uVar4 = KeRaiseIrqlToDpcLevel();
    /* XBE 0x00349AA8: MOV BYTE PTR [EBP-4],AL. The same DWORD is
     * an earlier output argument; only its low byte is overwritten.
     * Guest pointer/host ABI translation remains unverified. */
    local_8 = (local_8 & UINT32_C(0xFFFFFF00)) | (uint32_t)uVar4;
    *(undefined4 *)(in_ECX + 0xae4) = 5;
    if ((**(byte **)(in_ECX + 0xae8) & 4) == 0) {
      bVar5 = *(byte *)(in_ECX + 0x38);
    }
    else {
      bVar5 = *(byte *)(in_ECX + 0x3a);
    }
    (*(byte **)(in_ECX + 0xae8))[3] = bVar5;
    if ((**(byte **)(in_ECX + 0xae8) & 4) == 0) {
      bVar5 = *(byte *)(in_ECX + 0x39);
    }
    else {
      bVar5 = *(byte *)(in_ECX + 0x3b);
    }
    FUN_0034c35a(*(byte **)(in_ECX + 0xae8) + 0x34,*(int *)(in_ECX + 0x1d8) + (uint)bVar5 * 5);
    FUN_00349366(*(undefined4 *)(in_ECX + 0xae8),0x530a,iVar7 + 0x920,0x128,0,0);
    KfLowerIrql();
  }
  KeRaiseIrqlToDpcLevel();
  if (param_1 != (undefined4 *)0x0) {
    if ((*(int *)(in_ECX + 0xae8) == 0) || (*(uint *)(in_ECX + 0xae4) < 6)) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
    }
    else {
      puVar8 = (undefined4 *)(*(int *)(in_ECX + 0xae8) + 0xc4);
      for (iVar7 = 5; in_ECX = local_c, iVar7 != 0; iVar7 = iVar7 + -1) {
        *param_1 = *puVar8;
        puVar8 = puVar8 + 1;
        param_1 = param_1 + 1;
      }
    }
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = (*(byte *)(in_ECX + 0x8c4) & 8) >> 3;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(in_ECX + 0xbbc);
  }
  uVar2 = *(undefined4 *)(in_ECX + 0xae4);
  KfLowerIrql();
  return uVar2;
}
