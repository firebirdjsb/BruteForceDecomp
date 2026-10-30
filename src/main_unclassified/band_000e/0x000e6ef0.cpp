/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA63DBA1C7493CD41E4FADF309D8E06C2E9CBC2F09B608602ACBF183B1F2AFA9
 * Entry: 0x000e6ef0, Ghidra index: 2867, label: FUN_000e6ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e6ef0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_EAX;
  undefined4 uVar6;
  byte *unaff_ESI;
  
  *unaff_ESI = *unaff_ESI & 0xf8;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x20] = 0;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x24] = 0;
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  unaff_ESI[0x28] = 0;
  unaff_ESI[0x29] = 0;
  unaff_ESI[0x2a] = 0;
  unaff_ESI[0x2b] = 0;
  unaff_ESI[0x2c] = 0;
  unaff_ESI[0x2d] = 0;
  unaff_ESI[0x2e] = 0;
  unaff_ESI[0x2f] = 0;
  unaff_ESI[0x3c] = 0;
  unaff_ESI[0x3d] = 0;
  unaff_ESI[0x3e] = 0;
  unaff_ESI[0x3f] = 0;
  unaff_ESI[0x38] = 0;
  unaff_ESI[0x39] = 0;
  unaff_ESI[0x3a] = 0;
  unaff_ESI[0x3b] = 0;
  unaff_ESI[0x34] = 0;
  unaff_ESI[0x35] = 0;
  unaff_ESI[0x36] = 0;
  unaff_ESI[0x37] = 0;
  unaff_ESI[0x30] = 0;
  unaff_ESI[0x31] = 0;
  unaff_ESI[0x32] = 0;
  unaff_ESI[0x33] = 0;
  unaff_ESI[0x174] = 0;
  unaff_ESI[0x175] = 0;
  unaff_ESI[0x176] = 0;
  unaff_ESI[0x177] = 0;
  unaff_ESI[0x178] = 0;
  unaff_ESI[0x179] = 0;
  unaff_ESI[0x17a] = 0;
  unaff_ESI[0x17b] = 0;
  unaff_ESI[0x17c] = 0;
  unaff_ESI[0x17d] = 0;
  unaff_ESI[0x17e] = 0;
  unaff_ESI[0x17f] = 0;
  unaff_ESI[0x180] = 0;
  unaff_ESI[0x181] = 0;
  unaff_ESI[0x182] = 0;
  unaff_ESI[0x183] = 0;
  unaff_ESI[0x188] = 0;
  unaff_ESI[0x189] = 0;
  unaff_ESI[0x18a] = 0;
  unaff_ESI[0x18b] = 0;
  unaff_ESI[0x98c] = 0;
  unaff_ESI[0x98d] = 0;
  unaff_ESI[0x98e] = 0;
  unaff_ESI[0x98f] = 0;
  *(int *)(unaff_ESI + 0x80) = in_EAX;
  *(undefined4 *)(unaff_ESI + 0x8c) = param_1;
  unaff_ESI[0x84] = 0x94;
  unaff_ESI[0x88] = 0;
  unaff_ESI[0x89] = 0;
  unaff_ESI[0x8a] = 0;
  unaff_ESI[0x8b] = 0;
  unaff_ESI[0x85] = unaff_ESI[0x85] | 1;
  unaff_ESI[0x90] = 0;
  unaff_ESI[0x91] = 0;
  unaff_ESI[0x92] = 0x80;
  unaff_ESI[0x93] = 0x3f;
  uVar6 = *(undefined4 *)(in_EAX + 0xab4);
  uVar1 = *(undefined4 *)(in_EAX + 0xab0);
  uVar2 = *(undefined4 *)(in_EAX + 0xaac);
  *(undefined4 *)(unaff_ESI + 0x94) = *(undefined4 *)(in_EAX + 0xaa8);
  *(undefined4 *)(unaff_ESI + 0x98) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x9c) = uVar1;
  *(undefined4 *)(unaff_ESI + 0xa0) = uVar6;
  iVar3 = *(int *)(unaff_ESI + 0x80);
  uVar6 = *(undefined4 *)(iVar3 + 0xac4);
  uVar1 = *(undefined4 *)(iVar3 + 0xac0);
  uVar2 = *(undefined4 *)(iVar3 + 0xab8);
  *(undefined4 *)(unaff_ESI + 0xa8) = *(undefined4 *)(iVar3 + 0xabc);
  *(undefined4 *)(unaff_ESI + 0xa4) = uVar2;
  *(undefined4 *)(unaff_ESI + 0xac) = uVar1;
  *(undefined4 *)(unaff_ESI + 0xb0) = uVar6;
  iVar3 = *(int *)(unaff_ESI + 0x80);
  uVar6 = *(undefined4 *)(iVar3 + 0xb9c);
  uVar1 = *(undefined4 *)(iVar3 + 0xb98);
  *(undefined4 *)(unaff_ESI + 0xb4) = *(undefined4 *)(iVar3 + 0xb94);
  *(undefined4 *)(unaff_ESI + 0xb8) = uVar1;
  *(undefined4 *)(unaff_ESI + 0xbc) = uVar6;
  iVar3 = *(int *)(unaff_ESI + 0x80);
  uVar6 = *(undefined4 *)(iVar3 + 0xb90);
  uVar1 = *(undefined4 *)(iVar3 + 0xb8c);
  uVar2 = *(undefined4 *)(iVar3 + 0xb84);
  *(undefined4 *)(unaff_ESI + 0xc4) = *(undefined4 *)(iVar3 + 0xb88);
  *(undefined4 *)(unaff_ESI + 0xc0) = uVar2;
  *(undefined4 *)(unaff_ESI + 200) = uVar1;
  *(undefined4 *)(unaff_ESI + 0xcc) = uVar6;
  iVar3 = *(int *)(unaff_ESI + 0x80);
  uVar6 = *(undefined4 *)(iVar3 + 3000);
  uVar1 = *(undefined4 *)(iVar3 + 0xbb4);
  *(undefined4 *)(unaff_ESI + 0xd0) = *(undefined4 *)(iVar3 + 0xbb0);
  *(undefined4 *)(unaff_ESI + 0xd4) = uVar1;
  *(undefined4 *)(unaff_ESI + 0xd8) = uVar6;
  iVar3 = *(int *)(unaff_ESI + 0x80);
  uVar6 = *(undefined4 *)(iVar3 + 0xbac);
  uVar1 = *(undefined4 *)(iVar3 + 0xba8);
  uVar2 = *(undefined4 *)(iVar3 + 0xba0);
  *(undefined4 *)(unaff_ESI + 0xe0) = *(undefined4 *)(iVar3 + 0xba4);
  *(undefined4 *)(unaff_ESI + 0xdc) = uVar2;
  *(undefined4 *)(unaff_ESI + 0xe4) = uVar1;
  *(undefined4 *)(unaff_ESI + 0xe8) = uVar6;
  unaff_ESI[0x124] = 0;
  unaff_ESI[0x125] = 0;
  unaff_ESI[0x126] = 0;
  unaff_ESI[0x127] = 0;
  unaff_ESI[0x120] = 0;
  unaff_ESI[0x121] = 0;
  unaff_ESI[0x122] = 0;
  unaff_ESI[0x123] = 0;
  unaff_ESI[0x11c] = 0;
  unaff_ESI[0x11d] = 0;
  unaff_ESI[0x11e] = 0;
  unaff_ESI[0x11f] = 0;
  unaff_ESI[0x118] = 0;
  unaff_ESI[0x119] = 0;
  unaff_ESI[0x11a] = 0;
  unaff_ESI[0x11b] = 0;
  unaff_ESI[0x110] = 0;
  unaff_ESI[0x111] = 0;
  unaff_ESI[0x112] = 0;
  unaff_ESI[0x113] = 0;
  unaff_ESI[0x10c] = 0;
  unaff_ESI[0x10d] = 0;
  unaff_ESI[0x10e] = 0;
  unaff_ESI[0x10f] = 0;
  unaff_ESI[0x108] = 0;
  unaff_ESI[0x109] = 0;
  unaff_ESI[0x10a] = 0;
  unaff_ESI[0x10b] = 0;
  unaff_ESI[0x104] = 0;
  unaff_ESI[0x105] = 0;
  unaff_ESI[0x106] = 0;
  unaff_ESI[0x107] = 0;
  unaff_ESI[0xfc] = 0;
  unaff_ESI[0xfd] = 0;
  unaff_ESI[0xfe] = 0;
  unaff_ESI[0xff] = 0;
  unaff_ESI[0xf8] = 0;
  unaff_ESI[0xf9] = 0;
  unaff_ESI[0xfa] = 0;
  unaff_ESI[0xfb] = 0;
  unaff_ESI[0xf4] = 0;
  unaff_ESI[0xf5] = 0;
  unaff_ESI[0xf6] = 0;
  unaff_ESI[0xf7] = 0;
  unaff_ESI[0xf0] = 0;
  unaff_ESI[0xf1] = 0;
  unaff_ESI[0xf2] = 0;
  unaff_ESI[0xf3] = 0;
  unaff_ESI[0x128] = 0;
  unaff_ESI[0x129] = 0;
  unaff_ESI[0x12a] = 0x80;
  unaff_ESI[299] = 0x3f;
  unaff_ESI[0x114] = 0;
  unaff_ESI[0x115] = 0;
  unaff_ESI[0x116] = 0x80;
  unaff_ESI[0x117] = 0x3f;
  unaff_ESI[0x100] = 0;
  unaff_ESI[0x101] = 0;
  unaff_ESI[0x102] = 0x80;
  unaff_ESI[0x103] = 0x3f;
  unaff_ESI[0xec] = 0;
  unaff_ESI[0xed] = 0;
  unaff_ESI[0xee] = 0x80;
  unaff_ESI[0xef] = 0x3f;
  if (1.1920929e-07 <
      -*(float *)(unaff_ESI + 0xb4) * -*(float *)(unaff_ESI + 0xb4) +
      -*(float *)(unaff_ESI + 0xb8) * -*(float *)(unaff_ESI + 0xb8) +
      -*(float *)(unaff_ESI + 0xbc) * -*(float *)(unaff_ESI + 0xbc)) {
    FUN_000e73d0();
  }
  unaff_ESI[0x164] = 0;
  unaff_ESI[0x165] = 0;
  unaff_ESI[0x166] = 0;
  unaff_ESI[0x167] = 0;
  unaff_ESI[0x160] = 0;
  unaff_ESI[0x161] = 0;
  unaff_ESI[0x162] = 0;
  unaff_ESI[0x163] = 0;
  unaff_ESI[0x15c] = 0;
  unaff_ESI[0x15d] = 0;
  unaff_ESI[0x15e] = 0;
  unaff_ESI[0x15f] = 0;
  unaff_ESI[0x158] = 0;
  unaff_ESI[0x159] = 0;
  unaff_ESI[0x15a] = 0;
  unaff_ESI[0x15b] = 0;
  unaff_ESI[0x150] = 0;
  unaff_ESI[0x151] = 0;
  unaff_ESI[0x152] = 0;
  unaff_ESI[0x153] = 0;
  unaff_ESI[0x14c] = 0;
  unaff_ESI[0x14d] = 0;
  unaff_ESI[0x14e] = 0;
  unaff_ESI[0x14f] = 0;
  unaff_ESI[0x148] = 0;
  unaff_ESI[0x149] = 0;
  unaff_ESI[0x14a] = 0;
  unaff_ESI[0x14b] = 0;
  unaff_ESI[0x144] = 0;
  unaff_ESI[0x145] = 0;
  unaff_ESI[0x146] = 0;
  unaff_ESI[0x147] = 0;
  unaff_ESI[0x13c] = 0;
  unaff_ESI[0x13d] = 0;
  unaff_ESI[0x13e] = 0;
  unaff_ESI[0x13f] = 0;
  unaff_ESI[0x138] = 0;
  unaff_ESI[0x139] = 0;
  unaff_ESI[0x13a] = 0;
  unaff_ESI[0x13b] = 0;
  unaff_ESI[0x134] = 0;
  unaff_ESI[0x135] = 0;
  unaff_ESI[0x136] = 0;
  unaff_ESI[0x137] = 0;
  unaff_ESI[0x130] = 0;
  unaff_ESI[0x131] = 0;
  unaff_ESI[0x132] = 0;
  unaff_ESI[0x133] = 0;
  unaff_ESI[0x168] = 0;
  unaff_ESI[0x169] = 0;
  unaff_ESI[0x16a] = 0x80;
  unaff_ESI[0x16b] = 0x3f;
  unaff_ESI[0x154] = 0;
  unaff_ESI[0x155] = 0;
  unaff_ESI[0x156] = 0x80;
  unaff_ESI[0x157] = 0x3f;
  unaff_ESI[0x140] = 0;
  unaff_ESI[0x141] = 0;
  unaff_ESI[0x142] = 0x80;
  unaff_ESI[0x143] = 0x3f;
  unaff_ESI[300] = 0;
  unaff_ESI[0x12d] = 0;
  unaff_ESI[0x12e] = 0x80;
  unaff_ESI[0x12f] = 0x3f;
  if (1.1920929e-07 <
      -*(float *)(unaff_ESI + 0xd0) * -*(float *)(unaff_ESI + 0xd0) +
      -*(float *)(unaff_ESI + 0xd4) * -*(float *)(unaff_ESI + 0xd4) +
      -*(float *)(unaff_ESI + 0xd8) * -*(float *)(unaff_ESI + 0xd8)) {
    FUN_000e73d0();
  }
  iVar3 = *(int *)(unaff_ESI + 0x80);
  iVar4 = *(int *)(iVar3 + 0xbd4);
  if (iVar4 == 0) {
    uVar6 = 0xff000000;
  }
  else {
    uVar6 = *(undefined4 *)(iVar4 + 0xe68);
  }
  *(undefined4 *)(unaff_ESI + 0x16c) = uVar6;
  unaff_ESI[0x170] = 2;
  unaff_ESI[0x171] = 0x1b;
  unaff_ESI[0x172] = 0;
  unaff_ESI[0x173] = 0;
  piVar5 = *(int **)(unaff_ESI + 0x174);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
    unaff_ESI[0x174] = 0;
    unaff_ESI[0x175] = 0;
    unaff_ESI[0x176] = 0;
    unaff_ESI[0x177] = 0;
  }
  piVar5 = *(int **)(iVar3 + 0xc38);
  *(int **)(unaff_ESI + 0x174) = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  iVar3 = *(int *)(unaff_ESI + 0x80);
  piVar5 = *(int **)(unaff_ESI + 0x178);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
    unaff_ESI[0x178] = 0;
    unaff_ESI[0x179] = 0;
    unaff_ESI[0x17a] = 0;
    unaff_ESI[0x17b] = 0;
  }
  piVar5 = *(int **)(iVar3 + 0xc3c);
  *(int **)(unaff_ESI + 0x178) = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  iVar3 = *(int *)(unaff_ESI + 0x80);
  piVar5 = *(int **)(unaff_ESI + 0x17c);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
    unaff_ESI[0x17c] = 0;
    unaff_ESI[0x17d] = 0;
    unaff_ESI[0x17e] = 0;
    unaff_ESI[0x17f] = 0;
  }
  piVar5 = *(int **)(iVar3 + 0xc44);
  *(int **)(unaff_ESI + 0x17c) = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = *(int **)(unaff_ESI + 0x180);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
    unaff_ESI[0x180] = 0;
    unaff_ESI[0x181] = 0;
    unaff_ESI[0x182] = 0;
    unaff_ESI[0x183] = 0;
  }
  unaff_ESI[0x184] = 0;
  unaff_ESI[0x185] = 0;
  unaff_ESI[0x186] = 0;
  unaff_ESI[0x187] = 0;
  if (*(int *)(*(int *)(unaff_ESI + 0x80) + 0xa40) != 0) {
    FUN_000cf110(*(int *)(*(int *)(unaff_ESI + 0x80) + 0xa40),param_1,1);
  }
  unaff_ESI[0x990] = 0;
  unaff_ESI[0x991] = 0;
  unaff_ESI[0x992] = 0;
  unaff_ESI[0x993] = 0;
  unaff_ESI[0x994] = 0;
  unaff_ESI[0x995] = 0;
  unaff_ESI[0x996] = 0x80;
  unaff_ESI[0x997] = 0x3f;
  unaff_ESI[0x998] = 2;
  unaff_ESI[0x999] = 0;
  unaff_ESI[0x99a] = 0;
  unaff_ESI[0x99b] = 0;
  return;
}
