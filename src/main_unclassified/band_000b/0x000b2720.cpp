/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA3DDCED915EA15A204A7C6FE7DEA4FA42C8AE94D13822E936DF2CCEA6F3D637
 * Entry: 0x000b2720, Ghidra index: 2149, label: FUN_000b2720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_000ba3b0(void);

void FUN_000b2720(void)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  if (*(undefined4 **)(in_ECX + 0x18) == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)**(undefined4 **)(in_ECX + 0x18);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  for (; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
    piVar2 = (int *)puVar4[2];
    if (((*(byte *)((int)piVar2 + 0x13) & 1) == 0) && (cVar3 = FUN_000ba3b0(), cVar3 == '\0')) {
      (**(code **)(*piVar2 + 0x18))();
    }
  }
  return;
}
