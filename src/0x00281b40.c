/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 629D6DD17DDD3983F8533A62E4A6A0C5C4149A0BCACE7202380A92FABAF348A2
 * Entry: 0x00281b40, Ghidra index: 9053, label: FUN_00281b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00281b40(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  undefined2 *in_EDX;
  int iVar2;
  
  iVar2 = in_EAX >> 1;
  while (iVar2 != 0) {
    if (0x1000 < *(int *)(in_ECX + 0x2830)) {
      FUN_002818d0();
    }
    if (*(int *)(in_ECX + 0x2810) == 0) {
      *(undefined2 *)(in_ECX + 6 + *(int *)(in_ECX + 0x2820) * 2) = *in_EDX;
      in_EDX = in_EDX + 1;
      iVar1 = *(int *)(in_ECX + 0x2820) + 1;
      iVar2 = iVar2 + -1;
      *(int *)(in_ECX + 0x2820) = iVar1;
      *(int *)(in_ECX + 0x2838) = *(int *)(in_ECX + 0x2838) + 1;
      if (iVar1 == 0x81) {
        FUN_00281970();
      }
    }
    else if (*(int *)(in_ECX + 0x2810) == 2) {
      iVar1 = FUN_00281a70();
      if (*(int *)(in_ECX + 0x2810) == 1) {
        FUN_00281970();
      }
      iVar2 = iVar2 - iVar1;
      in_EDX = in_EDX + iVar1;
    }
  }
  return 0;
}
