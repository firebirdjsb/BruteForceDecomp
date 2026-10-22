/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B08969423A19051CF4DF6E720390D666364A068935A889DDE5652907895FC55
 * Entry: 0x00100210, Ghidra index: 3214, label: FUN_00100210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00100210(void)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(in_EAX + 0x78);
  piVar4 = *(int **)(in_EAX + 0x74);
  while( true ) {
    if (piVar4 == piVar1) {
      return (int *)0x0;
    }
    piVar2 = (int *)*piVar4;
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 4))(), iVar3 == 0xb)) break;
    piVar4 = piVar4 + 1;
  }
  return piVar2;
}
