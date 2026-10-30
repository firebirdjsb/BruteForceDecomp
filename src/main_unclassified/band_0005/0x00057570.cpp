/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FE5DFD255025F48785C75AB261F8D18E5414376F3997905482F99BF8BD4EA2C
 * Entry: 0x00057570, Ghidra index: 850, label: FUN_00057570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_0005beb0(void);
extern char FUN_00057360(undefined4 param_1,int param_2,int *param_3);

void FUN_00057570(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 8);
  iVar2 = *(int *)(unaff_EBX + 0x10);
  if (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 3) {
    if ((((*(int *)(*(int *)(iVar2 + 0xc) + 4) == 3) && (*(int *)(iVar1 + 0x59c) != 0)) &&
        (*(int *)(iVar2 + 0x59c) != 0)) && (cVar3 = FUN_0005beb0(), cVar3 != '\0')) {
      *(byte *)(unaff_EBX + 0x14) = *(byte *)(unaff_EBX + 0x14) & 0xf9;
      return;
    }
    cVar3 = FUN_00057360(param_1,iVar1,iVar2);
    *(byte *)(unaff_EBX + 0x14) =
         *(byte *)(unaff_EBX + 0x14) ^ (cVar3 << 1 ^ *(byte *)(unaff_EBX + 0x14)) & 2;
  }
  if (*(int *)(*(int *)(iVar2 + 0xc) + 4) != 3) {
    return;
  }
  cVar3 = FUN_00057360(param_1,iVar2,iVar1);
  *(byte *)(unaff_EBX + 0x14) =
       *(byte *)(unaff_EBX + 0x14) ^ (cVar3 << 2 ^ *(byte *)(unaff_EBX + 0x14)) & 4;
  return;
}
