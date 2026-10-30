/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73F764DCE7EA902AC1CB390D2FB2F7401E6394EA7E9870A17137166A70E11306
 * Entry: 0x00020ad0, Ghidra index: 181, label: FUN_00020ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_00126a40(void);
extern int FUN_00126b40(void);

undefined4 FUN_00020ad0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_EDX;
  
  if (*(int *)(in_EDX + 0x1f8) == 8) {
    return 4;
  }
  cVar1 = FUN_00126a40();
  if (cVar1 != '\0') {
    return 3;
  }
  cVar1 = FUN_00126b40();
  uVar2 = 2;
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  return uVar2;
}
