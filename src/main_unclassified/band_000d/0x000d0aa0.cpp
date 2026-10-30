/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5097BA93DF9FF4C193C8B0837845EB3F16725081BBF7CCDBEFAA59B029332DF2
 * Entry: 0x000d0aa0, Ghidra index: 2580, label: FUN_000d0aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_002ea01d(uint32_t guest_size);

void FUN_000d0aa0(ushort param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  bool bVar5;
  
  iVar4 = *(int *)(unaff_EDI + 0x20);
  if (iVar4 == 0) {
    iVar4 = FUN_002ea01d(0xc);
    if (iVar4 == 0) {
      iVar4 = 0;
      bVar5 = true;
    }
    else {
      *(undefined4 *)(iVar4 + 8) = 0;
      bVar5 = true;
    }
  }
  else {
    piVar1 = *(int **)(unaff_EDI + 0x20);
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    if (piVar2 == (int *)0x0) {
      *(int *)(unaff_EDI + 0x20) = iVar3;
    }
    else {
      *piVar2 = iVar3;
    }
    if (iVar3 == 0) {
      *(int **)(unaff_EDI + 0x24) = piVar2;
    }
    else {
      *(int **)(iVar3 + 4) = piVar2;
    }
    piVar1[1] = 0;
    *piVar1 = 0;
    bVar5 = (*(uint *)(iVar4 + 8) & 0x80000000) != 0;
  }
  *(uint *)(iVar4 + 8) = (uint)param_1;
  if (bVar5) {
    *(uint *)(iVar4 + 8) = param_1 | 0x80000000;
  }
  return;
}
