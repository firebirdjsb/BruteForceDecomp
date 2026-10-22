/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D0B5B5B8692D8501D44A7F95C80272E6331AF273CCDF095962FCF6335D6D14A
 * Entry: 0x00222310, Ghidra index: 7579, label: FUN_00222310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00222310(void)

{
  int *in_EAX;
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_4;
  
  piVar1 = (int *)0x0;
  if (*(undefined4 **)(in_EDX + 0x1bc) != (undefined4 *)0x0) {
    piVar1 = (int *)**(undefined4 **)(in_EDX + 0x1bc);
  }
  if (piVar1 != *(int **)(in_EDX + 0x1bc)) {
    do {
      if (piVar1[2] == *in_EAX) {
        piVar1[6] = piVar1[6] + 1;
        return;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != *(int **)(in_EDX + 0x1bc));
  }
  local_20 = *in_EAX;
  local_c = *(undefined4 *)(in_EDX + 0x1b4);
  local_4 = 0;
  local_14 = *(undefined4 *)(local_20 + 0x40);
  local_18 = *(undefined4 *)(local_20 + 0x3c);
  local_1c = *(undefined4 *)(local_20 + 0x38);
  local_10 = 1;
  iVar2 = local_20;
  if (*(int *)(local_20 + 0x10) != 0) {
    iVar2 = *(int *)(local_20 + 8);
  }
  if (*(int *)(iVar2 + 0x5c) != 0) {
    FUN_0008f6a0(*(int *)(iVar2 + 0x5c));
  }
  iVar2 = *(int *)(in_EDX + 0x1bc);
  iVar3 = FUN_00222710(in_EDX + 0x1b8,iVar2,*(undefined4 *)(iVar2 + 4),&local_20);
  FUN_00222790();
  *(int *)(iVar2 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  if (local_4 != 0) {
    FUN_0008f6e0();
  }
  return;
}
