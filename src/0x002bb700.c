/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DA4DA0DEF39C0A64FE146CC056350F634DAC43EEC78E1D7DE49FA66ACA9B6B0
 * Entry: 0x002bb700, Ghidra index: 9906, label: FUN_002bb700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bb700(undefined4 param_1,uint *param_2,uint *param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  uint *unaff_ESI;
  
  FUN_002bb6a0();
  unaff_ESI[0x53] = 0;
  *(undefined2 *)(unaff_ESI + 0x58) = 0;
  *(undefined2 *)((int)unaff_ESI + 0x162) = 0;
  *(undefined2 *)(unaff_ESI + 0x5a) = 1;
  unaff_ESI[0x59] = 0;
  puVar4 = unaff_ESI + 0x6d;
  iVar5 = 2;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_002bb590(unaff_ESI,param_1);
  *unaff_ESI = *unaff_ESI ^ (param_4 * 4 ^ *unaff_ESI) & 0xc;
  pcVar3 = (char *)unaff_ESI[0x5c];
  if (*pcVar3 < '\b') {
    piVar6 = (int *)(*(int *)(unaff_ESI[3] + 8) + 0x18);
  }
  else {
    piVar6 = (int *)(*(int *)(unaff_ESI[3] + 8) + 0x1a8);
  }
  iVar5 = *piVar6;
  *(int *)(pcVar3 + 8) = iVar5;
  if (iVar5 != 0) {
    *(char **)(iVar5 + 4) = pcVar3;
  }
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  *piVar6 = (int)pcVar3;
  puVar4 = unaff_ESI + 0x37;
  *puVar4 = *param_2;
  unaff_ESI[0x38] = param_2[1];
  unaff_ESI[0x39] = param_2[2];
  unaff_ESI[0x3a] = param_2[3];
  FUN_002b4570(puVar4);
  unaff_ESI[0x3b] = *puVar4;
  unaff_ESI[0x3c] = unaff_ESI[0x38];
  unaff_ESI[0x3d] = unaff_ESI[0x39];
  unaff_ESI[0x3e] = unaff_ESI[0x3a];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  unaff_ESI[0x2f] = *param_3;
  unaff_ESI[0x30] = uVar1;
  unaff_ESI[0x31] = uVar2;
  unaff_ESI[0x35] = 0;
  unaff_ESI[0x34] = 0;
  unaff_ESI[0x33] = 0;
  FUN_002b4100();
  uVar1 = param_3[2];
  uVar2 = *param_3;
  unaff_ESI[0x4c] = param_3[1];
  unaff_ESI[0x4b] = uVar2;
  unaff_ESI[0x4d] = uVar1;
  unaff_ESI[1] = 0x447a0000;
  unaff_ESI[2] = 0x447a0000;
  *unaff_ESI = *unaff_ESI ^ (*unaff_ESI ^ param_5) & 3;
  return;
}
