/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4922EF242F6F4CDC4C71BD915BB15A49F7FC3845DA6BB0420D82137D4E33178B
 * Entry: 0x000d1420, Ghidra index: 2597, label: FUN_000d1420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d1420(float param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined1 *in_EDX;
  
  *(undefined4 *)(in_EDX + 4) = in_ECX;
  uVar2 = in_EAX[2];
  uVar3 = in_EAX[1];
  *(undefined4 *)(in_EDX + 0xc) = *in_EAX;
  *(undefined4 *)(in_EDX + 0x10) = uVar3;
  *(undefined4 *)(in_EDX + 0x14) = uVar2;
  uVar2 = *(undefined4 *)(in_EDX + 0xc);
  piVar1 = (int *)(in_EDX + 0x2c);
  *(float *)(in_EDX + 0x18) = param_1;
  FUN_001f4740(*(undefined4 *)(in_EDX + 4),in_EDX + 0x1c,piVar1,uVar2,
               param_1 + *(float *)(in_EDX + 0x14));
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(in_EDX + 0x20);
  FUN_001f4740(*(undefined4 *)(in_EDX + 4),in_EDX + 0x1c,piVar1,uVar2,
               *(float *)(in_EDX + 0x14) - *(float *)(in_EDX + 0x18));
  *piVar1 = *piVar1 + -1;
  *(undefined4 *)(in_EDX + 0x28) = 0;
  *(undefined4 *)(in_EDX + 0x24) = 0;
  *in_EDX = 0;
  do {
    cVar4 = FUN_000d14d0();
    if (cVar4 == '\0') {
      return;
    }
  } while (*(int *)(in_EDX + 8) == 0);
  return;
}
