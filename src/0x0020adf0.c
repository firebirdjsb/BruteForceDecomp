/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6952A0C94AEA8DA6B5A85BD5B8CACEEB5FF6D23092C114F33567C73570FB0476
 * Entry: 0x0020adf0, Ghidra index: 7333, label: FUN_0020adf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020adf0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(undefined4 **)(in_ECX + 0x7c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x7c))(1);
    *(undefined4 *)(in_ECX + 0x7c) = 0;
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    iVar1 = FUN_002ea01d(0x38);
    if (iVar1 != 0) {
      uVar2 = FUN_002241d0();
      *(undefined4 *)(in_ECX + 0x7c) = uVar2;
      FUN_001febb0();
      return;
    }
    *(undefined4 *)(in_ECX + 0x7c) = 0;
  }
  FUN_001febb0();
  return;
}
