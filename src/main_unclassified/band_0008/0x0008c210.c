/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD3F4598FF7763074F130C1CC066162874F55C2FA6FE7EE0D50081B7F3ABD449
 * Entry: 0x0008c210, Ghidra index: 1697, label: FUN_0008c210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003f7e3c;
void FUN_0008c210(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int *piVar3;
  int *in_ECX;
  int in_EDX;
  int *piVar4;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 0x4c))();
  iVar1 = piVar2[1];
  piVar3 = *(int **)(in_EDX + 0x74);
  *(float *)(in_EDX + 0x1c) = (float)*piVar2;
  *(float *)(in_EDX + 0x20) = (float)iVar1;
  if (piVar3 != *(int **)(in_EDX + 0x78)) {
    while (piVar2 = (int *)*piVar3, piVar2[9] != -0xe559b77) {
      piVar3 = piVar3 + 1;
      if (piVar3 == *(int **)(in_EDX + 0x78)) {
        return;
      }
    }
    if (piVar2 != (int *)0x0) {
      if ((in_EAX < 0) || (piVar3 = &DAT_003f7e3c + in_EAX * 2, 6 < in_EAX)) {
        piVar3 = &DAT_003f7e3c;
      }
      if ((in_EAX < 0) || (piVar4 = (int *)(in_EAX * 8 + 0x3f7e74), 6 < in_EAX)) {
        piVar4 = &DAT_003f7e3c;
      }
      iVar1 = piVar3[1];
      piVar2[3] = (int)(float)*piVar3;
      piVar2[4] = (int)(float)iVar1;
      (**(code **)(*piVar2 + 0x1c))();
      iVar1 = piVar4[1];
      piVar2[0x20] = (int)(float)*piVar4;
      piVar2[0x21] = (int)(float)iVar1;
    }
  }
  return;
}
