/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63427CBFA74382D9314AE9F69090E0A5A2164107EAEB3184A265001D8966EC72
 * Entry: 0x003811c3, Ghidra index: 13557, label: FUN_003811c3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003811c3(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *in_ECX;
  
  iVar1 = *(int *)(in_ECX + 8);
  in_ECX[8] = '\0';
  in_ECX[9] = '\0';
  in_ECX[10] = '\0';
  in_ECX[0xb] = '\0';
  if (*in_ECX == '\x05') {
    FUN_00380f6c();
    iVar2 = FUN_00380f83();
    while (iVar2 != 0) {
      if (*(int *)(iVar2 + 8) == iVar1) {
        *(undefined4 *)(param_1 + 4) = 0;
        FUN_00380eda(param_1);
        return 0;
      }
      iVar2 = FUN_00380f9a();
    }
    iVar2 = FUN_00380f6c();
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 1) = 0x43;
  *(int *)(param_1 + 0x10) = iVar1;
  uVar3 = FUN_00383a75(*(int *)(in_ECX + 0xc) + 0x18,param_1);
  return uVar3;
}
