/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E4685073A6654787CB4A066C311707974669C8552363C88E79B2110DB7B319E
 * Entry: 0x0033d8f9, Ghidra index: 12592, label: FUN_0033d8f9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b094a;
undefined4 FUN_0033d8f9(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(in_ECX + 0x14) == 1) {
    *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8) = 0;
    goto LAB_0033d99e;
  }
  iVar2 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x18));
  *(int *)(in_ECX + 0x2c) = iVar2;
  if ((iVar2 != 0) && (-1 < iVar2)) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    if (*(int *)(in_ECX + 0x14) == 7) {
      if (*(int *)(in_ECX + 0x28) == 1) {
        iVar3 = *(int *)(in_ECX + 0x10) + 0x880;
        *(int *)(in_ECX + 0x18) = iVar3;
        iVar3 = FUN_0033d796(*(int *)(in_ECX + 0x10),iVar3,*(undefined4 *)(in_ECX + 0x20));
        if (iVar3 < 0) goto LAB_0033d98c;
        *(undefined4 *)(in_ECX + 0x2c) = 0;
        *(undefined4 *)(in_ECX + 0x14) = 6;
      }
      else {
        FUN_0033cf8f(*(undefined4 *)(in_ECX + 0x20));
        FUN_0033d172(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
        *(undefined4 *)(in_ECX + 0x2c) = 0x1500f0;
LAB_0033d985:
        *(undefined4 *)(in_ECX + 0x14) = 1;
      }
LAB_0033d988:
      if (-1 < iVar3) goto LAB_0033d992;
    }
    else {
      if ((*(int *)(in_ECX + 0x14) != 6) ||
         (piVar1 = *(int **)(in_ECX + 0x10), *(short *)(&DAT_004b094a + *piVar1 * 10) == 0))
      goto LAB_0033d985;
      *(int **)(in_ECX + 0x18) = piVar1 + 0x220;
      iVar3 = FUN_0033d777(piVar1,piVar1 + 0x220,*(undefined4 *)(in_ECX + 0x20),
                           *(undefined4 *)(in_ECX + 0x24));
      if (-1 < iVar3) {
        *(undefined4 *)(in_ECX + 0x2c) = 0;
        *(undefined4 *)(in_ECX + 0x14) = 5;
        goto LAB_0033d988;
      }
    }
LAB_0033d98c:
    *(int *)(in_ECX + 0x2c) = iVar3;
    *(undefined4 *)(in_ECX + 0x14) = 1;
  }
LAB_0033d992:
  if (*(int *)(in_ECX + 0x14) == 1) {
    FUN_0033bcdc();
  }
LAB_0033d99e:
  return *(undefined4 *)(in_ECX + 0x2c);
}
