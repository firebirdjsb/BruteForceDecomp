/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49BB4787DB1F58390B15414D3519901F3F5A6B6EB1DFADBFE07E9B579A734CFC
 * Entry: 0x00164d90, Ghidra index: 4689, label: FUN_00164d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00164d90(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_EAX;
  int in_ECX;
  int iVar4;
  int in_EDX;
  
  while( true ) {
    iVar4 = in_EAX * 2 + 2;
    if (in_ECX <= iVar4) break;
    if (*(int *)(in_EDX + iVar4 * 0x18) < *(int *)(in_EDX + -0x18 + iVar4 * 0x18)) {
      iVar4 = in_EAX * 2 + 1;
    }
    iVar1 = in_EDX + iVar4 * 0x18;
    *(undefined4 *)(in_EDX + in_EAX * 0x18) = *(undefined4 *)(in_EDX + iVar4 * 0x18);
    iVar2 = in_EDX + in_EAX * 0x18;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
    in_EAX = iVar4;
  }
  if (iVar4 == in_ECX) {
    puVar3 = (undefined4 *)(in_EDX + in_EAX * 0x18);
    *puVar3 = *(undefined4 *)(in_EDX + -0x18 + in_ECX * 0x18);
    iVar4 = in_EDX + -0x18 + in_ECX * 0x18;
    puVar3[1] = *(undefined4 *)(in_EDX + -0x14 + in_ECX * 0x18);
    puVar3[2] = *(undefined4 *)(iVar4 + 8);
    puVar3[3] = *(undefined4 *)(iVar4 + 0xc);
    puVar3[4] = *(undefined4 *)(iVar4 + 0x10);
    puVar3[5] = *(undefined4 *)(iVar4 + 0x14);
  }
  FUN_001653b0(param_1);
  return;
}
