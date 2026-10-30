/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF573718C178AC58C88A5FAC6800D7FCD5C400E3BC44A0E92A9CADF4A3FD869E
 * Entry: 0x001365b0, Ghidra index: 3888, label: FUN_001365b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001365b0(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int in_stack_00000010;
  
  iVar1 = in_stack_00000010;
  if (*(int *)(in_stack_00000010 + 4) != 0) {
    FUN_0001d590();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  *(undefined4 *)(in_stack_00000010 + 4) = 0;
  *(undefined4 *)(in_stack_00000010 + 8) = 0;
  *(undefined4 *)(in_stack_00000010 + 0xc) = 0;
  FUN_00135b60();
  iVar2 = in_stack_00000010;
  iVar4 = *(int *)(iVar1 + 4);
  if (iVar4 != *(int *)(iVar1 + 8)) {
    do {
      cVar3 = (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x5a4) + 0x10))();
      if (cVar3 == '\0') {
        /* XBE LEA [ESP+0x30] at the call site addresses the incoming +0x10 stack word.
         * This C local is only a syntax stand-in; caller-frame ABI remains unverified. */
        FUN_00045180(&in_stack_00000010,iVar4 + 8);
        FUN_0001d590(iVar1,iVar2);
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -8;
      }
      else {
        iVar4 = iVar4 + 8;
      }
    } while (iVar4 != *(int *)(iVar1 + 8));
  }
  if (*(int *)(iVar1 + 4) != 0) {
    return *(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 3;
  }
  return 0;
}
