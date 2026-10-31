/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A322E23ED37436EFC0A98CD0575E9CB6B7B663517EA99082E2E92E7738412573
 * Entry: 0x00302460, Ghidra index: 11079, label: FUN_00302460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callee draft declaration only; original Xbox ABI_UNVERIFIED. */
extern void FUN_00302430(void);
void FUN_00302460(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  iVar2 = *(ushort *)(in_EAX + 0x1e) - 1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)(in_EAX + 0x20) + iVar2 * 4);
    do {
      if (*piVar3 == unaff_EDI) goto LAB_00302482;
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar2);
  }
  iVar2 = -1;
LAB_00302482:
  uVar1 = *(ushort *)(in_EAX + 0x1e) - 1;
  *(ushort *)(in_EAX + 0x1e) = uVar1;
  if (iVar2 < (int)(uint)uVar1) {
    do {
      *(undefined4 *)(*(int *)(in_EAX + 0x20) + iVar2 * 4) =
           *(undefined4 *)(*(int *)(in_EAX + 0x20) + 4 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(in_EAX + 0x1e));
  }
  if (*(short *)(in_EAX + 0x1e) != 0) {
    FUN_00302430();
  }
  return;
}
