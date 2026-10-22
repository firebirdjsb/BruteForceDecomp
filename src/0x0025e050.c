/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 037E94A64F87041FAF43D6465FE7726C9911C91D1573FB7829964AE3FD3953EC
 * Entry: 0x0025e050, Ghidra index: 8586, label: FUN_0025e050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025e050(void)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int *in_EDX;
  int unaff_ESI;
  
  puVar1 = (uint *)(unaff_ESI + 0x20);
  *puVar1 = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *puVar1 = 1;
  if (*in_EDX != 0) {
    uVar4 = (*(int *)(unaff_ESI + 0x14) - in_EDX[2]) + *(int *)(unaff_ESI + 0x24) + *in_EDX;
    if ((*puVar1 & 0x70000) != 0x20000) {
      uVar4 = uVar4 & 0xfffffff;
    }
    *(uint *)(unaff_ESI + 0x24) = uVar4;
  }
  if (in_EDX[1] != 0) {
    uVar4 = *(uint *)(unaff_ESI + 4) & 0xffff;
    if ((uVar4 < 0x514) || (*(short *)(unaff_ESI + 6) == 0)) {
      *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 8) + in_EDX[1];
    }
    else {
      iVar3 = in_EDX[4];
      in_EDX[4] = iVar3 + 1;
      puVar1 = (uint *)(in_EDX[5] + iVar3 * 0x14);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0x20001;
      uVar2 = *(ushort *)(unaff_ESI + 6);
      puVar1[3] = (uint)uVar2;
      puVar1[4] = (uint)uVar2;
      *(uint *)(unaff_ESI + 4) = uVar4;
      uVar4 = puVar1[1] + in_EDX[1] + *(int *)(unaff_ESI + 8);
      if ((*puVar1 & 0x70000) != 0x20000) {
        uVar4 = uVar4 & 0xfffffff;
      }
      puVar1[1] = uVar4;
      *(uint **)(unaff_ESI + 0x2c) = puVar1;
      if ((in_EDX[3] == 0xffffffff) || (*(uint *)(unaff_ESI + 8) < (uint)in_EDX[3])) {
        in_EDX[3] = *(int *)(unaff_ESI + 8);
        return;
      }
    }
  }
  return;
}
