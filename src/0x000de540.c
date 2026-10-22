/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35A27BDB7CB04F39D08117717AA8E985FB48073672D749F999210ADB0DB166C4
 * Entry: 0x000de540, Ghidra index: 2714, label: FUN_000de540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000de540(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  
  puVar2 = (undefined4 *)0x0;
  if (*(undefined4 **)(in_ECX + 0xc28) != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0xc28);
  }
  while( true ) {
    if (puVar2 == *(undefined4 **)(in_ECX + 0xc28)) {
      iVar1 = *(int *)(in_ECX + 0xc28);
      iVar3 = FUN_000ff730(in_ECX + 0xc24,iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
      FUN_000b2a50();
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      return;
    }
    if ((puVar2[2] != 0) && (puVar2[2] == param_1)) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return;
}
