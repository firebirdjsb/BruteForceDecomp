/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 854F9EE4962D3D49AB562B239DB0789FA3A03BBD3A45AB351FDD039141139428
 * Entry: 0x0027de70, Ghidra index: 9006, label: FUN_0027de70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038ce98;
extern uint32_t DAT_0038d318;
void FUN_0027de70(int param_1)

{
  int iVar1;
  int in_EAX;
  byte bVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  
  iVar6 = 0;
  if (*(int *)(in_ECX + 0x7c) < 1) {
    uVar3 = in_EAX + 5;
  }
  else {
    if (*(char *)(in_ECX + 0x1c) == '\x02') {
      FUN_0027e470();
    }
    FUN_0027d110(in_ECX + 0xb10);
    FUN_0027d110(in_ECX + 0xb1c);
    iVar6 = FUN_0027d900();
    uVar4 = *(int *)(in_ECX + 0x16a0) + 10U >> 3;
    uVar3 = *(int *)(in_ECX + 0x16a4) + 10U >> 3;
    if (uVar4 < uVar3) goto LAB_0027ded2;
  }
  uVar4 = uVar3;
LAB_0027ded2:
  if ((uVar4 < in_EAX + 4U) || (param_1 == 0)) {
    iVar5 = *(int *)(in_ECX + 0x16b4);
    bVar2 = (byte)iVar5;
    if (uVar3 == uVar4) {
      iVar6 = unaff_EDI + 2;
      if (iVar5 < 0xe) {
        *(ushort *)(in_ECX + 0x16b0) =
             *(ushort *)(in_ECX + 0x16b0) | (ushort)(iVar6 << (bVar2 & 0x1f));
        *(int *)(in_ECX + 0x16b4) = iVar5 + 3;
      }
      else {
        *(ushort *)(in_ECX + 0x16b0) =
             *(ushort *)(in_ECX + 0x16b0) | (ushort)(iVar6 << (bVar2 & 0x1f));
        *(undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x14)) =
             *(undefined1 *)(in_ECX + 0x16b0);
        iVar5 = *(int *)(in_ECX + 0x14) + 1;
        *(int *)(in_ECX + 0x14) = iVar5;
        *(undefined1 *)(iVar5 + *(int *)(in_ECX + 8)) = *(undefined1 *)(in_ECX + 0x16b1);
        iVar5 = *(int *)(in_ECX + 0x16b4);
        *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
        *(int *)(in_ECX + 0x16b4) = iVar5 + -0xd;
        *(ushort *)(in_ECX + 0x16b0) = (ushort)iVar6 >> (0x10U - (char)iVar5 & 0x1f);
      }
      FUN_0027e050(&DAT_0038ce98,&DAT_0038d318);
    }
    else {
      iVar1 = unaff_EDI + 4;
      if (iVar5 < 0xe) {
        *(ushort *)(in_ECX + 0x16b0) =
             *(ushort *)(in_ECX + 0x16b0) | (ushort)(iVar1 << (bVar2 & 0x1f));
        *(int *)(in_ECX + 0x16b4) = iVar5 + 3;
      }
      else {
        *(ushort *)(in_ECX + 0x16b0) =
             *(ushort *)(in_ECX + 0x16b0) | (ushort)(iVar1 << (bVar2 & 0x1f));
        *(undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x14)) =
             *(undefined1 *)(in_ECX + 0x16b0);
        iVar5 = *(int *)(in_ECX + 0x14) + 1;
        *(int *)(in_ECX + 0x14) = iVar5;
        *(undefined1 *)(iVar5 + *(int *)(in_ECX + 8)) = *(undefined1 *)(in_ECX + 0x16b1);
        iVar5 = *(int *)(in_ECX + 0x16b4);
        *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
        *(int *)(in_ECX + 0x16b4) = iVar5 + -0xd;
        *(ushort *)(in_ECX + 0x16b0) = (ushort)iVar1 >> (0x10U - (char)iVar5 & 0x1f);
      }
      FUN_0027d970(*(int *)(in_ECX + 0xb14) + 1,*(int *)(in_ECX + 0xb20) + 1,iVar6 + 1);
      FUN_0027e050(in_ECX + 0x8c,in_ECX + 0x980);
    }
  }
  else {
    FUN_0027dbe0(param_1);
  }
  FUN_0027cd40();
  if (unaff_EDI == 0) {
    return;
  }
  FUN_0027e580();
  return;
}
