/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95DA056684198D392D2D07A9C20D899D7EE895172A80CA2AB7874626073137AA
 * Entry: 0x00223050, Ghidra index: 7599, label: FUN_00223050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00223050(int param_1)

{
  int in_ECX;
  undefined1 local_60 [96];
  
  if ((*(int *)(param_1 + 0x14) == 1) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_00222f60();
    FUN_00222e50();
    (*(code *)**(undefined4 **)(in_ECX + -0x28))(local_60);
    return 1;
  }
  return 0;
}
