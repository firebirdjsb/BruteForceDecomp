/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44C975F70AF17C75043C545ED473137ABA2D5AD5AAF6A8A3D4B3A546C4506114
 * Entry: 0x002241d0, Ghidra index: 7614, label: FUN_002241d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039485c;
void FUN_002241d0(void)

{
  int *piVar1;
  undefined4 in_EAX;
  int *piVar2;
  int iVar3;
  undefined4 *in_EDX;
  undefined4 *puVar4;
  
  in_EDX[1] = in_EAX;
  *in_EDX = PTR_LAB_0039485c;
  puVar4 = in_EDX + 2;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0x3f800000;
    puVar4 = puVar4 + 1;
  }
  piVar1 = *(int **)(in_EDX[1] + 0x34);
  for (piVar2 = *(int **)(in_EDX[1] + 0x30); piVar2 != piVar1; piVar2 = piVar2 + 2) {
    in_EDX[*piVar2 + 2] = piVar2[1];
  }
  return;
}
