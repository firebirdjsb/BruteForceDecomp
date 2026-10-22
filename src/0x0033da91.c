/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95009AFEE6CD7ACA93262864C2885CA69C23B9657F5C3755F7A386648922B77D
 * Entry: 0x0033da91, Ghidra index: 12595, label: FUN_0033da91
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033da91(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x14) == 1) goto LAB_0033db96;
  FUN_0033c08e(&local_1c);
  iVar2 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x18));
  *(int *)(in_ECX + 0x2c) = iVar2;
  if (iVar2 != 0) {
    if (iVar2 < 0) {
      *(undefined4 *)(in_ECX + 0x14) = 1;
    }
    else {
      iVar2 = FUN_0033bcae(((local_c - local_14) + 1) * 0x200);
      if (iVar2 < 0) {
LAB_0033db83:
        *(int *)(in_ECX + 0x2c) = iVar2;
LAB_0033db86:
        *(undefined4 *)(in_ECX + 0x14) = 1;
      }
      else {
        *(undefined4 *)(in_ECX + 0x18) = 0;
        if (*(int *)(in_ECX + 0x14) == 2) {
          iVar2 = *(int *)(in_ECX + 0x10) + 0x84c;
          *(int *)(in_ECX + 0x18) = iVar2;
          iVar2 = FUN_0033d66a(&local_1c,in_ECX + 0x24,iVar2);
          if (iVar2 < 0) goto LAB_0033db83;
          *(undefined4 *)(in_ECX + 0x2c) = 0;
          *(undefined4 *)(in_ECX + 0x14) = 3;
        }
        else {
          iVar2 = *(int *)(in_ECX + 0x10);
          iVar1 = *(int *)(iVar2 + 0x82c);
          if ((uint)(*(int *)(iVar2 + 0x834) - iVar1) < 4) goto LAB_0033db86;
          *(int *)(iVar2 + 0x82c) = iVar1 + 4;
          *(undefined4 *)(iVar2 + 0x830) = 0;
          iVar2 = *(int *)(in_ECX + 0x10);
          FUN_0033c08e(&local_1c);
          *(int *)(in_ECX + 0x18) = iVar2 + 0x84c;
          iVar2 = FUN_0033d9e8(&local_1c);
          if (iVar2 < 0) goto LAB_0033db83;
          *(undefined4 *)(in_ECX + 0x2c) = 0;
        }
      }
    }
  }
  if (*(int *)(in_ECX + 0x14) == 1) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
LAB_0033db96:
  return *(undefined4 *)(in_ECX + 0x2c);
}
