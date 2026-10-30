/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D04930B88F289F3247AE4BEDFCC43F387B37755130F82A07D2A3FE9C05200980
 * Entry: 0x00281970, Ghidra index: 9051, label: FUN_00281970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00281970(void)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  int in_EAX;
  int *piVar4;
  ushort uVar5;
  
  piVar1 = (int *)(in_EAX + 0x280c);
  piVar4 = (int *)(in_EAX + 0x2820);
  if (*piVar1 <= *(int *)(in_EAX + 0x2820)) {
    piVar4 = piVar1;
  }
  iVar3 = *piVar4;
  *piVar1 = iVar3;
  if (iVar3 < 2) {
    uVar5 = *(ushort *)(in_EAX + 4 + *(int *)(in_EAX + 0x2804) * 2);
    *(undefined4 *)(in_EAX + 0x282c) = 1;
  }
  else {
    *(int *)(in_EAX + 0x282c) = iVar3;
    uVar5 = (*(short *)piVar1 + -2) * 0x200 | *(ushort *)(in_EAX + 0x2808);
  }
  *(int *)(in_EAX + 0x2834) = *(int *)(in_EAX + 0x2834) + *(int *)(in_EAX + 0x282c);
  *(int *)(in_EAX + 0x283c) = *(int *)(in_EAX + 0x283c) + *(int *)(in_EAX + 0x282c);
  if (*(int *)(in_EAX + 0x2818) == 0x10) {
    puVar2 = (undefined2 *)(in_EAX + 0x404 + *(int *)(in_EAX + 0x2830) * 2);
    *(int *)(in_EAX + 0x2830) = *(int *)(in_EAX + 0x2830) + 1;
    *(undefined2 **)(in_EAX + 0x2828) = puVar2;
    *(undefined4 *)(in_EAX + 0x2818) = 0;
    *puVar2 = 0;
  }
  if (1 < iVar3) {
    **(ushort **)(in_EAX + 0x2828) =
         **(ushort **)(in_EAX + 0x2828) |
         (ushort)(1 << ((byte)*(undefined4 *)(in_EAX + 0x2818) & 0x1f));
  }
  *(int *)(in_EAX + 0x2818) = *(int *)(in_EAX + 0x2818) + 1;
  *(ushort *)(in_EAX + 0x404 + *(int *)(in_EAX + 0x2830) * 2) = uVar5;
  *(int *)(in_EAX + 0x2830) = *(int *)(in_EAX + 0x2830) + 1;
  *(undefined4 *)(in_EAX + 0x2810) = 2;
  return;
}
