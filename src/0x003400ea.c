/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBDE8A40E65CC00827854C1477ACEEE66D114C707C73B66AA83E25AF0A1FBA87
 * Entry: 0x003400ea, Ghidra index: 12664, label: FUN_003400ea
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003400ea(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 **local_8;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = puVar3 + 4;
  if (*(undefined4 **)(param_1 + 4) < puVar3 + 4) {
    *(undefined4 **)(param_1 + 8) = puVar3;
    puVar3 = (undefined4 *)0x0;
  }
  if (puVar3 != (undefined4 *)0x0) {
    local_8 = (undefined4 **)0x0;
    if (param_2 == 0) {
      local_c = 0;
    }
    else {
      local_8 = &local_1c;
      local_1c = &local_14;
      local_c = 0x10080;
      local_18 = 0xd;
      local_14 = 0;
      local_10 = 0xe;
    }
    iVar1 = FUN_0033fa74(param_1,&local_c,0x1c,puVar3 + 2,puVar3 + 3);
    if (iVar1 == 0) {
      puVar3[1] = 0x83;
      piVar2 = (int *)*param_3;
      if (piVar2 == (int *)0x0) {
        *param_3 = puVar3;
      }
      else {
        for (; *piVar2 != 0; piVar2 = (int *)*piVar2) {
        }
        *piVar2 = (int)puVar3;
      }
      *puVar3 = 0;
      return 0;
    }
  }
  return 0xc000009a;
}
