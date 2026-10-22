/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF8526D76222D319D1FD6D24BBDFC2AE120A7F982BC294D956AB49F94829F826
 * Entry: 0x0013fab0, Ghidra index: 4066, label: FUN_0013fab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013fab0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int extraout_EDX;
  undefined4 uVar4;
  int local_8;
  byte local_4;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  if ((iVar1 != 0) && (((*(byte *)(iVar1 + 0x70) & 1) == 0 || (*(char *)(in_ECX + 0x28) != '\0'))))
  {
    cVar2 = FUN_00126810();
    if ((cVar2 == '\0') || (*(int *)(iVar1 + 0x81c) <= *(int *)(param_1 + 8))) {
      FUN_001412c0(*(undefined4 *)(*(int *)(extraout_EDX + 0x20) + 0x60),
                   *(undefined4 *)(*(int *)(extraout_EDX + 0x20) + 0x5c),
                   *(undefined4 *)(extraout_EDX + 0x24));
      if ((*(byte *)(iVar1 + 0x26) & 8) != 0) {
        *(undefined4 *)(iVar1 + 0x81c) = *(undefined4 *)(param_1 + 8);
        if (*(int *)(iVar1 + 0x5b8) != 0) {
          FUN_001435d0(extraout_EDX + 0x24,iVar1,0);
          return 0;
        }
        local_4 = local_4 & 0xfc;
        uVar4 = 0;
        local_8 = iVar1;
        iVar3 = FUN_0017beb0(extraout_EDX + 0x24);
        if (iVar3 != 0) {
          uVar4 = FUN_00178e50(&local_8);
        }
        *(undefined4 *)(iVar1 + 0x820) = uVar4;
      }
      return 0;
    }
  }
  return 1;
}
