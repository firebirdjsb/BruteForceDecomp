/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7440093AFBA1EAB207FAEFB0882D274431A74FD74AC3F8F5B5482A52FB98E770
 * Entry: 0x000c5e20, Ghidra index: 2432, label: FUN_000c5e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 declaration; Xbox register/stack ABI_UNVERIFIED. */
extern ulonglong FUN_002ebf10(void);
void FUN_000c5e20(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_ESI;
  uint uVar5;
  
  iVar3 = *(int *)(*(int *)(unaff_ESI + 0x68) + 0xa8);
  if (iVar3 != 0) {
    (**(code **)(**(int **)(iVar3 + 0x5a4) + 0xf8))(*(undefined4 *)(unaff_ESI + 0x7c));
  }
  uVar5 = *(int *)(unaff_ESI + 0x6c) - *(int *)(unaff_ESI + 0x74);
  uVar4 = *(int *)(unaff_ESI + 0x70) - *(int *)(unaff_ESI + 0x78);
  if ((uVar5 == 0) && (uVar4 == 0)) {
    return;
  }
  if (*(char *)(unaff_ESI + 100) == '\0') {
    iVar3 = *(int *)(unaff_ESI + 0x70);
    *(undefined4 *)(unaff_ESI + 0x74) = *(undefined4 *)(unaff_ESI + 0x6c);
  }
  else {
    uVar1 = FUN_002ebf10();
    uVar2 = FUN_002ebf10();
    if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
        (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
      uVar1 = uVar5;
    }
    if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <
        (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
      uVar2 = uVar4;
    }
    *(uint *)(unaff_ESI + 0x74) = *(int *)(unaff_ESI + 0x74) + uVar1;
    iVar3 = *(int *)(unaff_ESI + 0x78) + uVar2;
  }
  *(int *)(unaff_ESI + 0x78) = iVar3;
  *(undefined2 *)(unaff_ESI + 4) = *(undefined2 *)(unaff_ESI + 0x74);
  *(short *)(unaff_ESI + 6) = (short)iVar3;
  return;
}
