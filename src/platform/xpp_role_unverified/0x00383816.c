/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6FFED19924BC8358E1C72453ACB862B33A08AC3206893FD5F3BB0274F0D792E
 * Entry: 0x00383816, Ghidra index: 13623, label: FUN_00383816
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00383816(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int *piVar3;
  int *piVar4;
  int local_4;
  
  if (*(char *)(in_EDX + 0x26) != '\0') {
    cVar1 = *(char *)(in_EDX + 0x11);
    local_4 = in_ECX;
    if (cVar1 == '\0') {
      piVar3 = (int *)(in_ECX + 0x41c);
      piVar4 = (int *)(in_ECX + 0x420);
    }
    else if (cVar1 == '\x02') {
      piVar3 = (int *)(in_ECX + 0x424);
      piVar4 = (int *)(in_ECX + 0x428);
    }
    else {
      if (cVar1 != '\x03') {
        return;
      }
      piVar3 = (int *)(in_EDX + 0x28);
      piVar4 = (int *)(in_EDX + 0x2c);
    }
    do {
      iVar2 = *piVar3;
      if (*(int *)(iVar2 + 0x10) == in_EDX) {
        *piVar3 = *(int *)(iVar2 + 0x24);
        *(undefined4 *)(iVar2 + 4) = 0xc000000f;
        *(char *)(in_EDX + 0x26) = *(char *)(in_EDX + 0x26) + -1;
        FUN_00380eda(iVar2);
      }
      else {
        piVar3 = (int *)(iVar2 + 0x24);
        local_4 = iVar2;
      }
    } while (*piVar4 != iVar2);
    *piVar4 = local_4;
  }
  return;
}
