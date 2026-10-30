/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA1ADD743B8DFE3A66835DF34CFFD7E17F5AD253F5DA7475289CBE357C057480
 * Entry: 0x0006a610, Ghidra index: 1202, label: FUN_0006a610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_6a610_stack_contract.h"
/* XBE 0x0006A699 stores the immediate x86 word 0x003A3890.
 * This is not a read of, nor a numeric conversion of, a host C pointer. */
extern void FUN_00238740(void);
extern void FUN_00238910(undefined4 param_1);

undefined4 FUN_0006a610(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBX;
  int unaff_EDI;
  
  uVar4 = *(uint *)(unaff_EDI + 4);
  if ((*(byte *)(uVar4 + 0xc) & 1) != 0) {
    do {
      uVar3 = uVar4;
      uVar4 = *(uint *)(uVar3 + 8);
    } while ((*(byte *)(*(uint *)(uVar3 + 8) + 0xc) & 1) != 0);
    if (((*(uint *)(*(uint *)(unaff_EBX + 0x38) + 0x10) < uVar3) &&
        (uVar3 < *(uint *)(unaff_EBX + 0x38))) && (*(int *)(uVar3 + 0x10) == *param_1)) {
      *(uint *)(uVar3 + 0xc) = *(uint *)(uVar3 + 0xc) & 0xfffffffe;
      return 0;
    }
    FUN_00238740();
    uVar4 = *(uint *)(unaff_EDI + 4);
  }
  if (*(int *)(uVar4 + 0x10) != *param_1) {
    if (uVar4 < *(uint *)(unaff_EBX + 0x38)) {
      *(int *)(uVar4 + 0x10) = *param_1;
    }
    else {
      if (*(int *)(unaff_EBX + 0x58) != 0) {
        FUN_00238740();
      }
      iVar1 = *(int *)(unaff_EBX + 0x54);
      puVar5 = (undefined4 *)(iVar1 + -0x14);
      *(undefined4 **)(unaff_EBX + 0x54) = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        uVar2 = *(undefined4 *)(unaff_EDI + 4);
        *(int *)(iVar1 + -0x10) = unaff_EDI;
        *(undefined4 *)(iVar1 + -0xc) = uVar2;
        *(undefined4 *)(iVar1 + -8) = 0;
        *puVar5 = UINT32_C(0x003A3890);
        *(int *)(iVar1 + -4) = *param_1;
      }
      *(undefined4 **)(unaff_EDI + 4) = puVar5;
    }
    if (*(int *)(unaff_EDI + 0xc) != 0) {
      *(undefined4 *)(*(int *)(unaff_EDI + 0xc) + 8) = *(undefined4 *)(unaff_EDI + 4);
      return 0;
    }
    FUN_00238910(*(undefined4 *)(unaff_EDI + 4));
    *(undefined4 *)(unaff_EDI + 0xc) = *(undefined4 *)(unaff_EBX + 0x2c);
  }
  return 0;
}
