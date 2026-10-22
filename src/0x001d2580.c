/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE1D7CBC59F0F66B43EF5033037F2CAB8D11DADC685EA5BCF834060F5CC7D2FB
 * Entry: 0x001d2580, Ghidra index: 6298, label: FUN_001d2580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d2580(void)

{
  undefined4 *in_EAX;
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
  FUN_00154780();
  FUN_001d59e0();
  FUN_001d33c0();
  unaff_EDI[0x3a] = in_EAX[0x3a];
  unaff_EDI[0x3b] = in_EAX[0x3b];
  *(undefined1 *)(unaff_EDI + 0x3c) = *(undefined1 *)(in_EAX + 0x3c);
  *(undefined1 *)((int)unaff_EDI + 0xf1) = *(undefined1 *)((int)in_EAX + 0xf1);
  unaff_EDI[0x3d] = in_EAX[0x3d];
  FUN_001d3810();
  FUN_0010bc40();
  *(undefined1 *)(unaff_EDI + 0x46) = *(undefined1 *)(in_EAX + 0x46);
  *(undefined1 *)((int)unaff_EDI + 0x119) = *(undefined1 *)((int)in_EAX + 0x119);
  unaff_EDI[0x47] = in_EAX[0x47];
  unaff_EDI[0x48] = in_EAX[0x48];
  unaff_EDI[0x49] = in_EAX[0x49];
  return;
}
