/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30F5352168E38E878EC94339F9747C2FB5DD684D69C0C7C979E6401E93C79F47
 * Entry: 0x001ca050, Ghidra index: 5839, label: FUN_001ca050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ca050(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = *in_EAX;
  unaff_EDI[1] = in_EAX[1];
  unaff_EDI[2] = in_EAX[2];
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(in_EAX + 3);
  *(undefined1 *)((int)unaff_EDI + 0xd) = *(undefined1 *)((int)in_EAX + 0xd);
  unaff_EDI[4] = in_EAX[4];
  unaff_EDI[5] = in_EAX[5];
  unaff_EDI[6] = in_EAX[6];
  unaff_EDI[7] = in_EAX[7];
  *(undefined1 *)(unaff_EDI + 8) = *(undefined1 *)(in_EAX + 8);
  unaff_EDI[9] = in_EAX[9];
  unaff_EDI[10] = in_EAX[10];
  *(undefined1 *)(unaff_EDI + 0xb) = *(undefined1 *)(in_EAX + 0xb);
  *(undefined1 *)((int)unaff_EDI + 0x2d) = *(undefined1 *)((int)in_EAX + 0x2d);
  *(undefined1 *)((int)unaff_EDI + 0x2e) = *(undefined1 *)((int)in_EAX + 0x2e);
  unaff_EDI[0xc] = in_EAX[0xc];
  *(undefined1 *)(unaff_EDI + 0xd) = *(undefined1 *)(in_EAX + 0xd);
  *(undefined1 *)((int)unaff_EDI + 0x35) = *(undefined1 *)((int)in_EAX + 0x35);
  unaff_EDI[0xe] = in_EAX[0xe];
  *(undefined1 *)(unaff_EDI + 0xf) = *(undefined1 *)(in_EAX + 0xf);
  unaff_EDI[0x10] = in_EAX[0x10];
  unaff_EDI[0x11] = in_EAX[0x11];
  unaff_EDI[0x12] = in_EAX[0x12];
  unaff_EDI[0x13] = in_EAX[0x13];
  unaff_EDI[0x14] = in_EAX[0x14];
  unaff_EDI[0x15] = in_EAX[0x15];
  *(undefined1 *)(unaff_EDI + 0x16) = *(undefined1 *)(in_EAX + 0x16);
  FUN_001cacc0();
  FUN_001cca00(unaff_EDI + 0x26);
  puVar1 = unaff_EDI + 0x2a;
  iVar2 = (int)in_EAX + (0xa8 - (int)puVar1);
  iVar3 = 8;
  do {
    *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
    puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  unaff_EDI[0x3a] = in_EAX[0x3a];
  unaff_EDI[0x3b] = in_EAX[0x3b];
  *(undefined1 *)(unaff_EDI + 0x3c) = *(undefined1 *)(in_EAX + 0x3c);
  *(undefined1 *)((int)unaff_EDI + 0xf1) = *(undefined1 *)((int)in_EAX + 0xf1);
  unaff_EDI[0x3d] = in_EAX[0x3d];
  FUN_001caf50(unaff_EDI + 0x3e);
  FUN_001e0dd0(unaff_EDI + 0x42);
  *(undefined1 *)(unaff_EDI + 0x46) = *(undefined1 *)(in_EAX + 0x46);
  *(undefined1 *)((int)unaff_EDI + 0x119) = *(undefined1 *)((int)in_EAX + 0x119);
  unaff_EDI[0x47] = in_EAX[0x47];
  unaff_EDI[0x48] = in_EAX[0x48];
  unaff_EDI[0x49] = in_EAX[0x49];
  return;
}
