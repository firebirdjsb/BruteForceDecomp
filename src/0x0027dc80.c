/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A286C65C1DF2C1E4B85AA1BFEE7C59940B039B9ED6A4F3FCF18136D645A1A3BA
 * Entry: 0x0027dc80, Ghidra index: 9005, label: FUN_0027dc80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027dc80(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_EAX + 0x16b4);
  *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | (ushort)(2 << ((byte)iVar2 & 0x1f));
  if (iVar2 < 0xe) {
    *(int *)(in_EAX + 0x16b4) = iVar2 + 3;
  }
  else {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    iVar2 = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x14) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(ushort *)(in_EAX + 0x16b0) = 2 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
    *(int *)(in_EAX + 0x16b4) = *(int *)(in_EAX + 0x16b4) + -0xd;
  }
  iVar2 = *(int *)(in_EAX + 0x16b4);
  *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | (ushort)(0 << ((byte)iVar2 & 0x1f));
  if (iVar2 < 10) {
    *(int *)(in_EAX + 0x16b4) = iVar2 + 7;
  }
  else {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    iVar2 = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x14) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(ushort *)(in_EAX + 0x16b0) = 0 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
    *(int *)(in_EAX + 0x16b4) = *(int *)(in_EAX + 0x16b4) + -9;
  }
  iVar1 = FUN_0027e500();
  iVar2 = *(int *)(iVar1 + 0x16b4);
  if ((*(int *)(iVar1 + 0x16ac) - iVar2) + 0xb < 9) {
    *(ushort *)(iVar1 + 0x16b0) = *(ushort *)(iVar1 + 0x16b0) | (ushort)(2 << ((byte)iVar2 & 0x1f));
    if (iVar2 < 0xe) {
      *(int *)(iVar1 + 0x16b4) = iVar2 + 3;
    }
    else {
      *(undefined1 *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x14)) =
           *(undefined1 *)(iVar1 + 0x16b0);
      iVar2 = *(int *)(iVar1 + 0x14) + 1;
      *(int *)(iVar1 + 0x14) = iVar2;
      *(undefined1 *)(iVar2 + *(int *)(iVar1 + 8)) = *(undefined1 *)(iVar1 + 0x16b1);
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      *(ushort *)(iVar1 + 0x16b0) = 2 >> (0x10U - (char)*(int *)(iVar1 + 0x16b4) & 0x1f);
      *(int *)(iVar1 + 0x16b4) = *(int *)(iVar1 + 0x16b4) + -0xd;
    }
    iVar2 = *(int *)(iVar1 + 0x16b4);
    *(ushort *)(iVar1 + 0x16b0) = *(ushort *)(iVar1 + 0x16b0) | (ushort)(0 << ((byte)iVar2 & 0x1f));
    if (9 < iVar2) {
      *(undefined1 *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x14)) =
           *(undefined1 *)(iVar1 + 0x16b0);
      iVar2 = *(int *)(iVar1 + 0x14) + 1;
      *(int *)(iVar1 + 0x14) = iVar2;
      *(undefined1 *)(iVar2 + *(int *)(iVar1 + 8)) = *(undefined1 *)(iVar1 + 0x16b1);
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      *(ushort *)(iVar1 + 0x16b0) = 0 >> (0x10U - (char)*(int *)(iVar1 + 0x16b4) & 0x1f);
      *(int *)(iVar1 + 0x16b4) = *(int *)(iVar1 + 0x16b4) + -9;
      iVar2 = FUN_0027e500();
      *(undefined4 *)(iVar2 + 0x16ac) = 7;
      return;
    }
    *(int *)(iVar1 + 0x16b4) = iVar2 + 7;
    iVar1 = FUN_0027e500();
  }
  *(undefined4 *)(iVar1 + 0x16ac) = 7;
  return;
}
